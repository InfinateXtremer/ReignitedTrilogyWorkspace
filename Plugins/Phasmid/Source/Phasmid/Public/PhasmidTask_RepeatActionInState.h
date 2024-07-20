#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "RepeatTask_AbilityStateDelegateDelegate.h"
#include "RepeatTask_ActionDelegateDelegate.h"
#include "PhasmidTask_RepeatActionInState.generated.h"

class UGameplayAbility;
class UPhasmidTask_RepeatActionInState;

UCLASS(Blueprintable)
class PHASMID_API UPhasmidTask_RepeatActionInState : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepeatTask_ActionDelegate RepeatAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepeatTask_AbilityStateDelegate OnStateEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepeatTask_AbilityStateDelegate OnStateInterrupted;
    
    UPhasmidTask_RepeatActionInState();
    UFUNCTION(BlueprintCallable)
    static UPhasmidTask_RepeatActionInState* StartRepeatActionInState(UGameplayAbility* OwningAbility, FName stateName, float TimeBetweenActions, bool bRunActionImmediately, bool bEndCurrentState);
    
};

