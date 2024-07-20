#pragma once
#include "CoreMinimal.h"
#include "MontageState.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FMontageState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName stateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    FALCON_API FMontageState();
};

