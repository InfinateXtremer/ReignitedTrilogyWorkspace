#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RadialDistanceData.h"
#include "PhasmidNavPost.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidNavPost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadialDistanceData CoverDistances;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 VisibleToPlayer[4];
    
    PHASMID_API FPhasmidNavPost();
};

