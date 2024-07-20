#pragma once
#include "CoreMinimal.h"
#include "EFanfareType.generated.h"

UENUM(BlueprintType)
enum class EFanfareType : uint8 {
    EFFT_None,
    EFFT_Dragon,
    EFFT_Boss,
    EFFT_LevelComplete,
    EFFT_SkillPoint,
    EFFT_AllGems,
    EFFT_PowerGate,
    EFFT_AllDragons,
    EFFT_AllEggs,
    EFFT_1UP,
    EFFT_GreenOrbs,
    EFFT_GreenOrbAgain,
    EFFT_TalismanAgain,
    EFFT_S3Egg,
    EFFT_S3EggAgain,
    EFFT_S3EggAll,
    EFFT_ArtGalleryUnlocked,
    EFFT_MAX UMETA(Hidden),
};

