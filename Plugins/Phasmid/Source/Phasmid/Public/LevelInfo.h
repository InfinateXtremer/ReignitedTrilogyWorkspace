#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LevelInfo.generated.h"

USTRUCT(BlueprintType)
struct FLevelInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString levelMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    PHASMID_API FLevelInfo();
};

