#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkHostInterface -FallbackName=NavLinkHostInterface
#include "Components/PrimitiveComponent.h"
#include "PhasmidSplinePathJumpComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhasmidSplinePathJumpComponent : public UPrimitiveComponent//, public INavLinkHostInterface 
{
    GENERATED_BODY()
public:
    UPhasmidSplinePathJumpComponent();
    
    // Fix for true pure virtual functions not being implemented
};

