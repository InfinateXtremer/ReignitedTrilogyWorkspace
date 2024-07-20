#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "ManagedExponentialHeightFog.generated.h"

class UExponentialHeightFogComponent;
class UExponentialHeightFogScaleIntensityComponent;

UCLASS(Blueprintable, MinimalAPI)
class AManagedExponentialHeightFog : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* Component;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogScaleIntensityComponent* ExponentialHeightFogScaleIntensityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    AManagedExponentialHeightFog();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bEnabled();
    
};

