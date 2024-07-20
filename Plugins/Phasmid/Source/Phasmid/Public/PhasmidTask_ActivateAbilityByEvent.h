#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "GameplayTask.h"
#include "ActivatedAbilityCommittedDelegate.h"
#include "PhasmidTask_ActivateAbilityByEvent.generated.h"

class IGameplayTaskOwnerInterface;
class UGameplayTaskOwnerInterface;
class UActorComponent;
class UPhasmidAbilitySystemComponent;
class UPhasmidTask_ActivateAbilityByEvent;

UCLASS(Blueprintable)
class UPhasmidTask_ActivateAbilityByEvent : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEventData Payload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTime;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivatedAbilityCommitted OnAbilityCommitted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTask::FGenericGameplayTaskDelegate OnAbilityFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTask::FGenericGameplayTaskDelegate OnAbilityFinished;
    
public:
    UFUNCTION(BlueprintCallable)
    static UPhasmidTask_ActivateAbilityByEvent* ActivateAbilityByInputAction(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UActorComponent* AbilityManager, int32 InputAction, float NewMaxTime);
    
    UFUNCTION(BlueprintCallable)
    static UPhasmidTask_ActivateAbilityByEvent* ActivateAbilityByEvent(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UPhasmidAbilitySystemComponent* NewAbilitySystemComponent, FGameplayTag NewEventTag, FGameplayEventData NewPayload, float NewMaxTime);
    
};

