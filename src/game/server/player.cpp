/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include <new>
#include <engine/shared/config.h>
#include "player.h"

#include <engine/server.h>
#include "gamecontext.h"
#include <game/gamecore.h>
#include <game/version.h>
#include <game/server/teams.h>
#include "gamemodes/DDRace.h"
#include <time.h>

MACRO_ALLOC_POOL_ID_IMPL(CPlayer, MAX_CLIENTS)

IServer *CPlayer::Server() const { return m_pGameServer->Server(); }

CPlayer::CPlayer(CGameContext *pGameServer, int ClientID, int Team)
{
}

CPlayer::~CPlayer()
{
}

void CPlayer::Reset()
{
}

void CPlayer::Tick()
{
}

void CPlayer::PostTick()
{
}

void CPlayer::PostPostTick()
{
}

void CPlayer::Snap(int SnappingClient)
{
}

void CPlayer::FakeSnap()
{
}

void CPlayer::OnDisconnect(const char *pReason)
{
}

void CPlayer::OnPredictedInput(CNetObj_PlayerInput *NewInput)
{
}

void CPlayer::OnDirectInput(CNetObj_PlayerInput *NewInput)
{
}

void CPlayer::OnPredictedEarlyInput(CNetObj_PlayerInput *NewInput)
{
}

CCharacter *CPlayer::GetCharacter()
{
	return NULL;
}

void CPlayer::ThreadKillCharacter(int Weapon)
{
}

void CPlayer::KillCharacter(int Weapon)
{
}

void CPlayer::Respawn(bool WeakHook)
{
}

CCharacter* CPlayer::ForceSpawn(vec2 Pos)
{
	return NULL;
}

void CPlayer::SetTeam(int Team, bool DoChatMsg)
{
}

void CPlayer::TryRespawn()
{
}

bool CPlayer::AfkTimer(int NewTargetX, int NewTargetY)
{
	return false;
}

void CPlayer::AfkVoteTimer(CNetObj_PlayerInput *NewTarget)
{
}

void CPlayer::ProcessPause()
{
}

int CPlayer::Pause(int State, bool Force)
{
	return 0;
}

int CPlayer::ForcePause(int Time)
{
	return Pause(PAUSE_SPEC, true);
}

int CPlayer::IsPaused()
{
	return m_ForcePauseTime ? m_ForcePauseTime : -1 * m_Paused;
}

bool CPlayer::IsPlaying()
{
	return false;
}

void CPlayer::SpectatePlayerName(const char *pName)
{
}
