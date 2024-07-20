#pragma once
#include "CoreMinimal.h"
#include "RadialDistanceData.generated.h"

USTRUCT(BlueprintType)
struct FRadialDistanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Data[6];
    
    PHASMID_API FRadialDistanceData();
};

