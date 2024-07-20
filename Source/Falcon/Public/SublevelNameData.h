#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SublevelNameData.generated.h"

USTRUCT(BlueprintType)
struct FSublevelNameData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SublevelName;
    
    FALCON_API FSublevelNameData();
};

