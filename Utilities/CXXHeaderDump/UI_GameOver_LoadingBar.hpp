#ifndef UE4SS_SDK_UI_GameOver_LoadingBar_HPP
#define UE4SS_SDK_UI_GameOver_LoadingBar_HPP

class UUI_GameOver_LoadingBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Loop;                                                     // 0x0218 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0220 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0228 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0230 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_UI_GameOver_LoadingBar(int32 EntryPoint);
}; // Size: 0x238

#endif
