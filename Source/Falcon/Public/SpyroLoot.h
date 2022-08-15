

#pragma once

#include "CoreMinimal.h"
#include "PhasmidLevelActor.h"
#include "Curves/CurveFloat.h"
#include "CollectionSequenceState.h"
#include "Math/Rotator.h"
#include "GameFramework/Character.h"
#include "SpyroLoot.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API ASpyroLoot : public APhasmidLevelActor
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LevelKeyForSave;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SparxCollectionDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovingPositionLerpDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector PlayerOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* SparxCollectionHeightCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ACharacter* playerCharacter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECollectionSequenceState CollectionSequenceState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bManualLootRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator ManualCollectionRotation;
	
	
};
