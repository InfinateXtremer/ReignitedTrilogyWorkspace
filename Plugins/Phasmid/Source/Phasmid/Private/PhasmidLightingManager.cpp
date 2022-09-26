

#include "PhasmidLightingManager.h"


// Sets default values
APhasmidLightingManager::APhasmidLightingManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



void APhasmidLightingManager::TransitionLightingManagers(float fadeTime, APhasmidLightingManager * OutgoingLightingManager, APhasmidLightingManager * IncomingLightingManager)
{
}

void APhasmidLightingManager::SetNewLightingManager(APhasmidLightingManager * OutgoingLightingManager, APhasmidLightingManager * IncomingLightingManager, bool Delay)
{
}

void APhasmidLightingManager::SetEnableSkylight(bool Enabled)
{
}

void APhasmidLightingManager::ScaleIntensity(float IntensityCoefficient)
{
}

// Called when the game starts or when spawned
void APhasmidLightingManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APhasmidLightingManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

