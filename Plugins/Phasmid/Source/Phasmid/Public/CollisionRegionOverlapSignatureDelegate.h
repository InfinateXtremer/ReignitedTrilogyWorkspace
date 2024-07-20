#pragma once
#include "CoreMinimal.h"
#include "CollisionRegionOverlapSignatureDelegate.generated.h"

class AActor;
class APhasmidCollisionRegion;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCollisionRegionOverlapSignature, APhasmidCollisionRegion*, OverlappedRegion, AActor*, OtherActor, UPrimitiveComponent*, OtherComponent);

