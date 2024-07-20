#include "PhasmidAITask_Wander.h"

class AAIController;
class AActor;
class UPhasmidAITask_Wander;
class UPrimitiveComponent;

UPhasmidAITask_Wander* UPhasmidAITask_Wander::Wander(AAIController* Controller, float InnerRadius, float OuterRadius, float Delay, AActor* CenterActor, float TurnRate) {
    return NULL;
}

void UPhasmidAITask_Wander::OnCapsuleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}
