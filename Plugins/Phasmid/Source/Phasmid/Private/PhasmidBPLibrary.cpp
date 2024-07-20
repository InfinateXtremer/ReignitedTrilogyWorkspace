#include "PhasmidBPLibrary.h"

class APlayerController;
class UDataTable;

bool UPhasmidBPLibrary::PhasmidProjectWorldToScreen(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool& bTargetBehindCamera, bool bPlayerViewportRelative) {
    return false;
}

FMiniMapTextureData UPhasmidBPLibrary::GetMiniMapTextureData(UDataTable* Table, FName RowName, bool& Result) {
    return FMiniMapTextureData{};
}

UPhasmidBPLibrary::UPhasmidBPLibrary() {
}

