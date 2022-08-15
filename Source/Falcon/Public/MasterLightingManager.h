

#pragma once

#include "CoreMinimal.h"
#include "PhasmidLightingManager.h"
#include "Engine/LatentActionManager.h"
#include "Components/SkyLightComponent.h"
#include "MasterLightingManager.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API AMasterLightingManager : public APhasmidLightingManager
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APhasmidLightingManager* outgoing_lm;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APhasmidLightingManager* incoming_lm;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* SkySphere;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ShouldCapture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkyLightComponent* MasterSkyLight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APhasmidLightingManager* CurrentLightingManager;
	
	

	void Tick(float DeltaTime);
	UFUNCTION(BlueprintCallable)
	void SetLightingManager(const class UObject* WorldContextObject, class APhasmidLightingManager* OutgoingLightingManager, class APhasmidLightingManager* IncomingLightingManager, bool Delay);
	UFUNCTION(BlueprintCallable)
	void SetCurrentLightsOn();
	UFUNCTION(BlueprintCallable)
	void SetCurrentLightsOff();
	UFUNCTION(BlueprintCallable)
	void CrossfadeLightingManagers_2(class APhasmidLightingManager* OutgoingLightingManager, class APhasmidLightingManager* IncomingLightingManager, float Alpha);
	UFUNCTION(BlueprintCallable)
	void CrossfadeLightingManagers(const class UObject* WorldContextObject, float fadeTime, class APhasmidLightingManager* OutgoingLightingManager, class APhasmidLightingManager* IncomingLightingManager, FLatentActionInfo LatentInfo);
	UFUNCTION(BlueprintCallable)
	void BeginPlay();
};
