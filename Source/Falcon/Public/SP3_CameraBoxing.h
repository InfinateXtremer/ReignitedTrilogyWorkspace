#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SP3_CameraBase.h"
#include "SP3_CameraBoxing.generated.h"

UCLASS(Blueprintable)
class FALCON_API ASP3_CameraBoxing : public ASP3_CameraBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_distParams;
    
    ASP3_CameraBoxing();
};

