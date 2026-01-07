#ifndef UE4SS_SDK_UI_BossLoading_HPP
#define UE4SS_SDK_UI_BossLoading_HPP

class UUI_BossLoading_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Loop;                                                     // 0x0220 (size: 0x8)
    class UImage* BackClouds;                                                         // 0x0228 (size: 0x8)
    class UTextBlock* Base;                                                           // 0x0230 (size: 0x8)
    class UImage* Black;                                                              // 0x0238 (size: 0x8)
    class UImage* BlackBackground;                                                    // 0x0240 (size: 0x8)
    class UOverlay* Crush;                                                            // 0x0248 (size: 0x8)
    class UImage* CrushImage;                                                         // 0x0250 (size: 0x8)
    class UImage* FadeToBlack;                                                        // 0x0258 (size: 0x8)
    class UImage* FrontClouds;                                                        // 0x0260 (size: 0x8)
    class UImage* Glow;                                                               // 0x0268 (size: 0x8)
    class UOverlay* Gulp;                                                             // 0x0270 (size: 0x8)
    class UImage* GulpBackClouds;                                                     // 0x0278 (size: 0x8)
    class UImage* GulpBlack;                                                          // 0x0280 (size: 0x8)
    class UImage* GulpFrontClouds;                                                    // 0x0288 (size: 0x8)
    class UImage* GulpGlow;                                                           // 0x0290 (size: 0x8)
    class UImage* GulpImage;                                                          // 0x0298 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02B0 (size: 0x8)
    class UOverlay* Ripto;                                                            // 0x02B8 (size: 0x8)
    class UImage* RiptoBackClouds;                                                    // 0x02C0 (size: 0x8)
    class UImage* RiptoBlack;                                                         // 0x02C8 (size: 0x8)
    class UImage* RiptoFrontClouds;                                                   // 0x02D0 (size: 0x8)
    class UImage* RiptoGlow;                                                          // 0x02D8 (size: 0x8)
    class UImage* RiptoImage;                                                         // 0x02E0 (size: 0x8)
    class UTextBlock* Shadow;                                                         // 0x02E8 (size: 0x8)
    class UImage* WeaponGlowLeft;                                                     // 0x02F0 (size: 0x8)
    class UImage* WeaponGlowRight;                                                    // 0x02F8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0300 (size: 0x8)
    TMap<FString, int32> boss level image key map;                                    // 0x0308 (size: 0x50)
    TMap<class FString, class FString> boss level name key map;                       // 0x0358 (size: 0x50)
    FString Label;                                                                    // 0x03A8 (size: 0x10)
    float fade out time;                                                              // 0x03B8 (size: 0x4)
    TEnumAsByte<ELevelTransitionType::Type> transition;                               // 0x03BC (size: 0x1)
    TMap<TEnumAsByte<ELevelTransitionType::Type>, FString> transition level key map;  // 0x03C0 (size: 0x50)
    FString level name;                                                               // 0x0410 (size: 0x10)
    bool Defeated;                                                                    // 0x0420 (size: 0x1)
    FText defeated_text;                                                              // 0x0428 (size: 0x18)

    void outro finished();
    void hide transition screen(float fade time);
    void set transition type(TEnumAsByte<ELevelTransitionType::Type> transition type, float fade in time, float fade out time);
    void intro anim done();
    void Construct();
    void ExecuteUbergraph_UI_BossLoading(int32 EntryPoint);
}; // Size: 0x440

#endif
