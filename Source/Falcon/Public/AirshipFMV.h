#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AirshipFMV.generated.h"

class UFileMediaSource;
class UScriptedWorld;

USTRUCT(BlueprintType)
struct FAirshipFMV {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UScriptedWorld> Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* MediaSource;
    
    FALCON_API FAirshipFMV();
};

