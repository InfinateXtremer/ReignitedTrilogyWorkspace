#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "PhasmidGameplayAbility.generated.h"

UCLASS(Blueprintable)
class PHASMID_API UPhasmidGameplayAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipApplyCostOnCommit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipCheckCostOnCommit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipApplyCooldownOnCommit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SourceOwnedTags;
    
public:
    UPhasmidGameplayAbility();
    UFUNCTION(BlueprintCallable)
    static void ToggleDisableAbilityCooldowns();
    
    UFUNCTION(BlueprintCallable)
    bool HasCooldown();
    
    UFUNCTION(BlueprintCallable)
    static bool GetAbilityCooldownsDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BP_GetCooldownTimeRemainingAndDuration(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo ActorInfo, float& TimeRemaining, float& CooldownDuration) const;
    
};

