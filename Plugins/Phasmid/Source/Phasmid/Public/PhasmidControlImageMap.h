#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PhasmidControlImageMap.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPhasmidControlImageMap : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FString controlId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UTexture2D* controlImageXb1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UTexture2D* controlImagePs4;
    
    PHASMID_API FPhasmidControlImageMap();
};

