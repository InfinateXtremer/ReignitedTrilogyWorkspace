#pragma once
#include "CoreMinimal.h"
#include "FalconScreenConfigData.h"
#include "FalconScreenConfigObject.h"
#include "FalconScreenConfigDefault.generated.h"

UCLASS(Blueprintable)
class FALCON_API UFalconScreenConfigDefault : public UFalconScreenConfigObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconScreenConfigData configData;
    
    UFalconScreenConfigDefault();
};

