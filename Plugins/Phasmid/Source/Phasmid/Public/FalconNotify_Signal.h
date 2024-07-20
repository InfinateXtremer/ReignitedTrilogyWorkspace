#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FalconSignalData.h"
#include "FalconNotify_Signal.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFalconNotify_Signal : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconSignalData Signal;
    
    UFalconNotify_Signal();
};

