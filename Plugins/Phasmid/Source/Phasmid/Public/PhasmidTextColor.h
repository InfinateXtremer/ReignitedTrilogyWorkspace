#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PhasmidTextColor.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidTextColor : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString colorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString colorRGBA;
    
    PHASMID_API FPhasmidTextColor();
};

