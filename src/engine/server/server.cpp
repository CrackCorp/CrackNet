/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */

#define _WIN32_WINNT 0x0501

#include <base/math.h>
#include <base/system.h>

#include <engine/config.h>
#include <engine/console.h>
#include <engine/engine.h>
#include <engine/map.h>
#include <engine/masterserver.h>
#include <engine/server.h>
#include <engine/storage.h>

#include <engine/shared/compression.h>
#include <engine/shared/config.h>
#include <engine/shared/datafile.h>
#include <engine/shared/demo.h>
#include <engine/shared/econ.h>
#include <engine/shared/filecollection.h>
#include <engine/shared/netban.h>
#include <engine/shared/network.h>
#include <engine/shared/packer.h>
#include <engine/shared/protocol.h>
#include <engine/shared/protocol_ex.h>
#include <engine/shared/snapshot.h>
#include <engine/shared/fifo.h>

#include <mastersrv/mastersrv.h>

// DDRace
#include <vector>
#include <engine/shared/linereader.h>
#include <game/extrainfo.h>

#include "register.h"
#include "server.h"

#if defined(CONF_FAMILY_WINDOWS)
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
#endif


CSnapIDPool::CSnapIDPool()
{
}

void CSnapIDPool::Reset()
{
}


void CSnapIDPool::RemoveFirstTimeout()
{
}

int CSnapIDPool::NewID()
{
	return 0;
}

void CSnapIDPool::TimeoutIDs()
{
}

void CSnapIDPool::FreeID(int ID)
{
}


void CServerBan::InitServerBan(IConsole *pConsole, IStorage *pStorage, CServer *pServer)
{
}

template<class T>
int CServerBan::BanExt(T *pBanPool, const typename T::CDataType *pData, int Seconds, const char *pReason)
{
	return 0;
}

int CServerBan::BanAddr(const NETADDR *pAddr, int Seconds, const char *pReason)
{
	return 0;
}

int CServerBan::BanRange(const CNetRange *pRange, int Seconds, const char *pReason)
{
	return 0;
}

void CServerBan::ConBanExt(IConsole::IResult *pResult, void *pUser)
{
}


void CServer::CClient::Reset()
{
}

CServer::CServer()
{
}

int CServer::TrySetClientName(int ClientID, const char *pName)
{
	return 0;
}

void CServer::SetClientName(int ClientID, const char *pName)
{
}

void CServer::SetClientClan(int ClientID, const char *pClan)
{
}

void CServer::SetClientCountry(int ClientID, int Country)
{
}

void CServer::SetClientScore(int ClientID, int Score)
{
}

void CServer::SetClientFlags(int ClientID, int Flags)
{
}

void CServer::Kick(int ClientID, const char *pReason)
{
}

void CServer::Ban(int ClientID, int Seconds, const char *pReason)
{
}

/*int CServer::Tick()
{
}*/

int64 CServer::TickStartTime(int Tick)
{
	return 0;
}

/*int CServer::TickSpeed()
{
}*/

int CServer::Init()
{
	return 0;
}

void CServer::SetRconCID(int ClientID)
{
}

int CServer::GetAuthedState(int ClientID)
{
	return 0;
}

const char *CServer::GetAuthName(int ClientID)
{
}

int CServer::GetClientInfo(int ClientID, CClientInfo *pInfo)
{
	return 0;
}

void CServer::GetClientAddr(int ClientID, char *pAddrStr, int Size)
{
}


const char *CServer::ClientName(int ClientID)
{
}

const char *CServer::ClientClan(int ClientID)
{
}

int CServer::ClientCountry(int ClientID)
{
	return 0;
}

bool CServer::ClientIngame(int ClientID)
{
	return false;
}

bool CServer::ClientAuthed(int ClientID)
{
	return false;
}

int CServer::MaxClients() const
{
	return 0;
}

int CServer::ClientCount()
{
	return 0;
}

int CServer::DistinctClientCount()
{
	return 0;
}

int CServer::SendMsg(CMsgPacker *pMsg, int Flags, int ClientID)
{
	return 0;
}

void CServer::DoSnapshot()
{
}

int CServer::ClientRejoinCallback(int ClientID, void *pUser)
{
	return 0;
}

int CServer::NewClientNoAuthCallback(int ClientID, void *pUser)
{
	return 0;
}

int CServer::NewClientCallback(int ClientID, void *pUser)
{
	return 0;
}

void CServer::InitDnsbl(int ClientID)
{
}

#ifdef CONF_FAMILY_UNIX
void CServer::SendConnLoggingCommand(CONN_LOGGING_CMD Cmd, const NETADDR* pAddr)
{
}
#endif

int CServer::DelClientCallback(int ClientID, const char *pReason, void *pUser)
{
	return 0;
}

void CServer::SendRconType(int ClientID, bool UsernameReq)
{
}

void CServer::GetMapInfo(char *pMapName, int MapNameSize, int *pMapSize, SHA256_DIGEST *pMapSha256, int *pMapCrc)
{
}

void CServer::SendCapabilities(int ClientID)
{
}

void CServer::SendMap(int ClientID)
{
}

void CServer::SendMapData(int ClientID, int Chunk)
{
}

void CServer::SendConnectionReady(int ClientID)
{
}

void CServer::SendRconLine(int ClientID, const char *pLine)
{
}

void CServer::SendRconLineAuthed(const char *pLine, void *pUser, bool Highlighted)
{
}

void CServer::SendRconCmdAdd(const IConsole::CCommandInfo *pCommandInfo, int ClientID)
{
}

void CServer::SendRconCmdRem(const IConsole::CCommandInfo *pCommandInfo, int ClientID)
{
}

void CServer::UpdateClientRconCommands()
{
}

void CServer::ProcessClientPacket(CNetChunk *pPacket)
{
}

void CServer::SendServerInfoConnless(const NETADDR *pAddr, int Token, int Type)
{
}

static inline int GetCacheIndex(int Type, bool SendClient)
{
}

CServer::CCache::CCache()
{
}

CServer::CCache::~CCache()
{
}

CServer::CCache::CCacheChunk::CCacheChunk(const void *pData, int Size)
{
}

void CServer::CCache::AddChunk(const void *pData, int Size)
{
}

void CServer::CCache::Clear()
{
}

void CServer::CacheServerInfo(CCache *pCache, int Type, bool SendClients)
{
}

void CServer::SendServerInfo(const NETADDR *pAddr, int Token, int Type, bool SendClients)
{
}

void CServer::ExpireServerInfo()
{
}

void CServer::UpdateServerInfo(bool Resend)
{
}

void CServer::PumpNetwork()
{
}

char *CServer::GetMapName()
{
	return 0;
}

int CServer::LoadMap(const char *pMapName)
{
	return 0;
}

void CServer::InitRegister(CNetServer *pNetServer, IEngineMasterServer *pMasterServer, IConsole *pConsole)
{
}

int CServer::Run()
{
	return 0;
}

void CServer::ConTestingCommands(CConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConRescue(CConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConKick(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConStatus(IConsole::IResult *pResult, void *pUser)
{
}

static int GetAuthLevel(const char *pLevel)
{
	return 0;
}

void CServer::AuthRemoveKey(int KeySlot)
{
}

void CServer::ConAuthAdd(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConAuthAddHashed(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConAuthUpdate(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConAuthUpdateHashed(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConAuthRemove(IConsole::IResult *pResult, void *pUser)
{
}

static void ListKeysCallback(const char *pIdent, int Level, void *pUser)
{
}

void CServer::ConAuthList(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConNameBan(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConNameUnban(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConNameBans(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConShutdown(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::DemoRecorder_HandleAutoStart()
{
}

bool CServer::DemoRecorder_IsRecording()
{
	return false;
}

void CServer::SaveDemo(int ClientID, float Time)
{
}

void CServer::StartRecord(int ClientID)
{
}

void CServer::StopRecord(int ClientID)
{
}

bool CServer::IsRecording(int ClientID)
{
	return false;
}

void CServer::ConRecord(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConStopRecord(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConMapReload(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConLogout(IConsole::IResult *pResult, void *pUser)
{
}

void CServer::ConShowIps(IConsole::IResult *pResult, void *pUser)
{
}

#if defined (CONF_SQL)

void CServer::ConAddSqlServer(IConsole::IResult *pResult, void *pUserData)
{
}

void CServer::ConDumpSqlServers(IConsole::IResult *pResult, void *pUserData)
{
}

void CServer::CreateTablesThread(void *pData)
{
}

#endif

void CServer::ConchainSpecialInfoupdate(IConsole::IResult *pResult, void *pUserData, IConsole::FCommandCallback pfnCallback, void *pCallbackUserData)
{
}

void CServer::ConchainMaxclientsperipUpdate(IConsole::IResult *pResult, void *pUserData, IConsole::FCommandCallback pfnCallback, void *pCallbackUserData)
{
}

void CServer::ConchainCommandAccessUpdate(IConsole::IResult *pResult, void *pUserData, IConsole::FCommandCallback pfnCallback, void *pCallbackUserData)
{
}

void CServer::ConchainConsoleOutputLevelUpdate(IConsole::IResult *pResult, void *pUserData, IConsole::FCommandCallback pfnCallback, void *pCallbackUserData)
{
}

void CServer::LogoutClient(int ClientID, const char *pReason)
{
}

void CServer::LogoutKey(int Key, const char *pReason)
{
}

void CServer::ConchainRconPasswordChangeGeneric(int Level, const char *pCurrent, IConsole::IResult *pResult)
{
}

void CServer::ConchainRconPasswordChange(IConsole::IResult *pResult, void *pUserData, IConsole::FCommandCallback pfnCallback, void *pCallbackUserData)
{
}

void CServer::ConchainRconModPasswordChange(IConsole::IResult *pResult, void *pUserData, IConsole::FCommandCallback pfnCallback, void *pCallbackUserData)
{
}

void CServer::ConchainRconHelperPasswordChange(IConsole::IResult *pResult, void *pUserData, IConsole::FCommandCallback pfnCallback, void *pCallbackUserData)
{
}

#if defined(CONF_FAMILY_UNIX)
void CServer::ConchainConnLoggingServerChange(IConsole::IResult *pResult, void *pUserData, IConsole::FCommandCallback pfnCallback, void *pCallbackUserData)
{
}
#endif

void CServer::RegisterCommands()
{
}


int CServer::SnapNewID()
{
	return 0;
}

void CServer::SnapFreeID(int ID)
{
}


void *CServer::SnapNewItem(int Type, int ID, int Size)
{
}

void CServer::SnapSetStaticsize(int ItemType, int Size)
{
}

static CServer *CreateServer() {
}

int main(int argc, const char **argv) // ignore_convention
{
	return 0;
}

// DDRace

void CServer::GetClientAddr(int ClientID, NETADDR *pAddr)
{
}

const char *CServer::GetAnnouncementLine(char const *pFileName)
{
}

int *CServer::GetIdMap(int ClientID)
{
	return 0;
}

bool CServer::SetTimedOut(int ClientID, int OrigID)
{
	return false;
}

void CServer::SetErrorShutdown(const char *pReason)
{
}
