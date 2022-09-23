

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "LevelRecordType.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API ULevelRecordTypeEnum : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM(BlueprintType)
enum ELevelRecordType {
	ELRT_TRANSPORT = 0,
	ELRT_LEVEL = 1,
	ELRT_LEVEL_SUBSET = 2,
	ELRT_MAX = 3,
};