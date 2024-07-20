#pragma once
#include "CoreMinimal.h"
#include "PhasmidGameSaveObjectId.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidGameSaveObjectId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ObjectName;
    
    PHASMID_API FPhasmidGameSaveObjectId();
};

