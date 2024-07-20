#include "PhasmidObjectSaveComponent.h"

bool UPhasmidObjectSaveComponent::SetSaveParam(int32 dataIndex, int32 paramIndex, const FPhasmidSaveParam& saveParam, bool updateSave) {
    return false;
}

void UPhasmidObjectSaveComponent::SetCollected(int32 dataIndex, bool updateSave) {
}

bool UPhasmidObjectSaveComponent::GetSaveParam(int32 dataIndex, int32 paramIndex, FPhasmidSaveParam& saveParam) {
    return false;
}

int32 UPhasmidObjectSaveComponent::GetParamCount(int32 dataIndex) {
    return 0;
}

int32 UPhasmidObjectSaveComponent::GetItemCount() {
    return 0;
}

EInventoryType UPhasmidObjectSaveComponent::getInventoryType(int32 dataIndex) {
    return EInventoryType::EIT_None;
}

bool UPhasmidObjectSaveComponent::GetCollected(int32 dataIndex) {
    return false;
}

UPhasmidObjectSaveComponent::UPhasmidObjectSaveComponent() {
}

