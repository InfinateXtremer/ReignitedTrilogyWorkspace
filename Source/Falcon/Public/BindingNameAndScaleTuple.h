#pragma once
#include "CoreMinimal.h"
#include "BindingNameAndScaleTuple.generated.h"

USTRUCT(BlueprintType)
struct FBindingNameAndScaleTuple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BindingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    FALCON_API FBindingNameAndScaleTuple();
};

