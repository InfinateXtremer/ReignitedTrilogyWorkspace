#pragma once
#include "CoreMinimal.h"
#include "ESubObjectiveType.generated.h"

UENUM(BlueprintType)
namespace ESubObjectiveType {
    enum Type {
        SubObjectiveType_Timer,
        SubObjectiveType_Percent,
        SubObjectiveType_Counter,
        SubObjectiveType_Boolean,
        SubObjectiveType_MAX UMETA(Hidden),
    };
}

