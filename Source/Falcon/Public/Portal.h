#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "PhasmidPlayerStart.h"
#include "TransportInterface.h"
#include "Portal.generated.h"

class AActor;
class ACharacter;
class AMasterLightingManager;
class APlayerController;
class APortal;
class ATransportManager;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class FALCON_API APortal : public APhasmidPlayerStart { //, public ITransportInterface 
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreloadActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartnerPortalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PortalText;
    
	/** Uses SpyroStreamData datatable. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PartnerPortalRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMasterLightingManager* LightingManager;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TransitionTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandlePlayerSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool rotationFixed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool prepatchready;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SetLevelVisiblePercentage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APortal* PartnerPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ChildActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* PlayerChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableTransport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATransportManager* TransportManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CollectiblesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreloadEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReadyToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDownloadMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DemoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
public:
    APortal();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnTriggerPreload();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TriggerTransport(ACharacter* playerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerPreload();
    
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SwitchBeforeTransport();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void setPortalVisible(bool visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void setPortalEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveDownloadMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePortalStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPartnerPortalFound(APortal* FoundParter);
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePlayerSpawnAfterFade();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePlayerSpawn(float delayDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetSpawnTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetProgressionInfo(FString& NewCheckpointName, FString& NewLevelPath);
    
    UFUNCTION(BlueprintCallable)
    void EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnablePortalCollectibles(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckForPatch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanLoadLevel();
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddCamLocationSlave(FTransform slaveLocation, float Duration);
    
    
    // Fix for true pure virtual functions not being implemented
};

