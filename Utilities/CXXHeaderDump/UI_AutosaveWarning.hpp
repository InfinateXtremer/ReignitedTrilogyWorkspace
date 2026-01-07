#ifndef UE4SS_SDK_UI_AutosaveWarning_HPP
#define UE4SS_SDK_UI_AutosaveWarning_HPP

class UUI_AutosaveWarning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UTextBlock* Base;                                                           // 0x0220 (size: 0x8)
    class UImage* BlackBackground;                                                    // 0x0228 (size: 0x8)
    class UImage* FadeToBlack;                                                        // 0x0230 (size: 0x8)
    class UTextBlock* Shadow;                                                         // 0x0238 (size: 0x8)
    class UUI_Loading_C* UI_Loading;                                                  // 0x0240 (size: 0x8)
    FText warning text;                                                               // 0x0248 (size: 0x18)
    bool outro finished;                                                              // 0x0260 (size: 0x1)
    bool outro played;                                                                // 0x0261 (size: 0x1)
    bool intro finished;                                                              // 0x0262 (size: 0x1)
    float display time;                                                               // 0x0264 (size: 0x4)

    void Construct();
    void play outro();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_AutosaveWarning(int32 EntryPoint);
}; // Size: 0x268

#endif
