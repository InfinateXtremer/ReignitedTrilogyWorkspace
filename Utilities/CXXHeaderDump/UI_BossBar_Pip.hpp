#ifndef UE4SS_SDK_UI_BossBar_Pip_HPP
#define UE4SS_SDK_UI_BossBar_Pip_HPP

class UUI_BossBar_Pip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* HealPIP;                                                  // 0x0210 (size: 0x8)
    class UWidgetAnimation* TakeDamage;                                               // 0x0218 (size: 0x8)
    class UImage* Glow;                                                               // 0x0220 (size: 0x8)
    class UImage* pip;                                                                // 0x0228 (size: 0x8)

    void OnLoaded_C4A727EA4CED48C0D3F0779F22BEEFEC(class UObject* Loaded);
    void Construct();
    void Take Damage();
    void Heal();
    void ExecuteUbergraph_UI_BossBar_Pip(int32 EntryPoint);
}; // Size: 0x230

#endif
