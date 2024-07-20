#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhasmidActorAggroBlueprintInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPhasmidActorAggroBlueprintInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastKnownPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Aggro;
    
    PHASMID_API FPhasmidActorAggroBlueprintInfo();
};

