#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "EFalconLoadScreen.h"
#include "ELevelRecordType.h"
#include "ELevelTransportType.h"
#include "EManagerState.h"
#include "LevelActivationCompleteDelegate.h"
#include "LevelStreamingResultDelegate.h"
#include "LevelTransportRecord.h"
#include "LevelVisibilityChangedDelegate.h"
#include "MasterLevelData.h"
#include "TransportManager.generated.h"

class APhasmidLightingManager;
class APortal;
class ULevel;
class UObject;

UCLASS(Blueprintable)
class FALCON_API ATransportManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseLevelPosition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingResult LoadCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelActivationComplete LevelActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelActivationComplete LevelDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelVisibilityChanged LevelVisibilityEvent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APhasmidLightingManager> GlobalLightingManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelTransportRecord> records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PhasmidActorsToTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhasmidLightingManager* IncomingLightingManager;
    
public:
    ATransportManager();
private:
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EManagerState> WaitForAddToWorld();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnloadTransportLevelsExcept(FMasterLevelData SavedRecord, bool unloadActiveTransportLevel);
    
    UFUNCTION(BlueprintCallable)
    void UnloadTransportLevels(bool unloadActiveTransportLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TurnLightingManagerOn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TurnLightingManagerOff();
    
private:
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EManagerState> TickUnloadingLevels();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EManagerState> TickNotifyDelay();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EManagerState> TickLoadingLevels();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EManagerState> TickIdle();
    
public:
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SubLevelUnloadCompleted();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void StartAtLevel(const UObject* WorldContextObject, const FName& LevelPath, const TArray<FName> sublevelNames, bool isRestart, TEnumAsByte<EFalconLoadScreen::Type> loadScreenType, const FString& Checkpoint, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void ShowInventoryUI();
    
    UFUNCTION(BlueprintCallable)
    void SetIncomingLighting();
    
    UFUNCTION(BlueprintCallable)
    void SetActiveLevelVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void QueueTransport(const UObject* WorldContextObject, const FName& LevelPath, const TArray<FName> sublevelNames, TEnumAsByte<ELevelTransportType> transportType, TEnumAsByte<ELevelRecordType> recordType, bool bMakeVisibleAfterLoad, const FString& Checkpoint, FLatentActionInfo LatentInfo, bool completeLoad, APortal* iSourcePortal, APortal* iTargetPortal);
    
private:
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EManagerState> Notify();
    
public:
    UFUNCTION(BlueprintCallable)
    ULevel* GetCurrentSublevelWithString(const FString& substring);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* FindPlayerStartActor(const UObject* WorldContextObject, const FString& ActorName, const FString& LevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APortal* FindPlayerSpawnTransform(const UObject* WorldContextObject, const FString& ActorName, FTransform& outSpawnTransform, const FString& LevelName);
    
    UFUNCTION(BlueprintCallable)
    void CallOnPlayerReadyS3();
    
    UFUNCTION(BlueprintCallable)
    void CallOnPlayerReady();
    
    UFUNCTION(BlueprintCallable)
    void BeginDelayedStart();
    
};

