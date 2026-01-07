#ifndef UE4SS_SDK_UI_Key_HPP
#define UE4SS_SDK_UI_Key_HPP

class UUI_Key_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Loop;                                                     // 0x0220 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0228 (size: 0x8)
    class UImage* Key;                                                                // 0x0230 (size: 0x8)
    class UImage* Pulse;                                                              // 0x0238 (size: 0x8)
    class UImage* Shadow;                                                             // 0x0240 (size: 0x8)
    class UImage* Sparkle;                                                            // 0x0248 (size: 0x8)
    bool Deactivated;                                                                 // 0x0250 (size: 0x1)

    void adjust hud position(EFalconHudWidgetPosition hud pos);
    void UI panel close(bool immediate);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Construct();
    void UI panel set controller(class UObject* panel controller);
    void Destruct();
    void Hud - Key - Hide();
    void Hud - Key - Show(EFalconHudWidgetPosition Pos);
    void ExecuteUbergraph_UI_Key(int32 EntryPoint);
}; // Size: 0x251

#endif
