#pragma once
#include "CoreMinimal.h"
#include "QuestMontage.h"
#include "QuestMontages.generated.h"

USTRUCT(BlueprintType)
struct FALCON_API FQuestMontages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FQuestMontage> Array;
    
    FQuestMontages();
};

