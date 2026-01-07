#ifndef UE4SS_SDK_UI_HUD_HealthOrb_HPP
#define UE4SS_SDK_UI_HUD_HealthOrb_HPP

class UUI_HUD_HealthOrb_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Orb Acquired;                                             // 0x0210 (size: 0x8)
    class UImage* Glow;                                                               // 0x0218 (size: 0x8)
    class UImage* HL;                                                                 // 0x0220 (size: 0x8)
    class UImage* orb;                                                                // 0x0228 (size: 0x8)

    void play acquired anim();
    void ExecuteUbergraph_UI_HUD_HealthOrb(int32 EntryPoint);
}; // Size: 0x230

#endif
