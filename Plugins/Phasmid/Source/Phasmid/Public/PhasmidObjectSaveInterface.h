

#pragma once

#include "CoreMinimal.h"
#include "PhasmidObjectSaveStruct.h"
#include "UObject/Interface.h"
#include "PhasmidObjectSaveInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UPhasmidObjectSaveInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PHASMID_API IPhasmidObjectSaveInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
	
};
