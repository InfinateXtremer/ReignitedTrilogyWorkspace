#pragma once
#include "CoreMinimal.h"
#include "ETargetField.h"
#include "TargetFieldType.generated.h"

USTRUCT(BlueprintType)
struct FALCON_API FTargetFieldType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetField Enum;
    
    FTargetFieldType();
};

