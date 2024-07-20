#pragma once
#include "CoreMinimal.h"
#include "FalconNotifyState_EnemyNotify.h"
#include "FalconNotifyState_SpawnCollisionRegionFromStateMachine.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PHASMID_API UFalconNotifyState_SpawnCollisionRegionFromStateMachine : public UFalconNotifyState_EnemyNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegionId;
    
    UFalconNotifyState_SpawnCollisionRegionFromStateMachine();
};

