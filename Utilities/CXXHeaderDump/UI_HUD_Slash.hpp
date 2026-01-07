#ifndef UE4SS_SDK_UI_HUD_Slash_HPP
#define UE4SS_SDK_UI_HUD_Slash_HPP

class UUI_HUD_Slash_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* NumberChange;                                             // 0x0210 (size: 0x8)
    class UImage* 0;                                                                  // 0x0218 (size: 0x8)
    class UOverlay* 000;                                                              // 0x0220 (size: 0x8)
    class UImage* 0Depth;                                                             // 0x0228 (size: 0x8)
    class UImage* 0Glow;                                                              // 0x0230 (size: 0x8)
    class UImage* 0Shadow;                                                            // 0x0238 (size: 0x8)
    class UImage* 0Stroke;                                                            // 0x0240 (size: 0x8)
    class UImage* 0StrokeShadow;                                                      // 0x0248 (size: 0x8)
    TArray<class UOverlay*> Overlays;                                                 // 0x0250 (size: 0x10)

    void play change anim();
    void ExecuteUbergraph_UI_HUD_Slash(int32 EntryPoint);
}; // Size: 0x260

#endif
