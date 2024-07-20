#include "AirshipController.h"
#include "Components/SphereComponent.h"

class AActor;
class UPrimitiveComponent;
class UQuestActionsComponent;

void AAirshipController::updateAirship() {
}

void AAirshipController::Unlocked_Implementation(UQuestActionsComponent* Actions) {
}

void AAirshipController::ReadyForNextRealm_Implementation(UQuestActionsComponent* Actions) {
}

void AAirshipController::OutOfWorld_Implementation(UQuestActionsComponent* Actions) {
}

void AAirshipController::onSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAirshipController::Locked_Implementation(UQuestActionsComponent* Actions) {
}

bool AAirshipController::IsDebugMode() const {
    return false;
}

void AAirshipController::Hidden_Implementation(UQuestActionsComponent* Actions) {
}

void AAirshipController::ForceBoarding_Implementation(UQuestActionsComponent* Actions) {
}

AAirshipController::AAirshipController() {
    this->LightingManager = NULL;
    this->SpyroIgc = NULL;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->MinAirshipIndex = 0;
    this->AirshipIGC = NULL;
    this->IgnoreDesignerControl = false;
    this->m_airship = NULL;
}

