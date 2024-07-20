#pragma once
#include "CoreMinimal.h"
#include "PhasmidCollisionRegion.h"
#include "PhasmidSphereRegion.generated.h"

UCLASS(Blueprintable)
class PHASMID_API APhasmidSphereRegion : public APhasmidCollisionRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSphereRadius;
    
    APhasmidSphereRegion();
};

