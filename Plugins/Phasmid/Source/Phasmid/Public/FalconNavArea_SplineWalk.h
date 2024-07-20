#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavAreas/NavArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavArea -FallbackName=NavArea
#include "FalconNavArea_SplineWalk.generated.h"

UCLASS(Blueprintable)
class UFalconNavArea_SplineWalk : public UNavArea {
    GENERATED_BODY()
public:
    UFalconNavArea_SplineWalk();
};

