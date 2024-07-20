#pragma once
#include "CoreMinimal.h"
#include "EFalconGameState.h"
#include "FalconGameStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFalconGameStateChanged, EFalconGameState, PrevState, EFalconGameState, NextState);

