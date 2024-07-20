#pragma once
#include "CoreMinimal.h"
#include "EPCMSkateEventType.generated.h"

UENUM(BlueprintType)
enum class EPCMSkateEventType : uint8 {
    None,
    StartVert,
    StartLaunch,
    EndLand,
    EndCrash,
    AddSpinL,
    AddSpinR,
    AddSpinF,
    AddSpinB,
    AddSpinFL,
    AddSpinFR,
    AddSpinBL,
    AddSpinBR,
};

