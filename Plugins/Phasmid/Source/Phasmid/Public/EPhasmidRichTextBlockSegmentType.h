#pragma once
#include "CoreMinimal.h"
#include "EPhasmidRichTextBlockSegmentType.generated.h"

UENUM(BlueprintType)
enum class EPhasmidRichTextBlockSegmentType : uint8 {
    RTB_Invalidated,
    RTB_Text,
    RTB_NewLine,
    RTB_Image,
    RTB_Material,
    RTB_KeyboardIcon,
    RTB_MAX UMETA(Hidden),
};

