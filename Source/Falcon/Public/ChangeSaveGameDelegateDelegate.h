#pragma once
#include "CoreMinimal.h"
#include "ChangeSaveGameDelegateDelegate.generated.h"

class UFalconSaveGame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeSaveGameDelegate, UFalconSaveGame*, incomingSaveGame);

