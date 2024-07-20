#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "PhasmidLightingManager.h"
#include "MasterLightingManager.generated.h"

class AActor;
class UObject;
class USkyLightComponent;

UCLASS(Blueprintable)
class FALCON_API AMasterLightingManager : public APhasmidLightingManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    APhasmidLightingManager* outgoing_lm;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    APhasmidLightingManager* incoming_lm;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SkySphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShouldCapture;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyLightComponent* MasterSkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhasmidLightingManager* CurrentLightingManager;
    
public:
    AMasterLightingManager();
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="WorldContextObject"))
    void SetLightingManager(const UObject* WorldContextObject, APhasmidLightingManager* OutgoingLightingManager, APhasmidLightingManager* IncomingLightingManager, bool Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentLightsOn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentLightsOff();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CrossfadeLightingManagers_2(APhasmidLightingManager* OutgoingLightingManager, APhasmidLightingManager* IncomingLightingManager, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CrossfadeLightingManagers(const UObject* WorldContextObject, float fadeTime, APhasmidLightingManager* OutgoingLightingManager, APhasmidLightingManager* IncomingLightingManager, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
};

