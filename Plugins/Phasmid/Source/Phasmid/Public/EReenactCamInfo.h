#pragma once
#include "CoreMinimal.h"
#include "EReenactCamInfo.generated.h"

UENUM(BlueprintType)
enum class EReenactCamInfo : uint8 {
    None,
    WithOffset,
    WithoutOffset,
};

