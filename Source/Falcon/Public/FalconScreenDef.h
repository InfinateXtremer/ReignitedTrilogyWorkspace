

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/UserDefinedStruct.h"
#include "Blueprint/WidgetBlueprintGeneratedClass.h"
#include "FalconScreenType.h"
#include "FalconScreenLayerType.h"
#include "FalconScreenDef.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FFalconScreenDef : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EFalconScreenType> screenType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EFalconScreenLayerType> layerType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 zValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isModal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UWidgetBlueprintGeneratedClass* widgetClass;

};