#ifndef UE4SS_SDK_UI_FlightScreen_OneSet_HPP
#define UE4SS_SDK_UI_FlightScreen_OneSet_HPP

class UUI_FlightScreen_OneSet_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* CollectedOneSet;                                          // 0x0210 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0218 (size: 0x8)
    class UUI_FlightIcon_C* UI_FlightIcon_001;                                        // 0x0220 (size: 0x8)
    class UUI_FlightIcon_C* UI_FlightIcon_002;                                        // 0x0228 (size: 0x8)
    class UUI_FlightIcon_C* UI_FlightIcon_003;                                        // 0x0230 (size: 0x8)
    class UUI_FlightIcon_C* UI_FlightIcon_004;                                        // 0x0238 (size: 0x8)
    class UUI_FlightIcon_C* UI_FlightIcon_005;                                        // 0x0240 (size: 0x8)
    class UUI_FlightIcon_C* UI_FlightIcon_006;                                        // 0x0248 (size: 0x8)
    class UUI_FlightIcon_C* UI_FlightIcon_007;                                        // 0x0250 (size: 0x8)
    class UUI_FlightIcon_C* UI_FlightIcon_008;                                        // 0x0258 (size: 0x8)

    void show completely collected(EFlightLevelTargetType Type);
    void Reset();
    void ExecuteUbergraph_UI_FlightScreen_OneSet(int32 EntryPoint);
}; // Size: 0x260

#endif
