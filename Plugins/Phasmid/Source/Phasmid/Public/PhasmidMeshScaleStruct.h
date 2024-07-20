#pragma once
#include "CoreMinimal.h"
#include "PhasmidMeshScaleStruct.generated.h"

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidMeshScaleStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringDampening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringMaxSpeed;
    
    FPhasmidMeshScaleStruct();
};

