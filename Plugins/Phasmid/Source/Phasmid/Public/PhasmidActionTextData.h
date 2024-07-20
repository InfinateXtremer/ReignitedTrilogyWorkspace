#pragma once
#include "CoreMinimal.h"
#include "EKeybindingEntry.h"
#include "EPhasmidAction.h"
#include "PhasmidActionTextData.generated.h"

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidActionTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhasmidAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeybindingEntry KeybindingEntry;
    
    FPhasmidActionTextData();
};

