#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputCoreTypes.h"
#include "EKeybindingEntry.h"
#include "EPhasmidAction.h"
#include "PhasmidKeyData.h"
#include "PhasmidKeybindData.h"
#include "FalconInputData.h"
#include "FalconRebindableInputSystem.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Input, meta=(BlueprintSpawnableComponent))
class UFalconRebindableInputSystem : public UActorComponent {
    GENERATED_BODY()
public:
    UFalconRebindableInputSystem();
    UFUNCTION(BlueprintCallable)
    void StoreCurrentActionBindings();
    
    UFUNCTION(BlueprintCallable)
    void SetupLoadGlobalKeybindingChanges();
    
    UFUNCTION(BlueprintCallable)
    static void SetMouseSensitivity(float NewSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardPhasmidActionBinding(EPhasmidAction Action, FKey NewKey, EKeybindingEntry KeybindingEntry, bool RemoveKeybindsThatAreTheSame);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardBindingForListOfKeybindings(TArray<FPhasmidKeybindData> Bindings, FKey NewKey, EKeybindingEntry KeybindingEntry);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardAxisBinding(FName BindingName, FKey NewKey, EKeybindingEntry KeybindingEntry, float Scale, bool SaveBindings);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardActionBinding(FName BindingName, FKey NewKey, EKeybindingEntry KeybindingEntry, bool SaveBindings);
    
    UFUNCTION(BlueprintCallable)
    void SetAllBindingsBackToDefault();
    
    UFUNCTION(BlueprintCallable)
    void RevertToStoredActionBindings();
    
    UFUNCTION(BlueprintCallable)
    void RemoveBindingForAction(EPhasmidAction Action, EKeybindingEntry KeybindingEntry);
    
    UFUNCTION(BlueprintCallable)
    void LoadGlobalKeybindingChanges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyAlreadyBoundToAction(EPhasmidAction Action, FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyAlreadyBound(FKey Key, TArray<EPhasmidAction> ExcludeActionsFromSearch) const;
    
    UFUNCTION(BlueprintCallable)
    static void InvertAxis(FName AxisName);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPhasmidAction> GetNamesOfUnboundedPrimaryActions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetNamesOfBindingsContainingKey(FKey Key, TArray<FName> ExcludeBindingsFromSearch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPhasmidAction> GetNamesOfActionsContainingKey(FKey Key, TArray<EPhasmidAction> ExcludeActionsFromSearch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPhasmidKeyData> GetKeyboardKeysForAction(EPhasmidAction Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPhasmidKeyData> GetGamepadKeysForAction(EPhasmidAction Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayNameForAction(EPhasmidAction Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAxisScale(FName AxisName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFalconInputData> GetAllInputBindingData() const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_PrintAllCurrentKeybindings();
    
    UFUNCTION(BlueprintCallable)
    void Debug_PrintAllChangedKeybindingsInSaveData();
    
};

