#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DamagingActorInterface.h"
#include "PhasmidAbilityBaseActor.h"
#include "PhasmidDamageGroupInterface.h"
#include "PooledActorInterface.h"
#include "PhasmidBeamDamage.generated.h"

class UPhasmidAbilitySystemComponent;

UCLASS(Blueprintable)
class PHASMID_API APhasmidBeamDamage : public APhasmidAbilityBaseActor //, public IPhasmidDamageGroupInterface, public IPooledActorInterface, public IDamagingActorInterface 
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TraceEndPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoAllTracesEveryFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDamagingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidAbilitySystemComponent* AbilitySystemComponent;
    
    APhasmidBeamDamage();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDelayOver() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeAliveRatio() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

