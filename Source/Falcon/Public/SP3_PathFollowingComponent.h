#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "SP3_PathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USP3_PathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    USP3_PathFollowingComponent();
};

