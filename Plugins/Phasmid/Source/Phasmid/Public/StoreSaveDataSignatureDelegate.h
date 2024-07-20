#pragma once
#include "CoreMinimal.h"
#include "PhasmidGameSaveObjectDataMap.h"
#include "PhasmidObjectSaveDataList.h"
#include "StoreSaveDataSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FStoreSaveDataSignature, int32, slotIndex, int32, gameIndex, const FString&, saveObjectName, const FString&, Level, const FPhasmidObjectSaveDataList&, saveDataList, const FPhasmidObjectSaveDataList&, prevDataList, const FPhasmidGameSaveObjectDataMap&, saveObjectDataMap);

