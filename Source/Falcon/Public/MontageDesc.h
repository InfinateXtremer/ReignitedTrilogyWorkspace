#pragma once
#include "CoreMinimal.h"
#include "MontageDesc.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FMontageDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Section;
    
    FALCON_API FMontageDesc();
};

