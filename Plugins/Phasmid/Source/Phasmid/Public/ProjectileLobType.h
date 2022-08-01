

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "ProjectileLobType.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UProjectileLobType : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum class EProjectileLobType {
	None = 0,
	KeepAngle = 1,
	KeepVelocity = 2,
	KeepVelocity_HighArc = 3,
};