#pragma once
#include "CoreMinimal.h"
#include "DialogState.generated.h"

USTRUCT(BlueprintType)
struct FALCON_API FDialogState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName State;
    
    FDialogState();
};

