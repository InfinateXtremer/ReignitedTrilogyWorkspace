#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "LocomotionInput.h"
#include "LocomotionOutput.h"
#include "LocomotionSet.h"
#include "LocomotionTuning.h"
#include "LocomotionAnimInstance.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, NonTransient)
class FALCON_API ULocomotionAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionTuning LocTuning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocomotionSet> LocSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionInput LocInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionOutput LocOutput;
    
    ULocomotionAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimationAsset* GetLocAnim(int32 iSet, int32 iDir, int32 iGear, bool& Looping, float& tBlendIn, float& tBlendOut) const;
    
};

