#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectTypes.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "AttributeSet.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PhasmidDamageGroup.h"
#include "Templates/SubclassOf.h"
#include "PhasmidAbilitySystemComponent.generated.h"

class AActor;
class UAnimMontage;
class UAttributeSet;
class UGameplayAbility;
class UPhasmidAbilitySystemComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UPhasmidAbilitySystemComponent : public UAbilitySystemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UPhasmidAbilitySystemComponent*> ChildComponents;
    
    UPROPERTY(EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPhasmidAbilitySystemComponent> ParentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidDamageGroup> AppliedDamageGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageGroupIndex;
    
public:
    UPhasmidAbilitySystemComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromParentAbilitySystemComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void PostReplicated_OnDealDamageCharacter(float DamageMagnitude, UPhasmidAbilitySystemComponent* DealingASC, UPhasmidAbilitySystemComponent* SourceASC, bool isCrit, FVector HitLocation, FVector HitNormal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void PostReplicated_OnDealDamage(FGameplayEventData Payload) const;
    
    UFUNCTION(BlueprintCallable)
    void PhasmidUnBlockAbilitiesWithTags(const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayEffectContextHandle PhasmidMakeEffectContext() const;
    
    UFUNCTION(BlueprintCallable)
    void PhasmidBlockAbilitiesWithTags(const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayEffectAppliedToSelfDelegate(UAbilitySystemComponent* SourceASC, const FGameplayEffectSpec& Spec, FActiveGameplayEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityActivated(const FGameplayAbilitySpecHandle Handle, UGameplayAbility* Ability);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeFromAttributeData(FGameplayAttribute Attribute, float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void IncrementDamageGroupIndex();
    
    UFUNCTION(BlueprintCallable)
    bool HasAppliedDamageFromGroup(FPhasmidDamageGroup DamageGroup);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDamageGroupIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UAttributeSet> GetAtttributeClass(FGameplayAttribute Attribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAttributeName(FGameplayAttribute Attribute) const;
    
    UFUNCTION(BlueprintCallable)
    void CopyAttributeSet(UAbilitySystemComponent* TargetASC, TSubclassOf<UAttributeSet> AttributeClass);
    
    UFUNCTION(BlueprintCallable)
    void BPSetAvatarActor(AActor* InAvatarActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPRemoveLooseGameplayTags(const FGameplayTagContainer& GameplayTags);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPRefreshAbilityActorInfo();
    
    UFUNCTION(BlueprintCallable)
    void BPInitActorInfo(AActor* Owner, AActor* Avatar);
    
    UFUNCTION(BlueprintCallable)
    void BPGiveAbility(TSubclassOf<UGameplayAbility> GameplayAbilityClass, int32 Level, int32 InputID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* BPGetCurrentMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayAbility* BPGetAnimatingAbility();
    
    UFUNCTION(BlueprintCallable)
    void BPCancelAbilities(const FGameplayTagContainer& WithTags, const FGameplayTagContainer& WithoutTags);
    
    UFUNCTION(BlueprintCallable)
    void BPAddUniqueAttributeSet(TSubclassOf<UAttributeSet> AttributeClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPAddLooseGameplayTags(const FGameplayTagContainer& GameplayTags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerControllerSet();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAbilityFailed(const UGameplayAbility* Ability, const FGameplayTagContainer& TagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAbilityCommited(UGameplayAbility* Ability);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyDamageGroupOnDamage(UAbilitySystemComponent* SourceASC, const FGameplayEffectSpec& Spec, FActiveGameplayEffectHandle EffectHandle, FPhasmidDamageGroup DamageGroup);
    
    UFUNCTION(BlueprintCallable)
    void AddParentAbilitySystemComponent(UPhasmidAbilitySystemComponent* Parent);
    
    UFUNCTION(BlueprintCallable)
    void AddAppliedDamageGroup(FPhasmidDamageGroup DamageGroup);
    
    UFUNCTION(BlueprintCallable)
    bool AbilitySystemHandleGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);
    
};

