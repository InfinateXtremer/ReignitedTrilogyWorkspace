#pragma once
#include "CoreMinimal.h"
#include "EWwiseEvent.generated.h"

UENUM(BlueprintType)
enum class EWwiseEvent : uint8 {
    Unknown,
    EndOfEvent,
    EndOfDynamicSequenceItem,
    Marker = 0x4,
    Duration = 0x8,
    Starvation = 0x20,
    MusicSyncBeat = 0x40,
    MusicSyncBar = 0x80,
};

