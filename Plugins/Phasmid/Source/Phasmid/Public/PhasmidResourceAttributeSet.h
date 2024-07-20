#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PhasmidResourceAttributeSet.generated.h"

UCLASS(Blueprintable)
class PHASMID_API UPhasmidResourceAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResourceCurrent, meta=(AllowPrivateAccess=true))
    float ResourceCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ResourceMax, meta=(AllowPrivateAccess=true))
    float ResourceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReloadPoolCurrent, meta=(AllowPrivateAccess=true))
    float ReloadPoolCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReloadPoolMax, meta=(AllowPrivateAccess=true))
    float ReloadPoolMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReloadSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ResourceRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ResourceRegenInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ResourceConsumedPerUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ResourceConsumeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ResourceGainedPerRegen;
    
    UPhasmidResourceAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResourceMax();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResourceCurrent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReloadPoolMax();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReloadPoolCurrent();
    
};

