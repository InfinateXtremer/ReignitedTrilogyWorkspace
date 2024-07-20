#pragma once
#include "CoreMinimal.h"
#include "PhasmidPathFlags.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidPathFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    PHASMID_API FPhasmidPathFlags();
};

