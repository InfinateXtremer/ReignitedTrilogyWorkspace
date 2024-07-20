#pragma once
#include "CoreMinimal.h"
#include "EFollowSplineType.generated.h"

UENUM()
enum class EFollowSplineType : int32 {
    Once,
    Loop,
    ReverseAtEnd,
};

