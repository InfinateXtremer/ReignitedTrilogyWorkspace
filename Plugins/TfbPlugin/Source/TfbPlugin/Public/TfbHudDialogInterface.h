#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TfbHudDialogInterface.generated.h"

class AActor;
class UObject;

UINTERFACE(Blueprintable)
class TFBPLUGIN_API UTfbHudDialogInterface : public UInterface {
    GENERATED_BODY()
};

class TFBPLUGIN_API ITfbHudDialogInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HudDialogShow(const AActor* dialogCharacter, const FText& DialogText, float displaySeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HudDialogHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HudDialogBalloonist(const UObject* Owner, const FText& question, const TArray<FText>& destinations, int32 defaultDestinationIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HudDialogAskQuestionAdv(const UObject* Owner, const AActor* dialogCharacter, const FText& question, float questionVOSecs, const TArray<FText>& answers, int32 defaultAnswerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HudDialogAskQuestion(const UObject* Owner, const AActor* dialogCharacter, const FText& question, const TArray<FText>& answers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HudDialogActivate(const UObject* Owner, const FText& Title, const FText& question, float questionVOSecs, const TArray<FText>& answers, int32 defaultAnswerIndex);
    
};

