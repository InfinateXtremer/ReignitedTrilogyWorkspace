

#pragma once

#include "CoreMinimal.h"
#include "PhasmidLightingManager.h"
#include "LevelTransportRecord.h"
#include "ManagerState.h"
#include "GameFramework/Actor.h"
#include "TransportManager.generated.h"



USTRUCT(BlueprintType)
struct FLevelTransportRecord
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class ULevelStreaming*> streamObjects;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class APortal* sourcePortal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class APortal* targetPortal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class APawn* playerCharacter;

};


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTransportManagerLoadCompleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTransportManagerLevelActivated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTransportManagerLevelDeactivated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTransportManagerLevelVisibilityEvent);


UCLASS()
class FALCON_API ATransportManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATransportManager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeInOutTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LevelOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector BaseLevelPosition;

	UPROPERTY(BlueprintAssignable)
	FTransportManagerLoadCompleted LoadCompleted;
	UPROPERTY(BlueprintAssignable)
	FTransportManagerLevelActivated LevelActivated;
	UPROPERTY(BlueprintAssignable)
	FTransportManagerLevelDeactivated LevelDeactivated;
	UPROPERTY(BlueprintAssignable)
	FTransportManagerLevelVisibilityEvent LevelVisibilityEvent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<APhasmidLightingManager> GlobalLightingManager;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FLevelTransportRecord> records;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> PhasmidActorsToTick;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APhasmidLightingManager* IncomingLightingManager;


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	TEnumAsByte<EManagerState> WaitForAddToWorld();

	/*
	void UnloadTransportLevelsExcept(FMasterLevelData SavedRecord, bool unloadActiveTransportLevel);
	void UnloadTransportLevels(bool unloadActiveTransportLevel);
	void TurnLightingManagerOn();
	void TurnLightingManagerOff();
	TEnumAsByte<EManagerState> TickUnloadingLevels();
	TEnumAsByte<EManagerState> TickNotifyDelay();
	TEnumAsByte<EManagerState> TickLoadingLevels();
	TEnumAsByte<EManagerState> TickIdle();
	void SubLevelUnloadCompleted();
	void StartAtLevel(const class UObject* WorldContextObject, const FName& LevelPath, const TArray<FName> sublevelNames, bool isRestart, TEnumAsByte<EFalconLoadScreen::Type> loadScreenType, FString Checkpoint, FLatentActionInfo LatentInfo);
	void ShowInventoryUI();
	void SetIncomingLighting();
	void SetActiveLevelVisibility(bool bIsVisible);
	void QueueTransport(const class UObject* WorldContextObject, const FName& LevelPath, const TArray<FName> sublevelNames, TEnumAsByte<ELevelTransportType> transportType, TEnumAsByte<ELevelRecordType> recordType, bool bMakeVisibleAfterLoad, FString Checkpoint, FLatentActionInfo LatentInfo, bool completeLoad, class APortal* iSourcePortal, class APortal* iTargetPortal);
	TEnumAsByte<EManagerState> Notify();
	class ULevel* GetCurrentSublevelWithString(FString substring);
	class AActor* FindPlayerStartActor(const class UObject* WorldContextObject, FString ActorName, FString LevelName);
	class APortal* FindPlayerSpawnTransform(const class UObject* WorldContextObject, FString ActorName, FTransform& outSpawnTransform, FString LevelName);
	void CallOnPlayerReadyS3();
	void CallOnPlayerReady();

	*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
