#include "FalconLootComponent.h"

void UFalconLootComponent::SpawnLoot() const {
}

bool UFalconLootComponent::IsAllLootCollected() const {
    return false;
}

int32 UFalconLootComponent::getObjectSaveData(FPhasmidObjectSaveDataList& saveData) const {
    return 0;
}

bool UFalconLootComponent::DropsLootOfType(UClass* LootClass, bool filterCollected) const {
    return false;
}

UFalconLootComponent::UFalconLootComponent() {
}

