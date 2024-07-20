#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputSource -FallbackName=EInputSource
#include "Engine/DataTable.h"
#include "EPhasmidAction.h"
#include "PhasmidControlCommandToActionMap.generated.h"

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidControlCommandToActionMap : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhasmidAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ControlCommands;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //TMap<EInputSource, EPhasmidAction> InputSourceActionOverridesMap;
    
    FPhasmidControlCommandToActionMap();
};

