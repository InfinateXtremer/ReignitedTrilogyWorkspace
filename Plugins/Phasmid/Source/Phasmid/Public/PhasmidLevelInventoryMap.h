#pragma once
#include "CoreMinimal.h"
#include "PhasmidInventoryMap.h"
#include "PhasmidLevelInventoryMap.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidLevelInventoryMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPhasmidInventoryMap> levelInventoryMap;
    
    PHASMID_API FPhasmidLevelInventoryMap();
};

