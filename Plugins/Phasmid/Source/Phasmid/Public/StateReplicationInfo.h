#pragma once
#include "CoreMinimal.h"
#include "StateReplicationInfo.generated.h"

class UPhasmidStateComponent;

USTRUCT(BlueprintType)
struct FStateReplicationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidStateComponent* ReplicatedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    PHASMID_API FStateReplicationInfo();
};

