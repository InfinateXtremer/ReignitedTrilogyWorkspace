

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "PhasmidLevelActor.h"
#include "FalconEnemySpawnedCollectible.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFalconEnemySpawnedCollectibleUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};

USTRUCT(BlueprintType)
struct FFalconEnemySpawnedCollectible
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class APhasmidLevelActor> CollectibleType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class APhasmidLevelActor> AlternateType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> Collectible;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCollected;

};