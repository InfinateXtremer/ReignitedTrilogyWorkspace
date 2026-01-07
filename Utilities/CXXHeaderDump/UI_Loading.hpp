#ifndef UE4SS_SDK_UI_Loading_HPP
#define UE4SS_SDK_UI_Loading_HPP

class UUI_Loading_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UImage* LoopingIcon;                                                        // 0x0220 (size: 0x8)
    class UImage* LoopingIconBlack;                                                   // 0x0228 (size: 0x8)
    bool is closed;                                                                   // 0x0230 (size: 0x1)
    bool close requested;                                                             // 0x0231 (size: 0x1)
    float ticks;                                                                      // 0x0234 (size: 0x4)
    float minTicks;                                                                   // 0x0238 (size: 0x4)
    bool intro finished;                                                              // 0x023C (size: 0x1)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void request close();
    void Destruct();
    void reset time();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_UI_Loading(int32 EntryPoint);
}; // Size: 0x23D

#endif
