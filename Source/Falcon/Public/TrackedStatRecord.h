

#pragma once

#include "CoreMinimal.h"
#include "InventoryType.h"
#include "Engine/UserDefinedStruct.h"
#include "TrackedStatRecord.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API UTrackedStatRecordUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};
	


USTRUCT(BlueprintType)
struct FTrackedStatRecord
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Key;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EInventoryType> inventoryType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count;


};