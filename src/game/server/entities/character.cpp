/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include <new>
#include <antibot/antibot_data.h>
#include <engine/shared/config.h>
#include <game/server/gamecontext.h>
#include <game/mapitems.h>

#include "character.h"
#include "laser.h"
#include "projectile.h"

#include <game/server/gamemodes/DDRace.h>
#include <game/server/score.h>
#include "light.h"

MACRO_ALLOC_POOL_ID_IMPL(CCharacter, MAX_CLIENTS)

// Character, "physical" player's part
CCharacter::CCharacter(CGameWorld *pWorld)
: CEntity(pWorld, CGameWorld::ENTTYPE_CHARACTER)
{
}

void CCharacter::Reset()
{
}

bool CCharacter::Spawn(CPlayer *pPlayer, vec2 Pos)
{
	return false;
}

void CCharacter::Destroy()
{
}

void CCharacter::SetWeapon(int W)
{
}

void CCharacter::SetSolo(bool Solo)
{
}

bool CCharacter::IsGrounded()
{
	return false;
}

void CCharacter::HandleJetpack()
{
}

void CCharacter::HandleNinja()
{
}


void CCharacter::DoWeaponSwitch()
{
}

void CCharacter::HandleWeaponSwitch()
{
}

void CCharacter::FireWeapon()
{
}

void CCharacter::HandleWeapons()
{
}

void CCharacter::GiveNinja()
{
}

void CCharacter::RemoveNinja()
{
}

void CCharacter::SetEmote(int Emote, int Tick)
{
}

void CCharacter::OnPredictedInput(CNetObj_PlayerInput *pNewInput)
{
}

void CCharacter::OnDirectInput(CNetObj_PlayerInput *pNewInput)
{
}

void CCharacter::ResetInput()
{
}

void CCharacter::Tick()
{
}

void CCharacter::TickDefered()
{
}

void CCharacter::TickPaused()
{
}

bool CCharacter::IncreaseHealth(int Amount)
{
	return false;
}

bool CCharacter::IncreaseArmor(int Amount)
{
	return false;
}

void CCharacter::Die(int Killer, int Weapon)
{
}

bool CCharacter::TakeDamage(vec2 Force, int Dmg, int From, int Weapon)
{
	return false;
}

void CCharacter::Snap(int SnappingClient)
{
}

int CCharacter::NetworkClipped(int SnappingClient)
{
	return 0;
}

int CCharacter::NetworkClipped(int SnappingClient, vec2 CheckPos)
{
	return 0;
}

// DDRace

bool CCharacter::CanCollide(int ClientID)
{
	return false;
}
bool CCharacter::SameTeam(int ClientID)
{
	return false;
}

int CCharacter::Team()
{
	return 0;
}

CGameTeams* CCharacter::Teams()
{
	return NULL;
}

void CCharacter::FillAntibot(CAntibotCharacterData *pData)
{
	pData->m_Pos = m_Pos;
	pData->m_Vel = m_Core.m_Vel;
	pData->m_Angle = m_Core.m_Angle;
	pData->m_HookedPlayer = m_Core.m_HookedPlayer;
	pData->m_SpawnTick = m_SpawnTick;
	pData->m_WeaponChangeTick = m_WeaponChangeTick;
	pData->m_aLatestInputs[0].m_TargetX = m_LatestInput.m_TargetX;
	pData->m_aLatestInputs[0].m_TargetY = m_LatestInput.m_TargetY;
	pData->m_aLatestInputs[1].m_TargetX = m_LatestPrevInput.m_TargetX;
	pData->m_aLatestInputs[1].m_TargetY = m_LatestPrevInput.m_TargetY;
	pData->m_aLatestInputs[2].m_TargetX = m_LatestPrevPrevInput.m_TargetX;
	pData->m_aLatestInputs[2].m_TargetY = m_LatestPrevPrevInput.m_TargetY;
}

void CCharacter::HandleBroadcast()
{
}

void CCharacter::HandleSkippableTiles(int Index)
{
}

bool CCharacter::IsSwitchActiveCb(int Number, void *pUser)
{
	return false;
}

void CCharacter::HandleTiles(int Index)
{
}

void CCharacter::HandleTuneLayer()
{
}

void CCharacter::SendZoneMsgs()
{
}

CAntibot *CCharacter::Antibot()
{
	return GameServer()->Antibot();
}

void CCharacter::DDRaceTick()
{
}


void CCharacter::DDRacePostCoreTick()
{
}

bool CCharacter::Freeze(int Seconds)
{
	return false;
}

bool CCharacter::Freeze()
{
	return false;
}

bool CCharacter::UnFreeze()
{
	return false;
}

void CCharacter::GiveWeapon(int Weapon, bool Remove)
{
}

void CCharacter::GiveAllWeapons()
{
}

void CCharacter::Pause(bool Pause)
{
}

void CCharacter::DDRaceInit()
{
}

void CCharacter::Rescue()
{
}
