#pragma once
#include "CoreMinimal.h"
#include "EFalconAreaExitTitle.h"
#include "QuestAreaExitRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestAreaExitRequested, EFalconAreaExitTitle, Title);

