#ifndef UE4SS_SDK_UI_Reticle_001_HPP
#define UE4SS_SDK_UI_Reticle_001_HPP

class UUI_Reticle_001_C : public USP3_ReticleWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0218 (size: 0x8)
    class UWidgetAnimation* Fire;                                                     // 0x0220 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0228 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0230 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0238 (size: 0x8)
    class UCanvasPanel* CanvasPanel_1;                                                // 0x0240 (size: 0x8)
    class UImage* Center;                                                             // 0x0248 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0250 (size: 0x8)
    class UImage* Outer;                                                              // 0x0258 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0260 (size: 0x8)
    bool QueueDestroy;                                                                // 0x0268 (size: 0x1)

    void Hud Reticle - Show();
    void Construct();
    void Hud Reticle - Fire();
    void Hud Reticle - Hide();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Hud Reticle - MoveTo(FVector2D new position, bool Lerp, float lerp seconds);
    void OnSetOffset(const FVector2D& Offset);
    void OnFire();
    void ExecuteUbergraph_UI_Reticle_001(int32 EntryPoint);
}; // Size: 0x269

#endif
