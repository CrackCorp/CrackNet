/* (c) Shereef Marzouk. See "licence DDRace.txt" and the readme.txt in the root of the distribution for more information. */
#include "teams.h"
#include "score.h"
#include <engine/shared/config.h>

CGameTeams::CGameTeams(CGameContext *pGameContext) :
		m_pGameContext(pGameContext)
{
	Reset();
}

void CGameTeams::Reset()
{
}

void CGameTeams::OnCharacterStart(int ClientID)
{
}

void CGameTeams::OnCharacterFinish(int ClientID)
{
}

void CGameTeams::CheckTeamFinished(int Team)
{
}

bool CGameTeams::SetCharacterTeam(int ClientID, int Team)
{
	return false;
}

void CGameTeams::SetForceCharacterTeam(int ClientID, int Team)
{
}

void CGameTeams::ForceLeaveTeam(int ClientID)
{
}

int CGameTeams::Count(int Team) const
{
	return m_MembersCount[Team];
}

void CGameTeams::ChangeTeamState(int Team, int State)
{
}

void CGameTeams::onChangeTeamState(int Team, int State, int OldState)
{
}

bool CGameTeams::TeamFinished(int Team)
{
	return false;
}

int64_t CGameTeams::TeamMask(int Team, int ExceptID, int Asker)
{
	return 0;
}

void CGameTeams::SendTeamsState(int ClientID)
{
}

int CGameTeams::GetDDRaceState(CPlayer* Player)
{
	return 0;
}

void CGameTeams::SetDDRaceState(CPlayer* Player, int DDRaceState)
{
}

int CGameTeams::GetStartTime(CPlayer* Player)
{
	return 0;
}

void CGameTeams::SetStartTime(CPlayer* Player, int StartTime)
{
}

void CGameTeams::SetCpActive(CPlayer* Player, int CpActive)
{
	if (!Player)
		return;

	CCharacter* pChar = Player->GetCharacter();
	if (pChar)
		pChar->m_CpActive = CpActive;
}

float *CGameTeams::GetCpCurrent(CPlayer* Player)
{
	if (!Player)
		return NULL;

	CCharacter* pChar = Player->GetCharacter();
	if (pChar)
		return pChar->m_CpCurrent;
	return NULL;
}

void CGameTeams::OnTeamFinish(CPlayer** Players, unsigned int Size, float Time, const char *pTimestamp)
{
}

void CGameTeams::OnFinish(CPlayer* Player, float Time, const char *pTimestamp)
{
}

void CGameTeams::OnCharacterSpawn(int ClientID)
{
}

void CGameTeams::OnCharacterDeath(int ClientID, int Weapon)
{
}

void CGameTeams::SetTeamLock(int Team, bool Lock)
{
}

void CGameTeams::ResetInvited(int Team)
{
}

void CGameTeams::SetClientInvited(int Team, int ClientID, bool Invited)
{
}

void CGameTeams::KillSavedTeam(int Team)
{
}
