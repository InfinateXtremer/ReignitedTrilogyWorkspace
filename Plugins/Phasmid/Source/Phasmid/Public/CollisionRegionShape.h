

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "CollisionRegionShape.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UCollisionRegionShape : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum class ECollisionRegionShape
{
	Sphere,
	Box,
	Capsule,
	Custom
};
