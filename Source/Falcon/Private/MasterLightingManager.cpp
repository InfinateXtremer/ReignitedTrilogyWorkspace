

#include "MasterLightingManager.h"

void AMasterLightingManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMasterLightingManager::SetLightingManager(const UObject * WorldContextObject, APhasmidLightingManager * OutgoingLightingManager, APhasmidLightingManager * IncomingLightingManager, bool Delay)
{
}

void AMasterLightingManager::SetCurrentLightsOn()
{
}

void AMasterLightingManager::SetCurrentLightsOff()
{
}

void AMasterLightingManager::CrossfadeLightingManagers_2(APhasmidLightingManager * OutgoingLightingManager, APhasmidLightingManager * IncomingLightingManager, float Alpha)
{
}

void AMasterLightingManager::CrossfadeLightingManagers(const UObject * WorldContextObject, float fadeTime, APhasmidLightingManager * OutgoingLightingManager, APhasmidLightingManager * IncomingLightingManager, FLatentActionInfo LatentInfo)
{
}

void AMasterLightingManager::BeginPlay()
{
}
