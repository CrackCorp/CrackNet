/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include <engine/shared/config.h>
#include <game/mapitems.h>

#include <game/generated/protocol.h>

#include "entities/pickup.h"
#include "gamecontroller.h"
#include "gamecontext.h"

#include "entities/light.h"
#include "entities/dragger.h"
#include "entities/gun.h"
#include "entities/projectile.h"
#include "entities/plasma.h"
#include "entities/door.h"
#include <game/layers.h>


IGameController::IGameController(class CGameContext *pGameServer)
{

}

IGameController::~IGameController()
{
}

float IGameController::EvaluateSpawnPos(CSpawnEval *pEval, vec2 Pos)
{
	return 0.0f;
}

void IGameController::EvaluateSpawnType(CSpawnEval *pEval, int Type)
{

}

bool IGameController::CanSpawn(int Team, vec2 *pOutPos)
{
	CSpawnEval Eval;

	// spectators can't spawn
	if(Team == TEAM_SPECTATORS)
		return false;

	EvaluateSpawnType(&Eval, 0);
	EvaluateSpawnType(&Eval, 1);
	EvaluateSpawnType(&Eval, 2);

	*pOutPos = Eval.m_Pos;
	return Eval.m_Got;
}

bool IGameController::OnEntity(int Index, vec2 Pos, int Layer, int Flags, int Number)
{
	return false;
}

void IGameController::EndRound()
{
	if(m_Warmup) // game can't end when we are running warmup
		return;

	GameServer()->m_World.m_Paused = true;
	m_GameOverTick = Server()->Tick();
	m_SuddenDeath = 0;
}

void IGameController::ResetGame()
{
	GameServer()->m_World.m_ResetRequested = true;
}

const char *IGameController::GetTeamName(int Team)
{
	if(Team == 0)
		return "game";
	return "spectators";
}

//static bool IsSeparator(char c) { return c == ';' || c == ' ' || c == ',' || c == '\t'; }

void IGameController::StartRound()
{
	ResetGame();

	m_RoundStartTick = Server()->Tick();
	m_SuddenDeath = 0;
	m_GameOverTick = -1;
	GameServer()->m_World.m_Paused = false;
	m_ForceBalanced = false;
	Server()->DemoRecorder_HandleAutoStart();
	char aBuf[256];
	str_format(aBuf, sizeof(aBuf), "start round type='%s' teamplay='%d'", m_pGameType, m_GameFlags&GAMEFLAG_TEAMS);
	GameServer()->Console()->Print(IConsole::OUTPUT_LEVEL_DEBUG, "game", aBuf);
}

void IGameController::ChangeMap(const char *pToMap)
{
	str_copy(g_Config.m_SvMap, pToMap, sizeof(g_Config.m_SvMap));
}

void IGameController::PostReset()
{
	for(int i = 0; i < MAX_CLIENTS; i++)
		if(GameServer()->m_apPlayers[i])
			GameServer()->m_apPlayers[i]->Respawn();
}

int IGameController::OnCharacterDeath(class CCharacter *pVictim, class CPlayer *pKiller, int Weapon)
{
	return 0;
}

void IGameController::OnCharacterSpawn(class CCharacter *pChr)
{
	// default health
	pChr->IncreaseHealth(10);

	// give default weapons
	pChr->GiveWeapon(WEAPON_HAMMER);
	pChr->GiveWeapon(WEAPON_GUN);
}

void IGameController::DoWarmup(int Seconds)
{
	if(Seconds < 0)
		m_Warmup = 0;
	else
		m_Warmup = Seconds*Server()->TickSpeed();
}

bool IGameController::IsForceBalanced()
{
	return false;
}


bool IGameController::CanBeMovedOnBalance(int ClientID)
{
	return true;
}

void IGameController::Tick()
{

}

void IGameController::Snap(int SnappingClient)
{

}

int IGameController::GetAutoTeam(int NotThisID)
{
	return -1;
}

bool IGameController::CanJoinTeam(int Team, int NotThisID)
{
	return false;
}

int IGameController::ClampTeam(int Team)
{
	if(Team < 0)
		return TEAM_SPECTATORS;
	return 0;
}
