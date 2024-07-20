#include "PhasmidAITask_BlueprintBase.h"

class AAIController;

void UPhasmidAITask_BlueprintBase::OnTaskTick_Implementation(AAIController* OwnerAIController, float DeltaTime) {
}

void UPhasmidAITask_BlueprintBase::OnTaskResume_Implementation(AAIController* OwnerAIController) {
}

void UPhasmidAITask_BlueprintBase::OnTaskPause_Implementation(AAIController* OwnerAIController) {
}

void UPhasmidAITask_BlueprintBase::OnTaskDestroyed_Implementation(AAIController* OwnerAIController, bool OwnerFinished) {
}

void UPhasmidAITask_BlueprintBase::OnTaskActivate_Implementation(AAIController* OwnerAIController) {
}

EGameplayTaskState UPhasmidAITask_BlueprintBase::GetTaskState() const {
    return EGameplayTaskState::Uninitialized;
}

