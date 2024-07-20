#pragma once
#include "CoreMinimal.h"
#include "AdditionalPooledActorSetupDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAdditionalPooledActorSetupDelegate, AActor*, SpawnedActor);

