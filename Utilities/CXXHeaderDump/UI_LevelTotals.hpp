#ifndef UE4SS_SDK_UI_LevelTotals_HPP
#define UE4SS_SDK_UI_LevelTotals_HPP

class UUI_LevelTotals_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UTextBlock* dragontotal;                                                    // 0x0220 (size: 0x8)
    class UHorizontalBox* EggHorizontalBox;                                           // 0x0228 (size: 0x8)
    class UTextBlock* eggTotal;                                                       // 0x0230 (size: 0x8)
    class UImage* GemAnimationsRV;                                                    // 0x0238 (size: 0x8)
    class UHorizontalBox* GemHorizontalBox;                                           // 0x0240 (size: 0x8)
    class UTextBlock* GemTotal;                                                       // 0x0248 (size: 0x8)
    class UImage* gloweffect;                                                         // 0x0250 (size: 0x8)
    class UOverlay* GreenOrbOverlay;                                                  // 0x0258 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0260 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0268 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_16;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_17;                                                           // 0x0290 (size: 0x8)
    class UImage* Image_62;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_63;                                                           // 0x02A0 (size: 0x8)
    class UTextBlock* LevelNameText;                                                  // 0x02A8 (size: 0x8)
    class UTextBlock* LevelNameTextShadow;                                            // 0x02B0 (size: 0x8)
    class UHorizontalBox* StatueHorizontalBox;                                        // 0x02B8 (size: 0x8)
    class UOverlay* StatueOverlay;                                                    // 0x02C0 (size: 0x8)
    class UImage* toplayer;                                                           // 0x02C8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x02D0 (size: 0x8)
    FText egg count text;                                                             // 0x02D8 (size: 0x18)
    FText gem count;                                                                  // 0x02F0 (size: 0x18)
    FText special collectible count;                                                  // 0x0308 (size: 0x18)
    EInventoryType special collectible type;                                          // 0x0320 (size: 0x1)
    bool do debug print;                                                              // 0x0321 (size: 0x1)
    int32 game index;                                                                 // 0x0324 (size: 0x4)
    EInventoryType egg type;                                                          // 0x0328 (size: 0x1)

    FLinearColor Shadow Color();
    void Init Display Data();
    void OnLoaded_2097F71E426380D6DF3C768A4D3DD4DE(class UObject* Loaded);
    void UI panel set controller(class UObject* panel controller);
    void Construct();
    void UI panel close(bool immediate);
    void ExecuteUbergraph_UI_LevelTotals(int32 EntryPoint);
}; // Size: 0x329

#endif
