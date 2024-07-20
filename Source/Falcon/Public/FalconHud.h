#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputSource -FallbackName=EInputSource
#include "Engine/EngineBaseTypes.h"
#include "GameFramework/HUD.h"
#include "InputCoreTypes.h"
#include "EInventoryType.h"
#include "Input/Events.h"
#include "EFlightLevelResult.h"
#include "EFlightLevelTargetType.h"
#include "FlightResult.h"
#include "HudFlightScreenInterface.h"
#include "HudFlightSummaryInterface.h"
#include "HudScreenInterface.h"
#include "FalconHud.generated.h"

class UDataTable;
class UFalconRebindableInputSystem;
class UObject;
class UWidget;

UCLASS(Blueprintable, NonTransient)
class FALCON_API AFalconHud : public AHUD, public IHudFlightSummaryInterface, public IHudFlightScreenInterface, public IHudScreenInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFalconRebindableInputSystem* RebindableInputSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStuckFixEnabled;
    
public:
    AFalconHud();
    //UFUNCTION(BlueprintCallable)
    //void UpdateMouseCursorVisibility(EInputSource Unused);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnforceInputSource();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetUseOldKeyboardMouseConfig(bool UseOldConfig);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetUseMouseForFlying(bool UseMouse);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMouseYForFlyingInverted(bool isInverted);
    
    UFUNCTION(BlueprintCallable)
    void SetInputToUIOnlyMode(UWidget* WidgetToFocus, EMouseLockMode MouseLockMode);
    
    UFUNCTION(BlueprintCallable)
    void SetInputToGameOnlyMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFlySensitivity(float FlyXAxis, float FlyYAxis);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetChargeSensitivity(float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetChargeModifierToDefault();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetChargeModifier(float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveGameMaximize();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetMouseYForFlyingInverted();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetFlySensitivity();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetChargeSensitivity();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAllKeybindsToDefault();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintAllKeybindings();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintAllChangedKeybindingsInSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStuckFixEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyValid(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyContainedInInputBindingsFromIni(const FName IniBinding, const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConsole();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFalconRebindableInputSystem* GetRebindableInputSystem() const;
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetDebugButtonPanelTable();
    
    UFUNCTION(BlueprintCallable, Exec)
    float GetChargeModifier();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceInputSource(int32 Source);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlightSummaryShow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlightSummaryHide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlightSummaryConfigure(UObject* aOwner, EInventoryType flightReward, const TArray<FFlightResult>& targetResults, EFlightLevelResult FlightResult, float Time, float bestTime, int32 place);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlightScreenShow(UClass* flightScreenWidgetClass, float startingSeconds, bool orbChallenge, const TArray<EFlightLevelTargetType>& Targets);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlightScreenHide(UClass* flightScreenWidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float FlightScreenGetTimeRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float FlightScreenGetTimeElapsed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlightScreenCollect(UClass* flightScreenWidgetClass, EFlightLevelTargetType ItemType, float bonusSeconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableStuckFix();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableStuckFix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKeyEvent CreateKeyEvent(FKey InKey);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeKeyboardAxisKeybindingToKey(FName BindingName, const FString& KeyName, int32 Entry, float Scale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeKeyboardActionKeybindingToKey(FName BindingName, const FString& KeyName, int32 Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowTreasureCount(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowLevelInventory(bool Show, bool autohide);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HudInventoryUpdated();
    
    
    // Fix for true pure virtual functions not being implemented
};

