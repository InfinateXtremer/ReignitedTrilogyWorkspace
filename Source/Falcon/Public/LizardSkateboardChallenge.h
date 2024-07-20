#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ChallengeController.h"
#include "Templates/SubclassOf.h"
#include "LizardSkateboardChallenge.generated.h"

class APhasmidCharacter;

UCLASS(Blueprintable, Placeable)
class FALCON_API ALizardSkateboardChallenge : public AChallengeController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhasmidCharacter> LizardClassFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OnSkateboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OffSkateboard;
    
public:
    ALizardSkateboardChallenge();
};

