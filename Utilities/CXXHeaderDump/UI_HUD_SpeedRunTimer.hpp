#ifndef UE4SS_SDK_UI_HUD_SpeedRunTimer_HPP
#define UE4SS_SDK_UI_HUD_SpeedRunTimer_HPP

class UUI_HUD_SpeedRunTimer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UUI_HUD_Timer_C* UI_HUD_Timer;                                              // 0x0220 (size: 0x8)

    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_HUD_SpeedRunTimer(int32 EntryPoint);
}; // Size: 0x228

#endif
