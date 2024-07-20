#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "Templates/SubclassOf.h"
#include "PhasmidEffectItem.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FPhasmidEffectItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectSpecHandle GeneratedSpec;
    
    PHASMID_API FPhasmidEffectItem();
};

