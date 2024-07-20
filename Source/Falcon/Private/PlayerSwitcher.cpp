#include "PlayerSwitcher.h"

void UPlayerSwitcher::Trigger(const FTransform& Location) {
}

void UPlayerSwitcher::BeginPlay() {
}

UPlayerSwitcher::UPlayerSwitcher() {
    this->SwapToCharacter = NULL;
    this->ToggleMode = false;
    this->SpawnCharacterClass = NULL;
}

