

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "CollisionRegionFilter.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UCollisionRegionFilter : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum class ECollisionRegionFilter 
{
	OtherTeamOnly,
	MyTeamOnly,
	AllTeams,
};