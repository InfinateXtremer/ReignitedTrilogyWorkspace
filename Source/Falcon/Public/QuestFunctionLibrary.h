#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "QuestFunctionLibrary.generated.h"

class APressToTalkWidget;
class AQuestController;

UCLASS(Blueprintable)
class UQuestFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SpawnSaveFairyDynamic(AQuestController* ctrl, const FName& Checkpoint);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveCheckpoint(AQuestController* ctrl, const FName& Checkpoint);
    
    UFUNCTION(BlueprintCallable)
    static bool MoveToPoint(AQuestController* ctrl, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static bool GreetPlayer(AQuestController* ctrl, bool autoGreet, TSubclassOf<APressToTalkWidget> PressToTalk);
    
};

