#pragma once
#include "CoreMinimal.h"
#include "PhasmidGameSaveObjectDataMap.h"
#include "PhasmidGameSaveLevelObjectMap.generated.h"

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidGameSaveLevelObjectMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPhasmidGameSaveObjectDataMap> levelObjectMap;
    
    FPhasmidGameSaveLevelObjectMap();
};

