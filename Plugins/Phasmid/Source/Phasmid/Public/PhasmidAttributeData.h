#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PhasmidAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    PHASMID_API FPhasmidAttributeData();
};

