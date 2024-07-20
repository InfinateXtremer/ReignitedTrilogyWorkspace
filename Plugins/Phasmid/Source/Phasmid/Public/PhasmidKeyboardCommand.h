#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "PhasmidKeyboardCommand.generated.h"

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidKeyboardCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsExcludedFromUsingKeyboardIcon;
    
    FPhasmidKeyboardCommand();
};

