#include "FalconCharacterPushComponent.h"

class AActor;
class UPrimitiveComponent;

void UFalconCharacterPushComponent::PushAllCharacters() {
}

void UFalconCharacterPushComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UFalconCharacterPushComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UFalconCharacterPushComponent::UFalconCharacterPushComponent() {
    this->PushStrength = 700.00f;
    this->PushTick = 0.60f;
}

