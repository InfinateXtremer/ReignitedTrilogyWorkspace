

#pragma once

#include "CoreMinimal.h"
#include "InventoryType.h"
#include "UObject/Interface.h"
#include "PhasmidInventoryItemInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UPhasmidInventoryItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PHASMID_API IPhasmidInventoryItemInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void setSpawnedData(class UObject* spawner, int32 ID);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	EInventoryType getInventoryType();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void setItemSaveData(const FString& saveName, bool serializeData, int ID);
	
};
