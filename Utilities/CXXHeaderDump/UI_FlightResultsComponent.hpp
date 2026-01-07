#ifndef UE4SS_SDK_UI_FlightResultsComponent_HPP
#define UE4SS_SDK_UI_FlightResultsComponent_HPP

class UUI_FlightResultsComponent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UTextBlock* CollectableItem;                                                // 0x0210 (size: 0x8)
    class UTextBlock* CollectableItemShadow;                                          // 0x0218 (size: 0x8)
    class UTextBlock* GemCount;                                                       // 0x0220 (size: 0x8)
    class UTextBlock* GemCountShadow;                                                 // 0x0228 (size: 0x8)
    class UOverlay* Overlay_127;                                                      // 0x0230 (size: 0x8)
    class UTextBlock* targetCount;                                                    // 0x0238 (size: 0x8)
    class UTextBlock* targetCountshadow;                                              // 0x0240 (size: 0x8)
    class UUI_FlightIcon_C* UI_FlightIcon;                                            // 0x0248 (size: 0x8)
    class UUI_HUD_Checkmark_C* UI_HUD_Checkmark;                                      // 0x0250 (size: 0x8)
    FText Name;                                                                       // 0x0258 (size: 0x18)
    bool Icon Visibility;                                                             // 0x0270 (size: 0x1)
    FText Counter;                                                                    // 0x0278 (size: 0x18)
    EFlightLevelTargetType target type;                                               // 0x0290 (size: 0x1)
    EInventoryType reward type;                                                       // 0x0291 (size: 0x1)

    void set target name();
    void set reward(bool awarded previously, int32 Count);
    void set count text(int32 Count);
    void set icon();
    FLinearColor Shadow Color();
    ESlateVisibility Get_IconOverlay_Visibility_0();
    void set result(FFlightResult Result, EInventoryType reward);
    void set all in one(int32 Count);
    void ExecuteUbergraph_UI_FlightResultsComponent(int32 EntryPoint);
}; // Size: 0x292

#endif
