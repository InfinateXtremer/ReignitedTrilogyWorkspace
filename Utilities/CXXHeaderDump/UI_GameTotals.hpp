#ifndef UE4SS_SDK_UI_GameTotals_HPP
#define UE4SS_SDK_UI_GameTotals_HPP

class UUI_GameTotals_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UTextBlock* dragontotal;                                                    // 0x0220 (size: 0x8)
    class UHorizontalBox* EggHorizontalBox;                                           // 0x0228 (size: 0x8)
    class UOverlay* EggOverlay;                                                       // 0x0230 (size: 0x8)
    class UTextBlock* eggTotal;                                                       // 0x0238 (size: 0x8)
    class UImage* GemAnimationsRV;                                                    // 0x0240 (size: 0x8)
    class UTextBlock* GemTotal;                                                       // 0x0248 (size: 0x8)
    class UImage* Glow;                                                               // 0x0250 (size: 0x8)
    class UImage* gloweffect;                                                         // 0x0258 (size: 0x8)
    class UHorizontalBox* GreenOrbHorizontalBox;                                      // 0x0260 (size: 0x8)
    class UOverlay* GreenOrbOverlay;                                                  // 0x0268 (size: 0x8)
    class UTextBlock* GreenOrbTotal;                                                  // 0x0270 (size: 0x8)
    class UTextBlock* HealthTotal;                                                    // 0x0278 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_6;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_13;                                                           // 0x02C0 (size: 0x8)
    class UImage* Image_16;                                                           // 0x02C8 (size: 0x8)
    class UImage* Image_17;                                                           // 0x02D0 (size: 0x8)
    class UImage* Image_62;                                                           // 0x02D8 (size: 0x8)
    class UImage* Image_63;                                                           // 0x02E0 (size: 0x8)
    class UTextBlock* inventorytotalpercent;                                          // 0x02E8 (size: 0x8)
    class UHorizontalBox* StatueHorizontalBox;                                        // 0x02F0 (size: 0x8)
    class UOverlay* StatueOverlay;                                                    // 0x02F8 (size: 0x8)
    class UTextBlock* timeText;                                                       // 0x0300 (size: 0x8)
    class UImage* toplayer;                                                           // 0x0308 (size: 0x8)
    class UHorizontalBox* WhiteOrbHorizontalBox;                                      // 0x0310 (size: 0x8)
    class UOverlay* WhiteOrbOverlay;                                                  // 0x0318 (size: 0x8)
    class UTextBlock* WhiteOrbTotal;                                                  // 0x0320 (size: 0x8)
    class UObject* Controller;                                                        // 0x0328 (size: 0x8)
    int32 dragon count;                                                               // 0x0330 (size: 0x4)
    int32 egg count;                                                                  // 0x0334 (size: 0x4)
    int32 total inventory;                                                            // 0x0338 (size: 0x4)
    int32 green orb count;                                                            // 0x033C (size: 0x4)
    int32 spirit particle;                                                            // 0x0340 (size: 0x4)
    int32 sypro lives;                                                                // 0x0344 (size: 0x4)
    FText treasure count text;                                                        // 0x0348 (size: 0x18)
    FText dragon count text;                                                          // 0x0360 (size: 0x18)
    FText health total text;                                                          // 0x0378 (size: 0x18)
    FText total inventory text;                                                       // 0x0390 (size: 0x18)
    FText green orb count text;                                                       // 0x03A8 (size: 0x18)
    FText egg count text;                                                             // 0x03C0 (size: 0x18)

    int32 get total treasure count for game();
    ESlateVisibility Get_GreenOrbOverlay_Visibility_0();
    ESlateVisibility Get_WhiteOrbOverlay_Visibility_0();
    ESlateVisibility Get_StatueOverlay_Visibility_0();
    void set inventory total pct text();
    void OnLoaded_52360A884F2B4B856EB3EF8D292719A0(class UObject* Loaded);
    void Construct();
    void UI panel close(bool immediate);
    void UI panel set controller(class UObject* panel controller);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_UI_GameTotals(int32 EntryPoint);
}; // Size: 0x3D8

#endif
