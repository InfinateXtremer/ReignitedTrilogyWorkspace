

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "FalconScreenLayerType.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API UFalconScreenLayerType : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum EFalconScreenLayerType
{
	EFSLT_None,
	EFSLT_Pause,
	EFSLT_Gameplay,
	EFLST_Loading,
	EFSLT_FrontEnd,
	EFLST_Debug
};