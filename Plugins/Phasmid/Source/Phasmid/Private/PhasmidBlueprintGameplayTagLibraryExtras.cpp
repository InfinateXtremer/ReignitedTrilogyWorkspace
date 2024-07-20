#include "PhasmidBlueprintGameplayTagLibraryExtras.h"

FGameplayTagContainer UPhasmidBlueprintGameplayTagLibraryExtras::RequestGameplayTagChildren(const FGameplayTag& GameplayTag) {
    return FGameplayTagContainer{};
}

void UPhasmidBlueprintGameplayTagLibraryExtras::RemoveGameplayTags(FGameplayTagContainer& InOutTagContainer, const FGameplayTagContainer& InTagContainer) {
}

bool UPhasmidBlueprintGameplayTagLibraryExtras::RemoveGameplayTag(FGameplayTagContainer& InOutTagContainer, FGameplayTag Tag) {
    return false;
}

FGameplayTagContainer UPhasmidBlueprintGameplayTagLibraryExtras::GetTagsWithSuffix(const FGameplayTagContainer& InTagContainer, const FString& Suffix, bool GetParent) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UPhasmidBlueprintGameplayTagLibraryExtras::GetDamageRequirementTags(const FGameplayTagContainer& InTagContainer) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UPhasmidBlueprintGameplayTagLibraryExtras::GetDamageFilterTags(const FGameplayTagContainer& InTagContainer) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UPhasmidBlueprintGameplayTagLibraryExtras::GetDamageDodgeTags(const FGameplayTagContainer& InTagContainer) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UPhasmidBlueprintGameplayTagLibraryExtras::GetCollisionFilterTags(const FGameplayTagContainer& InTagContainer) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UPhasmidBlueprintGameplayTagLibraryExtras::FilterExact(const FGameplayTagContainer& InTagContainer, const FGameplayTagContainer& InFilterTagContainer) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UPhasmidBlueprintGameplayTagLibraryExtras::Filter(const FGameplayTagContainer& InTagContainer, const FGameplayTagContainer& InFilterTagContainer) {
    return FGameplayTagContainer{};
}

UPhasmidBlueprintGameplayTagLibraryExtras::UPhasmidBlueprintGameplayTagLibraryExtras() {
}

