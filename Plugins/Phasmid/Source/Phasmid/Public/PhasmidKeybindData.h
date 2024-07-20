#pragma once
#include "CoreMinimal.h"
#include "PhasmidKeybindData.generated.h"

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidKeybindData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BindingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActionBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    FPhasmidKeybindData();
};

