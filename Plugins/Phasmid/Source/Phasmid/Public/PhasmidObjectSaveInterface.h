#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PhasmidObjectSaveDataList.h"
#include "PhasmidObjectSaveInterface.generated.h"

UINTERFACE(Blueprintable)
class PHASMID_API UPhasmidObjectSaveInterface : public UInterface {
    GENERATED_BODY()
};

class PHASMID_API IPhasmidObjectSaveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    
};

