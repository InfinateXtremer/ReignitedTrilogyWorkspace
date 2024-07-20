#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESubObjectiveType.h"
#include "SubObjectiveDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSubObjectiveDefinition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectiveGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESubObjectiveType::Type> SubObjectiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoComplete;
    
    PHASMID_API FSubObjectiveDefinition();
};

