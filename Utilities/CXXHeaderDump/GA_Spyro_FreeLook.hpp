#ifndef UE4SS_SDK_GA_Spyro_FreeLook_HPP
#define UE4SS_SDK_GA_Spyro_FreeLook_HPP

class UGA_Spyro_FreeLook_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    class AActor* CustomCameraActor;                                                  // 0x0648 (size: 0x8)
    class AActor* DefaultCameraActor;                                                 // 0x0650 (size: 0x8)
    float FreeLookStartDelay;                                                         // 0x0658 (size: 0x4)
    int32 CamSettings;                                                                // 0x065C (size: 0x4)
    FActiveGameplayEffectHandle DisableFaceBottom;                                    // 0x0660 (size: 0x8)

    void AutoCenter();
    void Added_2E19F86C478DEAD50D7275B11274D028();
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void PostEndAbility(bool bWasCancelled);
    void SetUpUserInterface(bool SpitItemVisible, bool StandardVisible);
    void PostCamTransition(class UFollowCameraComponent* Camera);
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void ExecuteUbergraph_GA_Spyro_FreeLook(int32 EntryPoint);
}; // Size: 0x668

#endif
