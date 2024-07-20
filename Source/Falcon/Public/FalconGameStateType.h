#pragma once
#include "CoreMinimal.h"
#include "EFalconGameState.h"
#include "FalconGameStateType.generated.h"

USTRUCT(BlueprintType)
struct FALCON_API FFalconGameStateType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFalconGameState Enum;
    
    FFalconGameStateType();
};

