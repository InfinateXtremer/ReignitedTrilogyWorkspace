#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhasmidPath_FlyPoint.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidPath_FlyPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TakeOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Fly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineTakeOffKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineFlyKey;
    
    PHASMID_API FPhasmidPath_FlyPoint();
};

