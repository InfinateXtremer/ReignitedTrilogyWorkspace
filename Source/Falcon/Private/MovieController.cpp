#include "MovieController.h"

class UQuestActionsComponent;

void AMovieController::ZapPlayer_Implementation(const FName& Checkpoint, UQuestActionsComponent* Actions) {
}

void AMovieController::Playing_Implementation(UQuestActionsComponent* Actions) {
}

AMovieController::AMovieController() {
    this->MovieFile = NULL;
    this->StartupDelay = 0.50f;
}

