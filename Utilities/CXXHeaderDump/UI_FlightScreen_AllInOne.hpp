#ifndef UE4SS_SDK_UI_FlightScreen_AllInOne_HPP
#define UE4SS_SDK_UI_FlightScreen_AllInOne_HPP

class UUI_FlightScreen_AllInOne_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* CollectedAll;                                             // 0x0210 (size: 0x8)
    class UHorizontalBox* CollectionTotals;                                           // 0x0218 (size: 0x8)
    class UUI_FlightIcon_C* Completed001;                                             // 0x0220 (size: 0x8)
    class UUI_FlightIcon_C* Completed002;                                             // 0x0228 (size: 0x8)
    class UUI_FlightIcon_C* Completed003;                                             // 0x0230 (size: 0x8)
    class UUI_FlightIcon_C* Completed004;                                             // 0x0238 (size: 0x8)
    class UUI_FlightIcon_C* UI_Completed_001;                                         // 0x0240 (size: 0x8)
    class UUI_FlightIcon_C* UI_Completed_002;                                         // 0x0248 (size: 0x8)
    class UUI_FlightIcon_C* UI_Completed_003;                                         // 0x0250 (size: 0x8)
    class UUI_FlightIcon_C* UI_Completed_004;                                         // 0x0258 (size: 0x8)
    int32 collected count;                                                            // 0x0260 (size: 0x4)

    void collect icon by type(EFlightLevelTargetType Type);
    void set next collected(EFlightLevelTargetType Type);
    void reset all in one();
    void anim finished();
    void ExecuteUbergraph_UI_FlightScreen_AllInOne(int32 EntryPoint);
}; // Size: 0x264

#endif
