#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "AbilityStateDelegateDelegate2.h"
#include "TickDelegateDelegate.h"
#include "PhasmidTask_StartAbilityTickState.generated.h"

class UGameplayAbility;
class UPhasmidTask_StartAbilityTickState;

UCLASS(Blueprintable)
class PHASMID_API UPhasmidTask_StartAbilityTickState : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTickDelegate TickDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityStateDelegate OnStateEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityStateDelegate OnStateInterrupted;
    
    UPhasmidTask_StartAbilityTickState();
    UFUNCTION(BlueprintCallable)
    static UPhasmidTask_StartAbilityTickState* StartTickingAbilityState(UGameplayAbility* OwningAbility, FName stateName, bool bEndCurrentState);
    
};

