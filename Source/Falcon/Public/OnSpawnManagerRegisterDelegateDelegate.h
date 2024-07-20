#pragma once
#include "CoreMinimal.h"
#include "OnSpawnManagerRegisterDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnManagerRegisterDelegate, AActor*, Actor);

