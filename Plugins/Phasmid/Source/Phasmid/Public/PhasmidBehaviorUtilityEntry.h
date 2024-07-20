#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PhasmidBehaviorUtilityEntry.generated.h"

class UBehaviorTree;
class UPhasmidUtilityMethod;

USTRUCT(BlueprintType)
struct FPhasmidBehaviorUtilityEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPhasmidUtilityMethod> UtilityMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPhasmidUtilityMethod* UtilityMethodInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedUtilityValue;
    
    PHASMID_API FPhasmidBehaviorUtilityEntry();
};

