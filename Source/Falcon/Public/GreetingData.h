#pragma once
#include "CoreMinimal.h"
#include "EAutoGreet.h"
#include "GreetingData.generated.h"

USTRUCT(BlueprintType)
struct FGreetingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutoGreet Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Montage;
    
    FALCON_API FGreetingData();
};

