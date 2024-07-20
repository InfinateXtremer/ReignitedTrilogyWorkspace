#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "PhasmidBehaviorUtilityEntry.h"
#include "PhasmidEnemyBehaviorParams.h"
#include "PhasmidEnemyBrainBehaviorChangedDelegate.h"
#include "PhasmidEnemyBrainComponent.generated.h"

class UBlackboardData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhasmidEnemyBrainComponent : public UBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* Blackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidBehaviorUtilityEntry> Behaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidEnemyBehaviorParams Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableUtilityBehaviorSelection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUnderScriptControl: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidEnemyBrainBehaviorChanged OnBehaviorChanged;
    
    UPhasmidEnemyBrainComponent();
    UFUNCTION(BlueprintCallable)
    void FinishScriptedBehavior();
    
    UFUNCTION(BlueprintCallable)
    void BeginScriptedBehavior();
    
};

