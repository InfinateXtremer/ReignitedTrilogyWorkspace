#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PhasmidPanelButtonDefStruct.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FPhasmidPanelButtonDefStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FString Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool closeOnActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> widgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UClass* handlerObjectClass;
    
    PHASMID_API FPhasmidPanelButtonDefStruct();
};

