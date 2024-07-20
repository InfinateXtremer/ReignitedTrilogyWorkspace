#pragma once
#include "CoreMinimal.h"
#include "OnTargetDiedDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetDied, ACharacter*, chara);

