#pragma once
#include "CoreMinimal.h"
#include "EPatrolType.h"
#include "PatrolPath.generated.h"

class APhasmidTaggedTargetPoint;

USTRUCT(BlueprintType)
struct FPatrolPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPatrolType PatrolType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APhasmidTaggedTargetPoint*> PatrolPoints;
    
    PHASMID_API FPatrolPath();
};

