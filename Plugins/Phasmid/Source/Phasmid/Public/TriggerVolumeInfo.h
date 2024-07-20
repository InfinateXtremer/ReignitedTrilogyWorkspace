#pragma once
#include "CoreMinimal.h"
#include "ETriggerVolumeCommand.h"
#include "TriggerVolumeInfo.generated.h"

USTRUCT(BlueprintType)
struct FTriggerVolumeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggerVolumeCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OneShot;
    
    PHASMID_API FTriggerVolumeInfo();
};

