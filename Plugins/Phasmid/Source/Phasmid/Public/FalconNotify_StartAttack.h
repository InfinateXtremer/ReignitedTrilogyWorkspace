#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FalconNotify_StartAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PHASMID_API UFalconNotify_StartAttack : public UAnimNotify {
    GENERATED_BODY()
public:
    UFalconNotify_StartAttack();
};

