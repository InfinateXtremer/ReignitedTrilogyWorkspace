

#pragma once

#include "CoreMinimal.h"
#include "PhasmidLightingManager.h"
#include "ManagerState.h"
#include "MasterLevelDataTable.h"
#include "FalconLoadEnums.h"
#include "LevelRecordType.h"
#include "LevelTransportType.h"
#include "Engine/LatentActionManager.h"
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


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void UnloadTransportLevelsExcept(FMasterLevelData SavedRecord, bool unloadActiveTransportLevel);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void UnloadTransportLevels(bool unloadActiveTransportLevel);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void TurnLightingManagerOn();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void TurnLightingManagerOff();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	TEnumAsByte<EManagerState> TickUnloadingLevels();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	TEnumAsByte<EManagerState> TickNotifyDelay();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	TEnumAsByte<EManagerState> TickLoadingLevels();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	TEnumAsByte<EManagerState> TickIdle();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void SubLevelUnloadCompleted();


	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void StartAtLevel(const class UObject* WorldContextObject, const FName& LevelPath, const TArray<FName> sublevelNames, bool isRestart, TEnumAsByte<EFalconLoadScreen::Type> loadScreenType, FString Checkpoint, FLatentActionInfo LatentInfo);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void ShowInventoryUI();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void SetIncomingLighting();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void SetActiveLevelVisibility(bool bIsVisible);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void QueueTransport(const class UObject* WorldContextObject, const FName& LevelPath, const TArray<FName> sublevelNames, TEnumAsByte<ELevelTransportType> transportType, TEnumAsByte<ELevelRecordType> recordType, bool bMakeVisibleAfterLoad, FString Checkpoint, FLatentActionInfo LatentInfo, bool completeLoad, class APortal* iSourcePortal, class APortal* iTargetPortal);
	

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	TEnumAsByte<EManagerState> Notify();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	class ULevel* GetCurrentSublevelWithString(FString substring);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	class AActor* FindPlayerStartActor(const class UObject* WorldContextObject, FString ActorName, FString LevelName);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	class APortal* FindPlayerSpawnTransform(const class UObject* WorldContextObject, FString ActorName, FTransform& outSpawnTransform, FString LevelName);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void CallOnPlayerReadyS3();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void CallOnPlayerReady();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
