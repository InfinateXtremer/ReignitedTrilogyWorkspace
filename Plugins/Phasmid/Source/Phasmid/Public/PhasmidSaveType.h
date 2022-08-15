

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "PhasmidSaveType.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidSaveType : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};


UENUM()
enum class EPhasmidSaveType : uint8
{
	EPST_LevelEnd = 0,
	EPST_Checkpoint = 1,
	EPST_Respawn = 2,
	EPST_Ignore = 3,
	EPST_Delete = 4,
};
