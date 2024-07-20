#pragma once
#include "CoreMinimal.h"
#include "QuestMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FALCON_API FQuestMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    FQuestMontage();
};

