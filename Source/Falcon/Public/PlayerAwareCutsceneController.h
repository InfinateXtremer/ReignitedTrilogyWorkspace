#pragma once
#include "CoreMinimal.h"
#include "CutsceneController.h"
#include "PlayerAwareCutsceneController.generated.h"

UCLASS(Blueprintable)
class FALCON_API APlayerAwareCutsceneController : public ACutsceneController {
    GENERATED_BODY()
public:
    APlayerAwareCutsceneController();
};

