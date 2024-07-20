#pragma once
#include "CoreMinimal.h"
#include "PhasmidEffectApplicationItem.h"
#include "PhasmidEffectApplicationContainer.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FPhasmidEffectApplicationContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidEffectApplicationItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* SourceAbilitySystemComponent;
    
    PHASMID_API FPhasmidEffectApplicationContainer();
};

