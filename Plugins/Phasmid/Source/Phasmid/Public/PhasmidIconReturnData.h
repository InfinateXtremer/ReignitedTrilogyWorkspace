#pragma once
#include "CoreMinimal.h"
#include "PhasmidActionTextData.h"
#include "PhasmidKeyboardCommand.h"
#include "PhasmidIconReturnData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidIconReturnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidKeyboardCommand KeyboardCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidActionTextData> KeyboardActionTextData;
    
    FPhasmidIconReturnData();
};

