#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPhasmidAction.h"
#include "PhasmidConsoleIconMap.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidConsoleIconMap : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPhasmidAction> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PS4_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* XB1_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SteamController_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SwitchController_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* KeyboardMouse_Icon;
    
    FPhasmidConsoleIconMap();
};

