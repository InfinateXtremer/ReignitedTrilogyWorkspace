#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Templates/SubclassOf.h"
#include "FalconNotifyState_EnemyNotify.generated.h"

class APhasmidCharacter;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class PHASMID_API UFalconNotifyState_EnemyNotify : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviewStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhasmidCharacter> PreviewClass;
    
    UFalconNotifyState_EnemyNotify();
};

