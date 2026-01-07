#ifndef UE4SS_SDK_GA_Spyro_SlideDown_HPP
#define UE4SS_SDK_GA_Spyro_SlideDown_HPP

class UGA_Spyro_SlideDown_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    int32 CameraSettings;                                                             // 0x0648 (size: 0x4)
    class UParticleSystemComponent* SlideTrail;                                       // 0x0650 (size: 0x8)
    class UParticleSystemComponent* CameraWindLines;                                  // 0x0658 (size: 0x8)

    void OnCancelled_37E58173405E8C44464B7C83D0D5C059();
    void OnInterrupted_37E58173405E8C44464B7C83D0D5C059();
    void OnBlendOut_37E58173405E8C44464B7C83D0D5C059();
    void OnCompleted_37E58173405E8C44464B7C83D0D5C059();
    void PostEndAbility(bool bWasCancelled);
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void ExecuteUbergraph_GA_Spyro_SlideDown(int32 EntryPoint);
}; // Size: 0x660

#endif
