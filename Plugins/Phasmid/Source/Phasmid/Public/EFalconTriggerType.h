#pragma once
#include "CoreMinimal.h"
#include "EFalconTriggerType.generated.h"

UENUM(BlueprintType)
enum class EFalconTriggerType : uint8 {
    Timer,
    DistanceLessThan,
    DistanceGreaterThan,
    MontageDone,
    MoveDone,
    CausedDamage,
    ReceivedDamage,
    AnyInWatchListDestroyed,
    AllInWatchListDestroyed,
    WatchCountLessThan,
    WatchCountGreaterThan,
    CollisionVolume,
    CollisionVolumeExit,
    TargetVisible,
    TargetNotVisible,
    HitPointsEqual,
    OnScreenFoV,
    OffScreenFoV,
    SignalReceived,
    ReachedSplinePoint,
    LaunchToTheHeavensDone,
    Dist2DLessThan,
    Dist2DGreaterThan,
    PlayerHurt,
    OnGround,
    IsSkateboarding,
    IsNotSkateboarding,
    BlueprintFunction,
    CurrentStateIsNot,
};

