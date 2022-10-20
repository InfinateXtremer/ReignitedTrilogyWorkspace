

#pragma once

#include "CoreMinimal.h"
#include "InventoryType.h"
#include "Engine/UserDefinedStruct.h"
#include "PhasmidInventoryMap.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidInventoryMapStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
public:



};



USTRUCT(BlueprintType)
struct FPhasmidInventoryMap
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<TEnumAsByte<EInventoryType>, int32> inventoryMap;


};