#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SP3SparxEnemyLoot.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSP3SparxEnemyLoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> LootClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnPoint;
    
    FALCON_API FSP3SparxEnemyLoot();
};

