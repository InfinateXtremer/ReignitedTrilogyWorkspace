

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "InventoryType.h"
#include "PhasmidObjectSaveStruct.h"
#include "PhasmidGameSaveLevelObjectMap.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidGameSaveLevelObjectMapUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};

USTRUCT(BlueprintType)
struct FPhasmidGameSaveLevelObjectMap
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FPhasmidGameSaveObjectDataMap> levelObjectMap;

};