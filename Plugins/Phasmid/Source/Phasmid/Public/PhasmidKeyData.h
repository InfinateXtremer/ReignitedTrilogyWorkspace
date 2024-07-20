#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EKeybindingEntry.h"
#include "EPhasmidAction.h"
#include "PhasmidKeyData.generated.h"

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhasmidAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeybindingEntry KeybindingEntry;
    
    FPhasmidKeyData();
};

