#pragma once
#include "CoreMinimal.h"
#include "CameraTaskInterface.h"
#include "SP3_CameraBase.h"
#include "SP3_CameraVictoryOrbit.generated.h"

class AActor;

UCLASS(Blueprintable)
class FALCON_API ASP3_CameraVictoryOrbit : public ASP3_CameraBase, public ICameraTaskInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsPerRotation;
    
    ASP3_CameraVictoryOrbit();
    
    // Fix for true pure virtual functions not being implemented
};

