#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MasterLevelData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FMasterLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelMapPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SublevelNameTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHomeworld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool requiresPatch;
    
    FALCON_API FMasterLevelData();
};

