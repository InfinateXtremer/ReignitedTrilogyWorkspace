#include "PhasmidGameplayTask_BlueprintBase.h"

void UPhasmidGameplayTask_BlueprintBase::OnTaskTick_Implementation(float DeltaTime) {
}

void UPhasmidGameplayTask_BlueprintBase::OnTaskResume_Implementation() {
}

void UPhasmidGameplayTask_BlueprintBase::OnTaskPause_Implementation() {
}

void UPhasmidGameplayTask_BlueprintBase::OnTaskDestroyed_Implementation(bool OwnerFinished) {
}

void UPhasmidGameplayTask_BlueprintBase::OnTaskActivate_Implementation() {
}

EGameplayTaskState UPhasmidGameplayTask_BlueprintBase::GetTaskState() const {
    return EGameplayTaskState::Uninitialized;
}

