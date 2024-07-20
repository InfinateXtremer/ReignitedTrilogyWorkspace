#pragma once
#include "CoreMinimal.h"
#include "PhasmidActorFilter.h"
#include "PhasmidEffectItem.h"
#include "PhasmidEffectApplicationItem.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidEffectApplicationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidActorFilter Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidEffectItem> Effects;
    
    PHASMID_API FPhasmidEffectApplicationItem();
};

