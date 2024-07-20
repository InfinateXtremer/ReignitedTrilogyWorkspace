#pragma once
#include "CoreMinimal.h"
#include "ESP3CharAbility.generated.h"

UENUM(BlueprintType)
enum class ESP3CharAbility : uint8 {
    Jump,
    Melee,
    GroundPound,
    FreeLook,
    Glide,
    Dive,
    Charge,
    Swim,
    Fly,
    Skateboard,
    DoubleJump,
    BounceJump,
    Gun,
    Bomb,
    Rocket,
    AirCarry,
    FlappyJump,
    Vehicle,
    Push,
    NUM,
};

