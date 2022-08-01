

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "ProjectileType.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UProjectileType : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum class EProjectileType {
	DEFAULT = 0,
	FollowSpline = 1,
};