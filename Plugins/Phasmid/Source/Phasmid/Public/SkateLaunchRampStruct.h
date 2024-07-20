#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SkateLaunchRampStruct.generated.h"

USTRUCT(BlueprintType)
struct FSkateLaunchRampStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float jumpImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpImpulseAng;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool launchQP;
    
    PHASMID_API FSkateLaunchRampStruct();
};

