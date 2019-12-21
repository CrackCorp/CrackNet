/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include <base/tl/sorted_array.h>

#include <new>
#include <base/math.h>
#include <engine/shared/config.h>
#include <engine/map.h>
#include <engine/console.h>
#include <engine/engine.h>
#include <engine/server/server.h>
#include <engine/shared/datafile.h>
#include <engine/shared/linereader.h>
#include <engine/storage.h>
#include "gamecontext.h"
#include <game/version.h>
#include <game/collision.h>
#include <game/gamecore.h>

#include "gamemodes/DDRace.h"
#include "score.h"
#include "score/file_score.h"
#if defined(CONF_SQL)
#include "score/sql_score.h"
#endif

enum
{
};

void CGameContext::Construct(int Resetting)
{
}

CGameContext::CGameContext(int Resetting)
{
}

CGameContext::CGameContext()
{
}

CGameContext::~CGameContext()
{
}

void CGameContext::Clear()
{
}


void CGameContext::TeeHistorianWrite(const void *pData, int DataSize, void *pUser)
{
}

void CGameContext::CommandCallback(int ClientID, int FlagMask, const char *pCmd, IConsole::IResult *pResult, void *pUser)
{
}

class CCharacter *CGameContext::GetPlayerChar(int ClientID)
{
}

bool CGameContext::EmulateBug(int Bug)
{
}

void CGameContext::CreateDamageInd(vec2 Pos, float Angle, int Amount, int64_t Mask)
{
}

void CGameContext::CreateHammerHit(vec2 Pos, int64_t Mask)
{
}

void CGameContext::CreateExplosion(vec2 Pos, int Owner, int Weapon, bool NoDamage, int ActivatedTeam, int64_t Mask)
{
}

void CGameContext::CreatePlayerSpawn(vec2 Pos, int64_t Mask)
{
}

void CGameContext::CreateDeath(vec2 Pos, int ClientID, int64_t Mask)
{
}

void CGameContext::CreateSound(vec2 Pos, int Sound, int64_t Mask)
{
}

void CGameContext::CreateSoundGlobal(int Sound, int Target)
{
}

void CGameContext::CallVote(int ClientID, const char *pDesc, const char *pCmd, const char *pReason, const char *pChatmsg)
{
}

void CGameContext::SendChatTarget(int To, const char *pText)
{
}

void CGameContext::SendChatTeam(int Team, const char *pText)
{
}

void CGameContext::SendChat(int ChatterClientID, int Team, const char *pText, int SpamProtectionClientID)
{
}

void CGameContext::SendEmoticon(int ClientID, int Emoticon)
{
}

void CGameContext::SendWeaponPickup(int ClientID, int Weapon)
{
}


void CGameContext::SendBroadcast(const char *pText, int ClientID, bool IsImportant)
{
}

void CGameContext::StartVote(const char *pDesc, const char *pCommand, const char *pReason)
{
}


void CGameContext::EndVote()
{
}

void CGameContext::SendVoteSet(int ClientID)
{
}

void CGameContext::SendVoteStatus(int ClientID, int Total, int Yes, int No)
{
}

void CGameContext::AbortVoteKickOnDisconnect(int ClientID)
{
}


void CGameContext::CheckPureTuning()
{
}

void CGameContext::SendTuningParams(int ClientID, int Zone)
{
}

void CGameContext::OnTick()
{
}

// Server hooks
void CGameContext::OnClientDirectInput(int ClientID, void *pInput)
{
}

void CGameContext::OnClientPredictedInput(int ClientID, void *pInput)
{
}

void CGameContext::OnClientPredictedEarlyInput(int ClientID, void *pInput)
{
}

struct CVoteOptionServer *CGameContext::GetVoteOption(int Index)
{
	return 0x0;
}

void CGameContext::ProgressVoteOptions(int ClientID)
{
}

void CGameContext::OnClientEnter(int ClientID)
{
}

void CGameContext::OnClientConnected(int ClientID)
{
}

void CGameContext::OnClientDrop(int ClientID, const char *pReason)
{
}

void CGameContext::OnClientEngineJoin(int ClientID)
{
}

void CGameContext::OnClientEngineDrop(int ClientID, const char *pReason)
{
}

void CGameContext::OnMessage(int MsgID, CUnpacker *pUnpacker, int ClientID)
{
}

void CGameContext::ConTuneParam(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConToggleTuneParam(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConTuneReset(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConTuneDump(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConTuneZone(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConTuneDumpZone(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConTuneResetZone(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConTuneSetZoneMsgEnter(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConTuneSetZoneMsgLeave(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConMapbug(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConSwitchOpen(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConPause(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConChangeMap(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConRandomMap(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConRandomUnfinishedMap(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConRestart(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConBroadcast(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConSay(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConSetTeam(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConSetTeamAll(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConAddVote(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConRemoveVote(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConForceVote(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConClearVotes(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConVote(IConsole::IResult *pResult, void *pUserData)
{
}

void CGameContext::ConchainSpecialMotdupdate(IConsole::IResult *pResult, void *pUserData, IConsole::FCommandCallback pfnCallback, void *pCallbackUserData)
{
}

void CGameContext::OnConsoleInit()
{
}

void CGameContext::OnInit(/*class IKernel *pKernel*/)
{
}

void CGameContext::DeleteTempfile()
{
}

void CGameContext::OnMapChange(char *pNewMapName, int MapNameSize)
{
}

void CGameContext::OnShutdown(bool FullShutdown)
{
}

void CGameContext::LoadMapSettings()
{
}

void CGameContext::OnSnap(int ClientID)
{
}
void CGameContext::OnPreSnap() {
}
void CGameContext::OnPostSnap()
{
}

bool CGameContext::IsClientReady(int ClientID)
{
	return false;
}

bool CGameContext::IsClientPlayer(int ClientID)
{
	return false;
}

CUuid CGameContext::GameUuid() {
	CUuid x;
	return x;
}
const char *CGameContext::GameType() { return 0;
}
const char *CGameContext::Version() { return 0;
}
const char *CGameContext::NetVersion() { return 0;
}

IGameServer *CreateGameServer() {
	return 0x0;
}

void CGameContext::SendChatResponseAll(const char *pLine, void *pUser)
{
}

void CGameContext::SendChatResponse(const char *pLine, void *pUser, bool Highlighted)
{
}

bool CGameContext::PlayerCollision()
{
}

bool CGameContext::PlayerHooking()
{
}

float CGameContext::PlayerJetpack()
{
	return 0.0f;
}

void CGameContext::OnSetAuthed(int ClientID, int Level)
{
}

void CGameContext::SendRecord(int ClientID)
{
}

int CGameContext::ProcessSpamProtection(int ClientID)
{
	return 0;
}

int CGameContext::GetDDRaceTeam(int ClientID)
{
	return 0;
}

void CGameContext::ResetTuning()
{
}

bool CheckClientID2(int ClientID)
{
}

void CGameContext::Whisper(int ClientID, char *pStr)
{
}

void CGameContext::WhisperID(int ClientID, int VictimID, char *pMessage)
{
}

void CGameContext::Converse(int ClientID, char *pStr)
{
}

bool CGameContext::IsVersionBanned(int Version)
{
	return false;
}

void CGameContext::List(int ClientID, const char *pFilter)
{
}

int CGameContext::GetClientVersion(int ClientID)
{
	return 0;
}

void CGameContext::SetClientVersion(int ClientID, int Version)
{
}

bool CGameContext::PlayerModerating()
{
	return false;
}

void CGameContext::ForceVote(int EnforcerID, bool Success)
{
}
