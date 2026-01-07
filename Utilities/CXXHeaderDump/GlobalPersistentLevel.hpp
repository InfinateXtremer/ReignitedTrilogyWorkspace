#ifndef UE4SS_SDK_GlobalPersistentLevel_HPP
#define UE4SS_SDK_GlobalPersistentLevel_HPP

class AGlobalPersistentLevel_Modded_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UModViewer_C* ModMenu;                                                      // 0x0328 (size: 0x8)
    class ULevelStreamingKismet* MenuLevel;                                           // 0x0330 (size: 0x8)
    TSoftObjectPtr<UWorld> MenuLevelSoftObject;                                       // 0x0338 (size: 0x28)
    class ACameraActor* CameraActor;                                                  // 0x0360 (size: 0x8)
    FGlobalPersistentLevel_Modded_CSwitchedMenu SwitchedMenu;                         // 0x0368 (size: 0x10)
    bool ShouldBeVisible;                                                             // 0x0378 (size: 0x1)

    void InterfaceNotify(TEnumAsByte<EMenuState::Type> EMenuState);
    void CheckMainVisibility(bool& IsVisible);
    void HandleMenuMapSwitch(bool bShouldBeVisible);
    void SpawnMenuMap();
    void CheckTitleVisibility(bool& IsVisible);
    void CreateConsole();
    void HandlePersistentLevelLoading();
    void InpActEvt_K_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_F10_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_F5_K2Node_InputKeyEvent_0(FKey Key);
    void PrintString(FString In String, FLinearColor TextColor, float Duration);
    void IChangeFlameColor(FLinearColor NewColor);
    void ReceiveBeginPlay();
    void ShowModLoaderWidget();
    void CreateModLoaderMenu(bool Show?);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_GlobalPersistentLevel_Modded(int32 EntryPoint);
    void SwitchedMenu__DelegateSignature(TEnumAsByte<EMenuState::Type> CurrentMenu);
}; // Size: 0x379

#endif
