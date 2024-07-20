#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "Engine/EngineTypes.h"
#include "PhasmidAITask_Wander.generated.h"

class AAIController;
class AActor;
class UPhasmidAITask_Wander;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class PHASMID_API UPhasmidAITask_Wander : public UAITask {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UPhasmidAITask_Wander* Wander(AAIController* Controller, float InnerRadius, float OuterRadius, float Delay, AActor* CenterActor, float TurnRate);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCapsuleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

