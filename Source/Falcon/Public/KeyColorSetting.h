#pragma once
#include "CoreMinimal.h"
#include "ColorSetting.h"
#include "KeyColorSetting.generated.h"

USTRUCT(BlueprintType)
struct FKeyColorSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorSetting Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorSetting Pulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorSetting Sparkle;
    
    FALCON_API FKeyColorSetting();
};

