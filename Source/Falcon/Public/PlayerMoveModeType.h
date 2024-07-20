#pragma once
#include "CoreMinimal.h"
#include "EPlayerMoveMode.h"
#include "PlayerMoveModeType.generated.h"

USTRUCT(BlueprintType)
struct FPlayerMoveModeType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerMoveMode Enum;
    
    FALCON_API FPlayerMoveModeType();
};

