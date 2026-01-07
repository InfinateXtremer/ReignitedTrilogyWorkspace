#ifndef UE4SS_SDK_IBossBar_HPP
#define UE4SS_SDK_IBossBar_HPP

class IIBossBar_C : public IInterface
{

    void Hud - Boss Bar - Heal(int32 Count);
    void Hud - Boss Bar - Damage(int32 Count);
    void Hud - Boss Bar - Hide();
    void Hud - Boss Bar - Show(int32 hit count, FString Boss);
}; // Size: 0x28

#endif
