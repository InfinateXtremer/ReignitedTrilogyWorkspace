#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TfbHudDialogCallbackInterface.h"
#include "skTfbToChangeTheirInterface.generated.h"

class UQuestDialogTask;

UCLASS(Blueprintable)
class AskTfbToChangeTheirInterface : public AActor, public ITfbHudDialogCallbackInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestDialogTask* Parent;
    
    AskTfbToChangeTheirInterface();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HudDialogOptionSelected(int32 selectedIndex);
    
    
    // Fix for true pure virtual functions not being implemented
};

