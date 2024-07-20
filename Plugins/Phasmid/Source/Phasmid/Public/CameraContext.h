#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "CameraSettings.h"
#include "CameraContext.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCameraContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraSettings CameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams TransitionParams;
    
    PHASMID_API FCameraContext();
};

