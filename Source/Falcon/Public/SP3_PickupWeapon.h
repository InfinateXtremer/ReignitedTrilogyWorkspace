#pragma once
#include "CoreMinimal.h"
#include "SP3_PickupBase.h"
#include "Templates/SubclassOf.h"
#include "SP3_PickupWeapon.generated.h"

class AActor;

UCLASS(Blueprintable)
class FALCON_API ASP3_PickupWeapon : public ASP3_PickupBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> WeaponClass;
    
    ASP3_PickupWeapon();
};

