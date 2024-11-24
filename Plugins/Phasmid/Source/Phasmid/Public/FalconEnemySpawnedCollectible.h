#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FalconEnemySpawnedCollectible.generated.h"

class AActor;
class APhasmidLevelActor;

USTRUCT(BlueprintType)
struct FFalconEnemySpawnedCollectible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhasmidLevelActor> CollectibleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhasmidLevelActor> AlternateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Collectible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCollected: 1;
    
    PHASMID_API FFalconEnemySpawnedCollectible();
};

