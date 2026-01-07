#ifndef UE4SS_SDK_GA_Spyro_IceSkating_HPP
#define UE4SS_SDK_GA_Spyro_IceSkating_HPP

class UGA_Spyro_IceSkating_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)

    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void PostEndAbility(bool bWasCancelled);
    void ExecuteUbergraph_GA_Spyro_IceSkating(int32 EntryPoint);
}; // Size: 0x648

#endif
