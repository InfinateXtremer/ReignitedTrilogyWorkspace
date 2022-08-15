

#pragma once

#include "CoreMinimal.h"
#include "InventoryType.h"
#include "Engine/UserDefinedStruct.h"
#include "PhasmidInventoryItem.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidInventoryItemUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};


USTRUCT(BlueprintType)
struct FPhasmidInventoryItem
{
	GENERATED_USTRUCT_BODY()

public:

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInventoryType ItemType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 quantity;

};