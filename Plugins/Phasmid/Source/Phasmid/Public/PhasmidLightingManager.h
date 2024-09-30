#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PhasmidLightingManager.generated.h"

class APhasmidLightingManager;
class UObject;

UCLASS(Blueprintable)
class PHASMID_API APhasmidLightingManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Lights;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LevelTransitionColor;
    
    APhasmidLightingManager();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TransitionLightingManagers(float fadeTime, APhasmidLightingManager* OutgoingLightingManager, APhasmidLightingManager* IncomingLightingManager);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNewLightingManager(APhasmidLightingManager* OutgoingLightingManager, APhasmidLightingManager* IncomingLightingManager, bool Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableSkylight(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScaleIntensity(float IntensityCoefficient);
    
};

