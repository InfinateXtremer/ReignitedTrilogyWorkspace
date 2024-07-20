#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
//#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AbilityEndOverlapSignatureDelegate.h"
#include "DamageEventDelegateDelegate.h"
#include "PhasmidAbilityBaseActor.h"
#include "PhasmidDamageInterface.h"
#include "PhasmidLevelActor.generated.h"

class AActor;
class UPhasmidAbilitySystemComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class PHASMID_API APhasmidLevelActor : public APhasmidAbilityBaseActor //, public IPhasmidDamageInterface 
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityEndOverlapSignature OnAbilityEndOverlap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InitialAttributeRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDead;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEventDelegate OnTakeDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEventDelegate OnDeathDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEventDelegate OnDealDamageDelegate;
    
    APhasmidLevelActor();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerOverlapAbility(AActor* OtherActor, FGameplayTag TriggerTag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Client_OnShieldBreak(const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Client_OnDeath(const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Client_OnDamage(const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, UPrimitiveComponent* HitComponent, const AActor* DamagingActor);
    
    UFUNCTION(BlueprintCallable)
    void AbilityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FGameplayTag TriggerTag);
    
    
    // Fix for true pure virtual functions not being implemented
};

