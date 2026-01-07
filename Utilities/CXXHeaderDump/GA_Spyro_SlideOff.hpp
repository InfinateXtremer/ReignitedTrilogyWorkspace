#ifndef UE4SS_SDK_GA_Spyro_SlideOff_HPP
#define UE4SS_SDK_GA_Spyro_SlideOff_HPP

class UGA_Spyro_SlideOff_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    bool WillExitSlideOff;                                                            // 0x0648 (size: 0x1)
    bool WasInAir;                                                                    // 0x0649 (size: 0x1)

    void OnCancelled_01F11D7B4B29FA9B75E213931A923CC3();
    void OnInterrupted_01F11D7B4B29FA9B75E213931A923CC3();
    void OnBlendOut_01F11D7B4B29FA9B75E213931A923CC3();
    void OnCompleted_01F11D7B4B29FA9B75E213931A923CC3();
    void OnCancelled_2F439E1E402A639054AEF890C36677A5();
    void OnInterrupted_2F439E1E402A639054AEF890C36677A5();
    void OnBlendOut_2F439E1E402A639054AEF890C36677A5();
    void OnCompleted_2F439E1E402A639054AEF890C36677A5();
    void OnCancelled_2A944FA5489B7BC5D60E4390E77FFD1A();
    void OnInterrupted_2A944FA5489B7BC5D60E4390E77FFD1A();
    void OnBlendOut_2A944FA5489B7BC5D60E4390E77FFD1A();
    void OnCompleted_2A944FA5489B7BC5D60E4390E77FFD1A();
    void OnCancelled_71EEE8A44E39438A5488FDBC205DAFE2();
    void OnInterrupted_71EEE8A44E39438A5488FDBC205DAFE2();
    void OnBlendOut_71EEE8A44E39438A5488FDBC205DAFE2();
    void OnCompleted_71EEE8A44E39438A5488FDBC205DAFE2();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void PostEndAbility(bool bWasCancelled);
    void OnRoll();
    void OnBellySlide();
    void ExecuteUbergraph_GA_Spyro_SlideOff(int32 EntryPoint);
}; // Size: 0x64A

#endif
