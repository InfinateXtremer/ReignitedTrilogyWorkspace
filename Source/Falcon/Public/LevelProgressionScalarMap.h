#pragma once
#include "CoreMinimal.h"
#include "EInventoryType.h"
#include "LevelProgressionScalarMap.generated.h"

USTRUCT(BlueprintType)
struct FLevelProgressionScalarMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInventoryType, float> typeScalarMap;
    
    FALCON_API FLevelProgressionScalarMap();
};

