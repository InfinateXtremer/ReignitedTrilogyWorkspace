#pragma once
#include "CoreMinimal.h"
#include "PhasmidAIOrdersHandle.generated.h"

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidAIOrdersHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
public:
    FPhasmidAIOrdersHandle();
};

