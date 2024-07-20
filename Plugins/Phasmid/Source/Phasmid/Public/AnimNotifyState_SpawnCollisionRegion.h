#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "PhasmidCollisionStruct.h"
#include "AnimNotifyState_SpawnCollisionRegion.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PHASMID_API UAnimNotifyState_SpawnCollisionRegion : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidCollisionStruct CollisionData;
    
    UAnimNotifyState_SpawnCollisionRegion();
};

