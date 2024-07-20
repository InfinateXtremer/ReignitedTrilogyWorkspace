#pragma once
#include "CoreMinimal.h"
#include "QuestBinding.h"
#include "QuestControllerBindings.generated.h"

USTRUCT(BlueprintType)
struct FALCON_API FQuestControllerBindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestBinding> Bindings;
    
    FQuestControllerBindings();
};

