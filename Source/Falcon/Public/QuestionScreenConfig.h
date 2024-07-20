#pragma once
#include "CoreMinimal.h"
#include "FalconScreenConfigObject.h"
#include "QuestionConfigData.h"
#include "QuestionScreenConfig.generated.h"

UCLASS(Blueprintable)
class FALCON_API UQuestionScreenConfig : public UFalconScreenConfigObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestionConfigData configData;
    
    UQuestionScreenConfig();
};

