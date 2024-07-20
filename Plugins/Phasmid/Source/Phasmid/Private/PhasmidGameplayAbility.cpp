#include "PhasmidGameplayAbility.h"

void UPhasmidGameplayAbility::ToggleDisableAbilityCooldowns() {
}

bool UPhasmidGameplayAbility::HasCooldown() {
    return false;
}

bool UPhasmidGameplayAbility::GetAbilityCooldownsDisabled() {
    return false;
}

void UPhasmidGameplayAbility::BP_GetCooldownTimeRemainingAndDuration(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo ActorInfo, float& TimeRemaining, float& CooldownDuration) const {
}

UPhasmidGameplayAbility::UPhasmidGameplayAbility() {
    this->SkipApplyCostOnCommit = false;
    this->SkipCheckCostOnCommit = false;
    this->SkipApplyCooldownOnCommit = false;
}

