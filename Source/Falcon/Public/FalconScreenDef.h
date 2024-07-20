#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFalconScreenLayerType.h"
#include "EFalconScreenType.h"
#include "Templates/SubclassOf.h"
#include "FalconScreenDef.generated.h"

class UFalconWidget;

USTRUCT(BlueprintType)
struct FFalconScreenDef : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFalconScreenType screenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFalconScreenLayerType layerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 zValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFalconWidget> widgetClass;
    
    FALCON_API FFalconScreenDef();
};

