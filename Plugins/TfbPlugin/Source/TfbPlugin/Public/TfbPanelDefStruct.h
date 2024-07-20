#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "TfbPanelButtonDefStruct.h"
#include "TfbPanelDefStruct.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FTfbPanelDefStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UClass* handlerObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> widgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FTfbPanelButtonDefStruct> buttonList;
    
    TFBPLUGIN_API FTfbPanelDefStruct();
};

