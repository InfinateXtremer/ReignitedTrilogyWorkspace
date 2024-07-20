#pragma once
#include "CoreMinimal.h"
#include "EFalconDialogueRowResult.generated.h"

UENUM(BlueprintType)
enum class EFalconDialogueRowResult : uint8 {
    RowFound,
    RowNotFound,
};

