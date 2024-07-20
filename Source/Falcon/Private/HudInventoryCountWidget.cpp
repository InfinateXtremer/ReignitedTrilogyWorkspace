#include "HudInventoryCountWidget.h"

class UFalconSaveGame;

void UHudInventoryCountWidget::UnRegisterSave() {
}

void UHudInventoryCountWidget::RegisterSave() {
}

void UHudInventoryCountWidget::OnStoreSaveData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap) {
}

void UHudInventoryCountWidget::OnChangeSaveGame(UFalconSaveGame* incomingSaveGame) {
}


UHudInventoryCountWidget::UHudInventoryCountWidget() {
    this->SaveGame = NULL;
}

