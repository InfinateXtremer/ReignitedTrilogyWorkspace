#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PhasmidHudDialogInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UPhasmidHudDialogInterface : public UInterface {
    GENERATED_BODY()
};

class IPhasmidHudDialogInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HudDialogShow(const AActor* dialogCharacter, const FText& DialogText, float displaySeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HudDialogHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HudDialogBalloonist(const AActor* Owner, const FText& question, const TArray<FText>& destinations, int32 defaultDestinationIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HudDialogAskQuestionAdv(const AActor* Owner, const AActor* dialogCharacter, const FText& question, float questionVOSecs, const TArray<FText>& answers, int32 defaultAnswerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HudDialogAskQuestion(const AActor* Owner, const AActor* dialogCharacter, const FText& question, const TArray<FText>& answers);
    
};

