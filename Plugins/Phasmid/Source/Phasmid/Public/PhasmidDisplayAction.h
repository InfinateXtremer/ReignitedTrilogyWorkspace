#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPhasmidAction.h"
#include "PhasmidKeybindData.h"
#include "PhasmidDisplayAction.generated.h"

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidDisplayAction : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhasmidAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GlobalFlagKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidKeybindData> Bindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExcludeFromKBMBindingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeysCanBeBoundToMultipleActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MustBeBound;
    
    FPhasmidDisplayAction();
};

