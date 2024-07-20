#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ObjectiveDefinition.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FObjectiveDefinition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SubObjectiveData;
    
    PHASMID_API FObjectiveDefinition();
};

