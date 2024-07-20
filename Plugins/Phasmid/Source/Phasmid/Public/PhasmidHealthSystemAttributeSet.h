#pragma once
#include "CoreMinimal.h"
#include "PhasmidAttributeSet.h"
#include "PhasmidHealthSystemAttributeSet.generated.h"

UCLASS(Blueprintable)
class PHASMID_API UPhasmidHealthSystemAttributeSet : public UPhasmidAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthMax, meta=(AllowPrivateAccess=true))
    float HealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthCurrent, meta=(AllowPrivateAccess=true))
    float HealthCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShieldMax, meta=(AllowPrivateAccess=true))
    float ShieldMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShieldRegenRate, meta=(AllowPrivateAccess=true))
    float ShieldRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShieldRegenDelay, meta=(AllowPrivateAccess=true))
    float ShieldRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShieldCurrent, meta=(AllowPrivateAccess=true))
    float ShieldCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TakeDamageMult, meta=(AllowPrivateAccess=true))
    float TakeDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LowHealthThreshold, meta=(AllowPrivateAccess=true))
    float LowHealthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxDamagePerHit, meta=(AllowPrivateAccess=true))
    float MaxDamagePerHit;
    
    UPhasmidHealthSystemAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TakeDamageMult();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShieldRegenRate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShieldRegenDelay();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShieldMax();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShieldCurrent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxDamagePerHit();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LowHealthThreshold();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthMax();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthCurrent();
    
};

