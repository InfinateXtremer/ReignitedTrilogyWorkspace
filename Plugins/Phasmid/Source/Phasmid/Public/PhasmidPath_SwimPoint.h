#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhasmidPath_SwimPoint.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidPath_SwimPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Dive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Swim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineDiveKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineSwimKey;
    
    PHASMID_API FPhasmidPath_SwimPoint();
};

