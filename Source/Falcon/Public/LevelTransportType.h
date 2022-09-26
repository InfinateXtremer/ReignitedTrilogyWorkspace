

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "LevelTransportType.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API ULevelTransportTypeENum : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum ELevelTransportType {
	ELTT_LOAD_ONLY = 0,
	ELTT_UNLOAD_CURRENT_LOAD_NEW = 1,
	ELTT_UNLOAD_ONLY = 2,
	ELTT_DELAYED_START = 3,
	ELTT_MAX = 4,
};