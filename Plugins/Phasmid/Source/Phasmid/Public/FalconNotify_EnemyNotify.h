#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "FalconNotify_EnemyNotify.generated.h"

class APhasmidCharacter;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class PHASMID_API UFalconNotify_EnemyNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviewStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhasmidCharacter> PreviewClass;
    
    UFalconNotify_EnemyNotify();
};

