#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LevelPath_cpp.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FLevelPath_cpp : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelMapPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelMapNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHomeworld;
    
    FALCON_API FLevelPath_cpp();
};

