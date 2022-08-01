

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "ProjectileOrientation.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UProjectileOrientation : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};


UENUM()
enum class EProjectileOrientation {
	Manual = 0,
	OrientToPlayer = 1,
	OrientToTarget = 2,
};
