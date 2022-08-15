

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EnemyDebugDrawOverrideType.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UEnemyDebugDrawOverrideTypeEnum : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM(BlueprintType)
enum EEnemyDebugDrawOverrideType {
	EEDDO_None = 0,
	EEDDO_On = 1,
	EEDDO_Off = 2,
	EEDDO_MAX = 3,
};