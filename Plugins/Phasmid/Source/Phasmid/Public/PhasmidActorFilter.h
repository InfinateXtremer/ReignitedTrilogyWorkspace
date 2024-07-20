#pragma once
#include "CoreMinimal.h"
#include "EPhasmidActorFilterMatchType.h"
#include "PhasmidActorFilter.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidActorFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhasmidActorFilterMatchType AllowSelf;
    
    PHASMID_API FPhasmidActorFilter();
};

