

#include "TransportManager.h"


// Sets default values
ATransportManager::ATransportManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

TEnumAsByte<EManagerState> ATransportManager::WaitForAddToWorld()
{
	return TEnumAsByte<EManagerState>();
}

void ATransportManager::UnloadTransportLevelsExcept(FMasterLevelData SavedRecord, bool unloadActiveTransportLevel)
{
}

void ATransportManager::UnloadTransportLevels(bool unloadActiveTransportLevel)
{
}

void ATransportManager::TurnLightingManagerOn()
{
}

void ATransportManager::TurnLightingManagerOff()
{
}

TEnumAsByte<EManagerState> ATransportManager::TickUnloadingLevels()
{
	return TEnumAsByte<EManagerState>();
}

TEnumAsByte<EManagerState> ATransportManager::TickNotifyDelay()
{
	return TEnumAsByte<EManagerState>();
}

TEnumAsByte<EManagerState> ATransportManager::TickLoadingLevels()
{
	return TEnumAsByte<EManagerState>();
}

TEnumAsByte<EManagerState> ATransportManager::TickIdle()
{
	return TEnumAsByte<EManagerState>();
}

void ATransportManager::SubLevelUnloadCompleted()
{
}

void ATransportManager::StartAtLevel(const UObject * WorldContextObject, const FName & LevelPath, const TArray<FName> sublevelNames, bool isRestart, TEnumAsByte<EFalconLoadScreen::Type> loadScreenType, FString Checkpoint, FLatentActionInfo LatentInfo)
{
}

void ATransportManager::ShowInventoryUI()
{
}

void ATransportManager::SetIncomingLighting()
{
}

void ATransportManager::SetActiveLevelVisibility(bool bIsVisible)
{
}

void ATransportManager::QueueTransport(const UObject * WorldContextObject, const FName & LevelPath, const TArray<FName> sublevelNames, TEnumAsByte<ELevelTransportType> transportType, TEnumAsByte<ELevelRecordType> recordType, bool bMakeVisibleAfterLoad, FString Checkpoint, FLatentActionInfo LatentInfo, bool completeLoad, APortal * iSourcePortal, APortal * iTargetPortal)
{
}

TEnumAsByte<EManagerState> ATransportManager::Notify()
{
	return TEnumAsByte<EManagerState>();
}

ULevel * ATransportManager::GetCurrentSublevelWithString(FString substring)
{
	return nullptr;
}

AActor * ATransportManager::FindPlayerStartActor(const UObject * WorldContextObject, FString ActorName, FString LevelName)
{
	return nullptr;
}

APortal * ATransportManager::FindPlayerSpawnTransform(const UObject * WorldContextObject, FString ActorName, FTransform & outSpawnTransform, FString LevelName)
{
	return nullptr;
}

void ATransportManager::CallOnPlayerReadyS3()
{
}

void ATransportManager::CallOnPlayerReady()
{
}


// Called when the game starts or when spawned
void ATransportManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATransportManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

