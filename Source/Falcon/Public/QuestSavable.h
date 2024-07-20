#pragma once
#include "CoreMinimal.h"
#include "QuestSavable.generated.h"

USTRUCT(BlueprintType)
struct FQuestSavable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 namePart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 valPart;
    
    //FALCON_API FQuestSavable();
};
//FORCEINLINE uint32 GetTypeHash(const FQuestSavable) { return 0; }

