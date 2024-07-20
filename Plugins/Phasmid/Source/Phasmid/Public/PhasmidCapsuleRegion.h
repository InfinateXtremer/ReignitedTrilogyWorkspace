#pragma once
#include "CoreMinimal.h"
#include "PhasmidCollisionRegion.h"
#include "PhasmidCapsuleRegion.generated.h"

UCLASS(Blueprintable)
class PHASMID_API APhasmidCapsuleRegion : public APhasmidCollisionRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialRadius;
    
    APhasmidCapsuleRegion();
};

