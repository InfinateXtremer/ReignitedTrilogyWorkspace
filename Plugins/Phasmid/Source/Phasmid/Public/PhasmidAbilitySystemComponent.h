

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "PhasmidDamageGroup.h"
#include "PhasmidAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	

public: 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UPhasmidAbilitySystemComponent*> ChildComponents;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UPhasmidAbilitySystemComponent> ParentComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPhasmidDamageGroup> AppliedDamageGroups;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DamageGroupIndex;

	UFUNCTION(BlueprintCallable)
	void RemoveFromParentAbilitySystemComponent();
	UFUNCTION(BlueprintCallable)
	void PostReplicated_OnDealDamageCharacter(float DamageMagnitude, class UPhasmidAbilitySystemComponent* DealingASC, class UPhasmidAbilitySystemComponent* SourceASC, bool isCrit, FVector HitLocation, FVector HitNormal);
	UFUNCTION(BlueprintCallable)
	void PostReplicated_OnDealDamage(FGameplayEventData Payload);
	UFUNCTION(BlueprintCallable)
	void PhasmidUnBlockAbilitiesWithTags(const FGameplayTagContainer& Tags);
	UFUNCTION(BlueprintCallable)
	FGameplayEffectContextHandle PhasmidMakeEffectContext();
	UFUNCTION(BlueprintCallable)
	void PhasmidBlockAbilitiesWithTags(const FGameplayTagContainer& Tags);
	UFUNCTION(BlueprintCallable)
	void OnGameplayEffectAppliedToSelfDelegate(class UAbilitySystemComponent* SourceASC, const FGameplayEffectSpec& Spec, FActiveGameplayEffectHandle Handle);
	UFUNCTION(BlueprintCallable)
	void OnAbilityActivated(const FGameplayAbilitySpecHandle Handle, class UGameplayAbility* Ability);
	UFUNCTION(BlueprintCallable)
	void InitializeFromAttributeData(FGameplayAttribute Attribute, float Value);
	UFUNCTION(BlueprintCallable)
	void IncrementDamageGroupIndex();
	UFUNCTION(BlueprintCallable)
	bool HasAppliedDamageFromGroup(FPhasmidDamageGroup DamageGroup);
	UFUNCTION(BlueprintCallable)
	int32 GetDamageGroupIndex();
	UFUNCTION(BlueprintCallable)
	TSubclassOf<class UAttributeSet> GetAtttributeClass(FGameplayAttribute Attribute);
	UFUNCTION(BlueprintCallable)
	FName GetAttributeName(FGameplayAttribute Attribute);
	UFUNCTION(BlueprintCallable)
	void CopyAttributeSet(class UAbilitySystemComponent* TargetASC, TSubclassOf<class UAttributeSet> AttributeClass);
	UFUNCTION(BlueprintCallable)
	void BPSetAvatarActor(class AActor* InAvatarActor);
	UFUNCTION(BlueprintCallable)
	void BPRemoveLooseGameplayTags(const FGameplayTagContainer& GameplayTags);
	UFUNCTION(BlueprintCallable)
	void BPRefreshAbilityActorInfo();
	UFUNCTION(BlueprintCallable)
	void BPInitActorInfo(class AActor* Owner, class AActor* Avatar);
	UFUNCTION(BlueprintCallable)
	void BPGiveAbility(TSubclassOf<class UGameplayAbility> GameplayAbilityClass, int32 Level, int32 InputID);
	UFUNCTION(BlueprintCallable)
	class UAnimMontage* BPGetCurrentMontage();
	UFUNCTION(BlueprintCallable)
	class UGameplayAbility* BPGetAnimatingAbility();
	UFUNCTION(BlueprintCallable)
	void BPCancelAbilities(const FGameplayTagContainer& WithTags, const FGameplayTagContainer& WithoutTags);
	UFUNCTION(BlueprintCallable)
	void BPAddUniqueAttributeSet(TSubclassOf<class UAttributeSet> AttributeClass);
	UFUNCTION(BlueprintCallable)
	void BPAddLooseGameplayTags(const FGameplayTagContainer& GameplayTags);
	UFUNCTION(BlueprintCallable)
	void BP_OnPlayerControllerSet();
	UFUNCTION(BlueprintCallable)
	void BP_OnAbilityFailed(const class UGameplayAbility* Ability, const FGameplayTagContainer& TagContainer);
	UFUNCTION(BlueprintCallable)
	void BP_OnAbilityCommited(class UGameplayAbility* Ability);
	UFUNCTION(BlueprintCallable)
	void ApplyDamageGroupOnDamage(class UAbilitySystemComponent* SourceASC, const FGameplayEffectSpec& Spec, FActiveGameplayEffectHandle EffectHandle, FPhasmidDamageGroup DamageGroup);
	UFUNCTION(BlueprintCallable)
	void AddParentAbilitySystemComponent(class UPhasmidAbilitySystemComponent* Parent);
	UFUNCTION(BlueprintCallable)
	void AddAppliedDamageGroup(FPhasmidDamageGroup DamageGroup);
	UFUNCTION(BlueprintCallable)
	bool AbilitySystemHandleGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);
	
};
