#ifndef UE4SS_SDK_UI_Letterbox_HPP
#define UE4SS_SDK_UI_Letterbox_HPP

class UUI_Letterbox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UImage* BlackBarBottom;                                                     // 0x0220 (size: 0x8)
    class UImage* BlackBarTop;                                                        // 0x0228 (size: 0x8)
    bool Active;                                                                      // 0x0230 (size: 0x1)

    void Construct();
    void Close();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Destruct();
    void ExecuteUbergraph_UI_Letterbox(int32 EntryPoint);
}; // Size: 0x231

#endif
