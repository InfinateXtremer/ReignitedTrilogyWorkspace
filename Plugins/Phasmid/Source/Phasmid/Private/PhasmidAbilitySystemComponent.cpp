

#include "PhasmidAbilitySystemComponent.h"

void UPhasmidAbilitySystemComponent::RemoveFromParentAbilitySystemComponent()
{
}

void UPhasmidAbilitySystemComponent::PostReplicated_OnDealDamageCharacter(float DamageMagnitude, UPhasmidAbilitySystemComponent * DealingASC, UPhasmidAbilitySystemComponent * SourceASC, bool isCrit, FVector HitLocation, FVector HitNormal)
{
}

void UPhasmidAbilitySystemComponent::PostReplicated_OnDealDamage(FGameplayEventData Payload)
{
}

void UPhasmidAbilitySystemComponent::PhasmidUnBlockAbilitiesWithTags(const FGameplayTagContainer & Tags)
{
}

FGameplayEffectContextHandle UPhasmidAbilitySystemComponent::PhasmidMakeEffectContext()
{
	return FGameplayEffectContextHandle();
}

void UPhasmidAbilitySystemComponent::PhasmidBlockAbilitiesWithTags(const FGameplayTagContainer & Tags)
{
}

void UPhasmidAbilitySystemComponent::OnGameplayEffectAppliedToSelfDelegate(UAbilitySystemComponent * SourceASC, const FGameplayEffectSpec & Spec, FActiveGameplayEffectHandle Handle)
{
}

void UPhasmidAbilitySystemComponent::OnAbilityActivated(const FGameplayAbilitySpecHandle Handle, UGameplayAbility * Ability)
{
}

void UPhasmidAbilitySystemComponent::InitializeFromAttributeData(FGameplayAttribute Attribute, float Value)
{
}

void UPhasmidAbilitySystemComponent::IncrementDamageGroupIndex()
{
}

bool UPhasmidAbilitySystemComponent::HasAppliedDamageFromGroup(FPhasmidDamageGroup DamageGroup)
{
	return false;
}

int32 UPhasmidAbilitySystemComponent::GetDamageGroupIndex()
{
	return int32();
}

TSubclassOf<class UAttributeSet> UPhasmidAbilitySystemComponent::GetAtttributeClass(FGameplayAttribute Attribute)
{
	return TSubclassOf<class UAttributeSet>();
}

FName UPhasmidAbilitySystemComponent::GetAttributeName(FGameplayAttribute Attribute)
{
	return FName();
}

void UPhasmidAbilitySystemComponent::CopyAttributeSet(UAbilitySystemComponent * TargetASC, TSubclassOf<class UAttributeSet> AttributeClass)
{
}

void UPhasmidAbilitySystemComponent::BPSetAvatarActor(AActor * InAvatarActor)
{
}

void UPhasmidAbilitySystemComponent::BPRemoveLooseGameplayTags(const FGameplayTagContainer & GameplayTags)
{
}

void UPhasmidAbilitySystemComponent::BPRefreshAbilityActorInfo()
{
}

void UPhasmidAbilitySystemComponent::BPInitActorInfo(AActor * Owner, AActor * Avatar)
{
}

void UPhasmidAbilitySystemComponent::BPGiveAbility(TSubclassOf<class UGameplayAbility> GameplayAbilityClass, int32 Level, int32 InputID)
{
}

UAnimMontage * UPhasmidAbilitySystemComponent::BPGetCurrentMontage()
{
	return nullptr;
}

UGameplayAbility * UPhasmidAbilitySystemComponent::BPGetAnimatingAbility()
{
	return nullptr;
}

void UPhasmidAbilitySystemComponent::BPCancelAbilities(const FGameplayTagContainer & WithTags, const FGameplayTagContainer & WithoutTags)
{
}

void UPhasmidAbilitySystemComponent::BPAddUniqueAttributeSet(TSubclassOf<class UAttributeSet> AttributeClass)
{
}

void UPhasmidAbilitySystemComponent::BPAddLooseGameplayTags(const FGameplayTagContainer & GameplayTags)
{
}

void UPhasmidAbilitySystemComponent::BP_OnPlayerControllerSet()
{
}

void UPhasmidAbilitySystemComponent::BP_OnAbilityFailed(const UGameplayAbility * Ability, const FGameplayTagContainer & TagContainer)
{
}

void UPhasmidAbilitySystemComponent::BP_OnAbilityCommited(UGameplayAbility * Ability)
{
}

void UPhasmidAbilitySystemComponent::ApplyDamageGroupOnDamage(UAbilitySystemComponent * SourceASC, const FGameplayEffectSpec & Spec, FActiveGameplayEffectHandle EffectHandle, FPhasmidDamageGroup DamageGroup)
{
}

void UPhasmidAbilitySystemComponent::AddParentAbilitySystemComponent(UPhasmidAbilitySystemComponent * Parent)
{
}

void UPhasmidAbilitySystemComponent::AddAppliedDamageGroup(FPhasmidDamageGroup DamageGroup)
{
}

bool UPhasmidAbilitySystemComponent::AbilitySystemHandleGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload)
{
	return false;
}
