#include "FalconScreenManager.h"

class UFalconWidget;

void AFalconScreenManager::SetActiveLayer(EFalconScreenLayerType inLayerType) {
}

void AFalconScreenManager::RemoveScreen(EFalconScreenType inScreen, bool inImmediate) {
}

UFalconWidget* AFalconScreenManager::FindScreen(EFalconScreenType inScreen) {
    return NULL;
}

void AFalconScreenManager::ClearAllWidgets() {
}

UFalconWidget* AFalconScreenManager::AddScreen(EFalconScreenType inScreen) {
    return NULL;
}

AFalconScreenManager::AFalconScreenManager() {
    this->_widgetTable = NULL;
}

