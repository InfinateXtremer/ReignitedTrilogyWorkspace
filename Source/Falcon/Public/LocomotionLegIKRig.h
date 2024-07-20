#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "LocomotionLegIKRig.generated.h"

USTRUCT(BlueprintType)
struct FALCON_API FLocomotionLegIKRig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneUpper;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneLower;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneAnkle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneToe;
    
    FLocomotionLegIKRig();
};

