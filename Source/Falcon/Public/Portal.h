

#pragma once

#include "CoreMinimal.h"
#include "PhasmidPlayerStart.h"
#include "MasterLightingManager.h"
#include "TransportManager.h"
#include "Engine/DataTable.h"
#include "Portal.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API APortal : public APhasmidPlayerStart
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PreloadActive;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PartnerPortalName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PortalText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableRowHandle PartnerPortalRow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AMasterLightingManager* LightingManager;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* TransitionTrigger;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HandlePlayerSpawnDelay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool rotationFixed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool prepatchready;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AnimPlayRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SetLevelVisiblePercentage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APortal* PartnerPortal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> ChildActors;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ACharacter* PlayerChar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APlayerController* PlayerController;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableTransport;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ATransportManager* TransportManager;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CollectiblesEnabled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator RotationSave;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PreloadEnabled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ReadyToRemove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowDownloadMessage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DemoMode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LevelName;
	
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void UnTriggerPreload();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		bool TriggerTransport(class ACharacter* playerCharacter);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void TriggerPreload();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void Tick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void SwitchBeforeTransport();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void setPortalVisible(bool visible);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void setPortalEnabled(bool Enabled);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		bool RemoveDownloadMessage();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void ReceivePortalStart();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void OnPartnerPortalFound(class APortal* FoundParter);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void HandlePlayerSpawnAfterFade();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void HandlePlayerSpawn(float delayDuration);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		FTransform GetSpawnTransform();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void GetProgressionInfo(FString& NewCheckpointName, FString& NewLevelPath);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void EnablePortalCollectibles(bool Enabled);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		bool CheckForPatch();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		bool CanLoadLevel();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void BeginPlay();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		void AddCamLocationSlave(FTransform slaveLocation, float Duration);


};
