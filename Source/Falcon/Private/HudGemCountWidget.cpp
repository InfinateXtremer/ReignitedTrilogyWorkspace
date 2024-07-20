#include "HudGemCountWidget.h"

class UFalconSaveGame;


void UHudGemCountWidget::UnRegisterSave() {
}

void UHudGemCountWidget::RegisterSave() {
}

void UHudGemCountWidget::OnStoreSaveData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap) {
}

void UHudGemCountWidget::OnChangeSaveGame(UFalconSaveGame* incomingSaveGame) {
}

UHudGemCountWidget::UHudGemCountWidget() {
    this->uiState = EHudGemCountDisplayState::EHGCDS_OutIdle;
    this->countUpdated = false;
    this->countUpdateSecs = 0.00f;
    this->countUpdateWait = 0.00f;
    this->SaveGame = NULL;
}

