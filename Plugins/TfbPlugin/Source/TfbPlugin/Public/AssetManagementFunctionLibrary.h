#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AssetManagementFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class TFBPLUGIN_API UAssetManagementFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAssetManagementFunctionLibrary();
};

