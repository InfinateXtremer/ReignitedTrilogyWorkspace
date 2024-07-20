#pragma once
#include "CoreMinimal.h"
#include "AirshipPlayerEventDelegate.generated.h"

class ACharacter;
class APortal;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAirshipPlayerEvent, ACharacter*, PlayerChara, APortal*, Airship);

