#include "PhasmidAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AActor;
class UAbilitySystemComponent;
class UAnimMontage;
class UAttributeSet;
class UGameplayAbility;
class UPhasmidAbilitySystemComponent;

void UPhasmidAbilitySystemComponent::RemoveFromParentAbilitySystemComponent() {
}



void UPhasmidAbilitySystemComponent::PhasmidUnBlockAbilitiesWithTags(const FGameplayTagContainer& Tags) {
}

FGameplayEffectContextHandle UPhasmidAbilitySystemComponent::PhasmidMakeEffectContext() const {
    return FGameplayEffectContextHandle{};
}

void UPhasmidAbilitySystemComponent::PhasmidBlockAbilitiesWithTags(const FGameplayTagContainer& Tags) {
}

void UPhasmidAbilitySystemComponent::OnGameplayEffectAppliedToSelfDelegate(UAbilitySystemComponent* SourceASC, const FGameplayEffectSpec& Spec, FActiveGameplayEffectHandle Handle) {
}


void UPhasmidAbilitySystemComponent::InitializeFromAttributeData(FGameplayAttribute Attribute, float Value) {
}

void UPhasmidAbilitySystemComponent::IncrementDamageGroupIndex() {
}

bool UPhasmidAbilitySystemComponent::HasAppliedDamageFromGroup(FPhasmidDamageGroup DamageGroup) {
    return false;
}

int32 UPhasmidAbilitySystemComponent::GetDamageGroupIndex() {
    return 0;
}

TSubclassOf<UAttributeSet> UPhasmidAbilitySystemComponent::GetAtttributeClass(FGameplayAttribute Attribute) const {
    return NULL;
}

FName UPhasmidAbilitySystemComponent::GetAttributeName(FGameplayAttribute Attribute) const {
    return NAME_None;
}

void UPhasmidAbilitySystemComponent::CopyAttributeSet(UAbilitySystemComponent* TargetASC, TSubclassOf<UAttributeSet> AttributeClass) {
}

void UPhasmidAbilitySystemComponent::BPSetAvatarActor(AActor* InAvatarActor) {
}

void UPhasmidAbilitySystemComponent::BPRemoveLooseGameplayTags(const FGameplayTagContainer& GameplayTags) {
}

void UPhasmidAbilitySystemComponent::BPRefreshAbilityActorInfo() {
}

void UPhasmidAbilitySystemComponent::BPInitActorInfo(AActor* Owner, AActor* Avatar) {
}

void UPhasmidAbilitySystemComponent::BPGiveAbility(TSubclassOf<UGameplayAbility> GameplayAbilityClass, int32 Level, int32 InputID) {
}

UAnimMontage* UPhasmidAbilitySystemComponent::BPGetCurrentMontage() const {
    return NULL;
}

UGameplayAbility* UPhasmidAbilitySystemComponent::BPGetAnimatingAbility() {
    return NULL;
}

void UPhasmidAbilitySystemComponent::BPCancelAbilities(const FGameplayTagContainer& WithTags, const FGameplayTagContainer& WithoutTags) {
}

void UPhasmidAbilitySystemComponent::BPAddUniqueAttributeSet(TSubclassOf<UAttributeSet> AttributeClass) {
}

void UPhasmidAbilitySystemComponent::BPAddLooseGameplayTags(const FGameplayTagContainer& GameplayTags) {
}




void UPhasmidAbilitySystemComponent::ApplyDamageGroupOnDamage(UAbilitySystemComponent* SourceASC, const FGameplayEffectSpec& Spec, FActiveGameplayEffectHandle EffectHandle, FPhasmidDamageGroup DamageGroup) {
}

void UPhasmidAbilitySystemComponent::AddParentAbilitySystemComponent(UPhasmidAbilitySystemComponent* Parent) {
}

void UPhasmidAbilitySystemComponent::AddAppliedDamageGroup(FPhasmidDamageGroup DamageGroup) {
}

bool UPhasmidAbilitySystemComponent::AbilitySystemHandleGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload) {
    return false;
}

void UPhasmidAbilitySystemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidAbilitySystemComponent, ChildComponents);
    DOREPLIFETIME(UPhasmidAbilitySystemComponent, ParentComponent);
}

UPhasmidAbilitySystemComponent::UPhasmidAbilitySystemComponent() {
    this->DamageGroupIndex = 0;
}

