#pragma once
#include "CoreMinimal.h"
#include "GemFinderOutputPinDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGemFinderOutputPin, AActor*, FoundActor);

