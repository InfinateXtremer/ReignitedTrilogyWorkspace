#pragma once
#include "CoreMinimal.h"
#include "ETfbDialogueRowResult.generated.h"

UENUM(BlueprintType)
enum class ETfbDialogueRowResult : uint8 {
    RowFound,
    RowNotFound,
};

