#pragma once
#include "CoreMinimal.h"
#include "SequenceTask.h"
#include "PlayerTeleportTask.generated.h"

UCLASS(Blueprintable)
class FALCON_API UPlayerTeleportTask : public USequenceTask {
    GENERATED_BODY()
public:
    UPlayerTeleportTask();
};

