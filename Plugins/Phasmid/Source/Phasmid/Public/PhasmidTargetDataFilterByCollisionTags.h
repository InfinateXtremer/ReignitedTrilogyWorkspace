#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "GameplayTagContainer.h"
#include "PhasmidTargetDataFilterByCollisionTags.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidTargetDataFilterByCollisionTags : public FGameplayTargetDataFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SourceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MatchesAll;
    
    PHASMID_API FPhasmidTargetDataFilterByCollisionTags();
};

