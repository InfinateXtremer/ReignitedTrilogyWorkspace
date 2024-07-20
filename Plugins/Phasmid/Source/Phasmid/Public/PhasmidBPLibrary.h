#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MiniMapTextureData.h"
#include "PhasmidBPLibrary.generated.h"

class APlayerController;
class UDataTable;

UCLASS(Blueprintable)
class PHASMID_API UPhasmidBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPhasmidBPLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PhasmidProjectWorldToScreen(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool& bTargetBehindCamera, bool bPlayerViewportRelative);
    
    UFUNCTION(BlueprintCallable)
    static FMiniMapTextureData GetMiniMapTextureData(UDataTable* Table, FName RowName, bool& Result);
    
};

