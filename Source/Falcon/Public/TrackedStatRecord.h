#pragma once
#include "CoreMinimal.h"
#include "EInventoryType.h"
#include "TrackedStatRecord.generated.h"

USTRUCT(BlueprintType)
struct FTrackedStatRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryType inventoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FALCON_API FTrackedStatRecord();
};

