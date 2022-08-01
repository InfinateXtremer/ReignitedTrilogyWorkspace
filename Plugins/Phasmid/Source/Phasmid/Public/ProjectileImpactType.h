

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "ProjectileImpactType.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UProjectileImpactType : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum class EProjectileImpactType {
	OnImpactEffect = 0,
	OnExpireEffect = 1,
};