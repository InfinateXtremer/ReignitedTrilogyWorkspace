#pragma once
#include "CoreMinimal.h"
#include "QuestController.h"
#include "MovieController.generated.h"

class UFileMediaSource;
class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API AMovieController : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* MovieFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartupDelay;
    
    AMovieController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ZapPlayer(const FName& Checkpoint, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Playing(UQuestActionsComponent* Actions);
    
};

