#pragma once
#include "CoreMinimal.h"
#include "Actions.h"
#include "ActionsList.generated.h"

USTRUCT(BlueprintType)
struct FActionsList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActions> Actions;
    
    FALCON_API FActionsList();
};

