#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PhasmidSquadBehaviorTreeData.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidSquadBehaviorTreeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* Behavior;
    
    FPhasmidSquadBehaviorTreeData();
};

