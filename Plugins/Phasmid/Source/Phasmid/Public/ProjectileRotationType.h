

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "ProjectileRotationType.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UProjectileRotationType : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum class EProjectileRotationType {
	WorldRotation = 0,
	RelativeRotation = 1,
	RelativeToLaunch = 2,
};