#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "AttributeSet.h"
#include "WaitDelayDelegateDelegate2.h"
#include "PhasmidTask_ConsumeCost.generated.h"

class UGameplayAbility;
class UPhasmidTask_ConsumeCost;

UCLASS(Blueprintable, MinimalAPI)
class UPhasmidTask_ConsumeCost : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitDelayDelegate OnOutOfResource;
    
    UPhasmidTask_ConsumeCost();
    UFUNCTION(BlueprintCallable)
    static UPhasmidTask_ConsumeCost* ApplyCostOnIntervalCancelable(UGameplayAbility* OwningAbility, FName TaskName, FGameplayAttribute IntervalAttribute, bool ConsumeOnActivation);
    
    UFUNCTION(BlueprintCallable)
    static UPhasmidTask_ConsumeCost* ApplyCostOnInterval(UGameplayAbility* OwningAbility, FGameplayAttribute IntervalAttribute, bool ConsumeOnActivation);
    
};

