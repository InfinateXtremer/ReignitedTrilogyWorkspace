#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BuzzSawData.generated.h"

USTRUCT(BlueprintType)
struct FBuzzSawData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageTags;
    
    FALCON_API FBuzzSawData();
};

