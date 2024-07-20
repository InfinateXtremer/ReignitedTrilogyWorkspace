#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "GameplayTask.h"
#include "PhasmidAITask_BlueprintBase.generated.h"

class AAIController;

UCLASS(Blueprintable)
class PHASMID_API UPhasmidAITask_BlueprintBase : public UAITask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableTaskTicking;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTaskTick(AAIController* OwnerAIController, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTaskResume(AAIController* OwnerAIController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTaskPause(AAIController* OwnerAIController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTaskDestroyed(AAIController* OwnerAIController, bool OwnerFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTaskActivate(AAIController* OwnerAIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameplayTaskState GetTaskState() const;
    
};

