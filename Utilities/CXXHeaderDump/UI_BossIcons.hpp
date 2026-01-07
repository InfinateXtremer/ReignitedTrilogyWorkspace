#ifndef UE4SS_SDK_UI_BossIcons_HPP
#define UE4SS_SDK_UI_BossIcons_HPP

class UUI_BossIcons_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Heal;                                                     // 0x0210 (size: 0x8)
    class UWidgetAnimation* TakeDamage;                                               // 0x0218 (size: 0x8)
    class UImage* DamageGlow;                                                         // 0x0220 (size: 0x8)
    class UImage* HealEffect;                                                         // 0x0228 (size: 0x8)
    class UImage* Icon;                                                               // 0x0230 (size: 0x8)
    class UImage* Shadow;                                                             // 0x0238 (size: 0x8)

    void set boss icon(FName boss name);
    void show damage();
    void show heal();
    void ExecuteUbergraph_UI_BossIcons(int32 EntryPoint);
}; // Size: 0x240

#endif
