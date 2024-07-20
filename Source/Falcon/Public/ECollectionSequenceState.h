#pragma once
#include "CoreMinimal.h"
#include "ECollectionSequenceState.generated.h"

UENUM(BlueprintType)
enum class ECollectionSequenceState : uint8 {
    None,
    StartSequence,
    PlayingSparxSequence,
    PlayingChargeSequence,
    FinishedSequence,
};

