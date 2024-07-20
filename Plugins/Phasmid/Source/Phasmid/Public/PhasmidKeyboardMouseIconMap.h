#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "PhasmidKeyboardMouseIconMap.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidKeyboardMouseIconMap : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    FPhasmidKeyboardMouseIconMap();
};

