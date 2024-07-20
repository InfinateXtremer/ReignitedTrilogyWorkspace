#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "PhasmidTargetDataFilterByTeam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPhasmidTargetDataFilterByTeam : public FGameplayTargetDataFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* UnusedActor;
    
    PHASMID_API FPhasmidTargetDataFilterByTeam();
};

