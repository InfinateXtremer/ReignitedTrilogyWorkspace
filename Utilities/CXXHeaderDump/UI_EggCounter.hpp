#ifndef UE4SS_SDK_UI_EggCounter_HPP
#define UE4SS_SDK_UI_EggCounter_HPP

class UUI_EggCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UUI_EggCollected_C* 001;                                                    // 0x0220 (size: 0x8)
    class UUI_EggCollected_C* 002;                                                    // 0x0228 (size: 0x8)
    class UUI_EggCollected_C* 003;                                                    // 0x0230 (size: 0x8)
    class UUI_EggCollected_C* 004;                                                    // 0x0238 (size: 0x8)
    class UUI_EggCollected_C* 005;                                                    // 0x0240 (size: 0x8)
    class UUI_EggCollected_C* 006;                                                    // 0x0248 (size: 0x8)
    class UUI_EggCollected_C* 007;                                                    // 0x0250 (size: 0x8)
    class UUI_EggCollected_C* 008;                                                    // 0x0258 (size: 0x8)
    class UUI_EggCollected_C* 009;                                                    // 0x0260 (size: 0x8)
    class UUI_EggCollected_C* 010;                                                    // 0x0268 (size: 0x8)
    class UUI_EggCollected_C* 011;                                                    // 0x0270 (size: 0x8)
    class UUI_EggCollected_C* 012;                                                    // 0x0278 (size: 0x8)
    class UHorizontalBox* HorizontalBoxEGG;                                           // 0x0280 (size: 0x8)
    class UHorizontalBox* HorizontalBoxOutline;                                       // 0x0288 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_6;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_9;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_10;                                                           // 0x02E0 (size: 0x8)
    class UImage* Image_11;                                                           // 0x02E8 (size: 0x8)
    int32 egg count;                                                                  // 0x02F0 (size: 0x4)
    int32 total eggs;                                                                 // 0x02F4 (size: 0x4)

    FLinearColor GetColorAndOpacity_0();
    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_UI_EggCounter(int32 EntryPoint);
}; // Size: 0x2F8

#endif
