#include "PhasmidGameInventoryMonitor.h"

void APhasmidGameInventoryMonitor::getLevelInventoryTotals(const FString& Level, TArray<FPhasmidInventoryItem>& itemList) {
}

void APhasmidGameInventoryMonitor::getInventoryTotalsByLevelsAndTypes(const TArray<FString>& levelList, const TArray<EInventoryType>& itemTypeList, TArray<FPhasmidInventoryItem>& totalsList) {
}

void APhasmidGameInventoryMonitor::getGameInventoryTotals(TArray<FPhasmidInventoryItem>& itemList) {
}

void APhasmidGameInventoryMonitor::doUpdateInventory() {
}

APhasmidGameInventoryMonitor::APhasmidGameInventoryMonitor() {
    this->autoUpdate = false;
}

