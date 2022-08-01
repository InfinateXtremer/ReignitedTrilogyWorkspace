

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "GameplayTagContainer.h"
#include "GameplayAbility.h"
#include "CollisionRegionShape.h"
#include "CollisionRegionFilter.h"
#include "PhasmidCollisionEmitterStruct.h"
#include "PhasmidCollisionStruct.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidCollisionUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};

USTRUCT(BlueprintType)
struct FPhasmidCollisionStruct
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECollisionRegionShape Shape;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DamageGroupName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECollisionRegionFilter CollisionFilter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCollideWithOwner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UGameplayAbility> OverrideCollisionAbility;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSkipDamageExecution;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollisionInterval;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EndCollisionInterval;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollisionMagnitude;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer CollisionTags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Dimensions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InitialLifeTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInteractWithWalls;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform Transform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAttachToParent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachmentRule LocationRule;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachmentRule RotationRule;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttachmentRule ScaleRule;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidCollisionEmitterStruct ImpactEmitterSettings;

};