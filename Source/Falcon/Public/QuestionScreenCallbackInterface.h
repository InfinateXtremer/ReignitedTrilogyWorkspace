#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "QuestionScreenCallbackInterface.generated.h"

UINTERFACE(Blueprintable)
class FALCON_API UQuestionScreenCallbackInterface : public UInterface {
    GENERATED_BODY()
};

class FALCON_API IQuestionScreenCallbackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QuestionScreenOptionSelected(int32 selectedIndex);
    
};

