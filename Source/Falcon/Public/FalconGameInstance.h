#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputSource -FallbackName=EInputSource
#include "Engine/GameInstance.h"
#include "EFalconGameState.h"
#include "FalconGameInstanceInterface.h"
#include "OnPrimaryControllerDetectedDelegate.h"
#include "PurchaseOption.h"
#include "QuestionScreenCallbackInterface.h"
#include "FalconGameInstance.generated.h"

class AFalconScreenManager;
class APlayerController;
class UDataTable;

UCLASS(Blueprintable, NonTransient)
class UFalconGameInstance : public UGameInstance, public IFalconGameInstanceInterface, public IQuestionScreenCallbackInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> _widgetTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPurchaseOption> PurchasedOptions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFalconScreenManager* _screenManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WelcomeScreenMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MainMenuMap;
    
public:
    UFalconGameInstance();
    UFUNCTION(BlueprintCallable)
    void ShowExternalLoginUI();
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateMouseCursorInCutscene(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBypassSettingInputModeForCutsceneMouseCursor(bool DoBypass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QuestionScreenOptionSelected(int32 selectedIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PrimaryControllerDetected();
    
    //UFUNCTION(BlueprintCallable)
    //void OnInputSourceChanged(EInputSource NewInputSource);
    
    UFUNCTION(BlueprintCallable)
    void OnHideMouseCursorTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLevelStreamingComplete();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateChangedForCutscenes(EFalconGameState aOldState, EFalconGameState aNewState);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateChanged(EFalconGameState aOldState, EFalconGameState aNewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPrimaryController();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMaximumNumberOfControllers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GameSavingEnabled();
    
    UFUNCTION(BlueprintCallable)
    void DetectPrimaryController(FOnPrimaryControllerDetected OnPrimaryControllerDetected);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void GetUserProfileName(FString& ProfileName) override PURE_VIRTUAL(GetUserProfileName,);
    
    UFUNCTION(BlueprintCallable)
    bool GetSkipFrontEnd() override PURE_VIRTUAL(GetSkipFrontEnd, return false;);
    
    UFUNCTION(BlueprintCallable)
    AFalconScreenManager* GetFalconScreenManager() override PURE_VIRTUAL(GetFalconScreenManager, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool GetDemoMode() override PURE_VIRTUAL(GetDemoMode, return false;);
    
    UFUNCTION(BlueprintCallable)
    void closeProfileChangedDialog() override PURE_VIRTUAL(closeProfileChangedDialog,);
    
};

