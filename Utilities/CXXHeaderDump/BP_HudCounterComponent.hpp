#ifndef UE4SS_SDK_BP_HudCounterComponent_HPP
#define UE4SS_SDK_BP_HudCounterComponent_HPP

class UBP_HudCounterComponent_C : public UHudCounterComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F8 (size: 0x8)
    TSubclassOf<class AFalconHud> PlayerHud;                                          // 0x0100 (size: 0x8)
    class AGameHud_C* GameHud;                                                        // 0x0108 (size: 0x8)
    FString counter name;                                                             // 0x0110 (size: 0x10)
    TMap<EFalconHudWidgetPosition, TEnumAsByte<EHudPosition::Type>> HudPositionMap;   // 0x0120 (size: 0x50)

    void SetCounter(int32 Count);
    void ShowCounter(int32 TotalCount, int32 StartCount, FName CounterName, EFalconHudWidgetPosition Position);
    void ReceiveBeginPlay();
    void HideCounter();
    void ExecuteUbergraph_BP_HudCounterComponent(int32 EntryPoint);
}; // Size: 0x170

#endif
