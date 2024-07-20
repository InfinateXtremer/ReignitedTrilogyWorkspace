#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "FullbodyDataTable.generated.h"

USTRUCT(BlueprintType)
struct FFullbodyDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath FullBodyAnim;
    
    FALCON_API FFullbodyDataTable();
};

