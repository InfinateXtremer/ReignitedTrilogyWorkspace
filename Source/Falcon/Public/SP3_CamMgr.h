#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Templates/SubclassOf.h"
#include "SP3_CamMgr.generated.h"

class ASP3_CameraBase;

UCLASS(Blueprintable, NonTransient)
class FALCON_API ASP3_CamMgr : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASP3_CameraBase> m_cameraClass;
    
    ASP3_CamMgr();
};

