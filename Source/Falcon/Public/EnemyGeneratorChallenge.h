#pragma once
#include "CoreMinimal.h"
#include "ChallengeController.h"
#include "EnemyGeneratorChallenge.generated.h"

class AEnemySpawnPool;

UCLASS(Abstract, Blueprintable, Placeable)
class FALCON_API AEnemyGeneratorChallenge : public AChallengeController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemySpawnPool* EnemySpawnPool;
    
public:
    AEnemyGeneratorChallenge();
};

