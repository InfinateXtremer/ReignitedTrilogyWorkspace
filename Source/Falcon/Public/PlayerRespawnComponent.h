#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "PlayerRespawnComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerRespawnComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPlayerRespawnComponent();
};

