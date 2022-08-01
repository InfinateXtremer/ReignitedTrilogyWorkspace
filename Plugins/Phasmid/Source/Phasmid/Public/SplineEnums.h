

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "SplineEnums.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API USplineEnums : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum class ESplineSnapType {
	SnapLocationAndRotation = 0,
	SnapRotation = 1,
	None = 2,
	ESplineSnapType_MAX = 3,
};

UENUM()
enum class EFollowSplineType {
	Once = 0,
	Loop = 1,
	ReverseAtEnd = 2,
	EFollowSplineType_MAX = 3,
};

UENUM()
enum class EPhasmidSplineTraversalMode {
	Flying = 0,
	Walking = 1,
	Slide = 2,
	Jump = 3,
	Swim = 4,
	NavWalking = 5,
	EPhasmidSplineTraversalMode_MAX = 6,
};