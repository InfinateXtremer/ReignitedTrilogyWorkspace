#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SP3_CameraBase.h"
#include "SP3_CameraJetpack.generated.h"

UCLASS(Blueprintable)
class FALCON_API ASP3_CameraJetpack : public ASP3_CameraBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_tgtOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_posOffset;
    
    ASP3_CameraJetpack();
};

