#pragma once
#include "CoreMinimal.h"
#include "MobileDenizenController.h"
#include "SuperBonusThiefController.generated.h"

UCLASS(Abstract, Blueprintable)
class FALCON_API ASuperBonusThiefController : public AMobileDenizenController {
    GENERATED_BODY()
public:
    ASuperBonusThiefController();
};

