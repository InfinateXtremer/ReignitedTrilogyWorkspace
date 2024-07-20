#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "GameplayTask.h"
#include "PhasmidGameplayTask_BlueprintBase.generated.h"

UCLASS(Blueprintable)
class UPhasmidGameplayTask_BlueprintBase : public UGameplayTask {
    GENERATED_BODY()
public:

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTaskTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTaskResume();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTaskPause();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTaskDestroyed(bool OwnerFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTaskActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameplayTaskState GetTaskState() const;
    
};

