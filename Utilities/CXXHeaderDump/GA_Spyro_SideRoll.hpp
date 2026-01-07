#ifndef UE4SS_SDK_GA_Spyro_SideRoll_HPP
#define UE4SS_SDK_GA_Spyro_SideRoll_HPP

class UGA_Spyro_SideRoll_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    FActiveGameplayEffectHandle SideRollGameplayEffect;                               // 0x0648 (size: 0x8)
    float SideRollDirection;                                                          // 0x0650 (size: 0x4)
    bool IsSideRollPressed;                                                           // 0x0654 (size: 0x1)
    class UParticleSystemComponent* SideRollLoopingEffect;                            // 0x0658 (size: 0x8)

    void OnFinish_17FE03E140214E6E96AB1AA354028DE3();
    void OnFinish_D7FBA1A14F5373436E1A2288FD39CB4A();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void PostEndAbility(bool bWasCancelled);
    void ExecuteUbergraph_GA_Spyro_SideRoll(int32 EntryPoint);
}; // Size: 0x660

#endif
