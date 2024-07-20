#include "PhasmidGameSaveComponent.h"

class UFalconSaveGame;
class USaveGame;

void UPhasmidGameSaveComponent::SetPendingLevel(const FString& levelMain) {
}

void UPhasmidGameSaveComponent::PhasmidSaveObjectToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex) {
}

void UPhasmidGameSaveComponent::PhasmidSaveCompleted_Implementation() {
}


UFalconSaveGame* UPhasmidGameSaveComponent::GetFalconSaveGameObject() {
    return NULL;
}

UPhasmidGameSaveComponent::UPhasmidGameSaveComponent() {
    this->bSaveInProgress = false;
    this->_falconSaveGame = NULL;
}

