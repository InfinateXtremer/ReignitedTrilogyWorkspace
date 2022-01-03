

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EPhasmidTeamId.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidTeamId : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum class EPhasmidTeamId
{
	TeamOne,
	TeamTwo,
	TeamThree,
	TeamFour,
	NoTeam,
	Neutral,
	ELostLamaTeamId_MAX,
	EPhasmidTeamId_MAX,
};
