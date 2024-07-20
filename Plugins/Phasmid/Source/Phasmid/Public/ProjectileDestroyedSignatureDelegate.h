#pragma once
#include "CoreMinimal.h"
#include "ProjectileDestroyedSignatureDelegate.generated.h"

class AActor;
class APhasmidProjectileActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProjectileDestroyedSignature, APhasmidProjectileActor*, Projectile, AActor*, OtherActor);

