

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "CollectionSequenceState.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API UCollectionSequenceState : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};


UENUM()
enum class ECollectionSequenceState {
	None = 0,
	StartSequence = 1,
	PlayingSparxSequence = 2,
	PlayingChargeSequence = 3,
	FinishedSequence = 4,
};