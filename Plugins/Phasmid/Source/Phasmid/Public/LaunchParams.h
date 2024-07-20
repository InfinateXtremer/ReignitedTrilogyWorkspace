#pragma once
#include "CoreMinimal.h"
#include "LaunchParams.generated.h"

USTRUCT(BlueprintType)
struct FLaunchParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLaunchToTheHeavens;
    
    PHASMID_API FLaunchParams();
};

