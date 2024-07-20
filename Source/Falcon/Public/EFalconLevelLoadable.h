#pragma once
#include "CoreMinimal.h"
#include "EFalconLevelLoadable.generated.h"

UENUM(BlueprintType)
namespace EFalconLevelLoadable {
    enum Type {
        LevelCanLoad,
        LevelNeedsPatch,
        LevelNeedsChunk,
    };
}

