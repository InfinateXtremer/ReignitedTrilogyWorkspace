#pragma once
#include "CoreMinimal.h"
#include "OnSplineEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSplineEvent, AActor*, Owner);

