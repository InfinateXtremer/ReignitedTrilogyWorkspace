#include "PortalController.h"

class AActor;
class UPrimitiveComponent;
class UQuestActionsComponent;

void APortalController::TimerForVFX() {
}

//void APortalController::Open(UQuestActionsComponent * Actions)
//{
//}

//void APortalController::Open_Implementation(UQuestActionsComponent* Actions) {
//}

void APortalController::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool APortalController::ForceTransport(EFalconLoadScreen::Type Screen) {
    return false;
}

//void APortalController::ForcePortalTransport(EFalconLoadScreen::Type Screen)
//{
//}


APortalController::APortalController() {
    this->sfx = NULL;
    this->vfx = NULL;
    this->m_requirements = NULL;
    this->m_blocker = NULL;
}

