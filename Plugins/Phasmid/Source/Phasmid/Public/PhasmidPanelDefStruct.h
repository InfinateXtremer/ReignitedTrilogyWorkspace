#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PhasmidPanelButtonDefStruct.h"
#include "Templates/SubclassOf.h"
#include "PhasmidPanelDefStruct.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FPhasmidPanelDefStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UClass* handlerObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> widgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidPanelButtonDefStruct> buttonList;
    
    PHASMID_API FPhasmidPanelDefStruct();
};

