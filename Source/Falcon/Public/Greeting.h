#pragma once
#include "CoreMinimal.h"
#include "EAutoGreet.h"
#include "Greeting.generated.h"

USTRUCT(BlueprintType)
struct FGreeting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutoGreet Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool autoGreet;
    
    FALCON_API FGreeting();
};

