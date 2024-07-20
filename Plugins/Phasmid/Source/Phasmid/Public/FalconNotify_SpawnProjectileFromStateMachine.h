#pragma once
#include "CoreMinimal.h"
#include "FalconNotify_EnemyNotify.h"
#include "FalconNotify_SpawnProjectileFromStateMachine.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PHASMID_API UFalconNotify_SpawnProjectileFromStateMachine : public UFalconNotify_EnemyNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProjectileName;
    
    UFalconNotify_SpawnProjectileFromStateMachine();
};

