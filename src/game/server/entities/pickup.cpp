/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include <game/generated/protocol.h>
#include <game/server/gamecontext.h>
#include "pickup.h"

#include <game/server/teams.h>

CPickup::CPickup(CGameWorld *pGameWorld, int Type, int SubType, int Layer, int Number)
: CEntity(pGameWorld, CGameWorld::ENTTYPE_PICKUP)
{
}

void CPickup::Reset()
{
}

void CPickup::Tick()
{
}

void CPickup::TickPaused()
{
}

void CPickup::Snap(int SnappingClient)
{
}

void CPickup::Move()
{
}
