#ifndef UE4SS_SDK_GA_Spyro_Death_HPP
#define UE4SS_SDK_GA_Spyro_Death_HPP

class UGA_Spyro_Death_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    float DEFAULT_RESPAWN_DELAY;                                                      // 0x0648 (size: 0x4)
    float FALLTODEATH_DELAY;                                                          // 0x064C (size: 0x4)
    FGameplayTagContainer InstigatorTags;                                             // 0x0650 (size: 0x20)
    class AActor* Instigator;                                                         // 0x0670 (size: 0x8)
    float DEATH_ANIM_EATEN_DELAY;                                                     // 0x0678 (size: 0x4)
    float DeathAnimDelay;                                                             // 0x067C (size: 0x4)
    float DEATH_ANIM_DEFAULT_DELAY;                                                   // 0x0680 (size: 0x4)
    float DEATH_ANIM_TORNADO_DELAY;                                                   // 0x0684 (size: 0x4)
    float DEATH_ANIM_KNOCKBACKSHORT_DELAY;                                            // 0x0688 (size: 0x4)

    void GetDefaultDeathMontage(class UAnimMontage*& AnimMontage);
    class UAnimMontage* GetPlankDeathMontage();
    void OnCancelled_A788D7F04C136E46BBE188B64C982B70();
    void OnInterrupted_A788D7F04C136E46BBE188B64C982B70();
    void OnBlendOut_A788D7F04C136E46BBE188B64C982B70();
    void OnCompleted_A788D7F04C136E46BBE188B64C982B70();
    void OnFinish_809E15CD4BB1EFA36A43078F6FE6E393();
    void OnCancelled_EE7AB1934F632DC1E7194E8647FD806A();
    void OnInterrupted_EE7AB1934F632DC1E7194E8647FD806A();
    void OnBlendOut_EE7AB1934F632DC1E7194E8647FD806A();
    void OnCompleted_EE7AB1934F632DC1E7194E8647FD806A();
    void OnCancelled_C9A29DA54119A309FE29DFB27076184B();
    void OnInterrupted_C9A29DA54119A309FE29DFB27076184B();
    void OnBlendOut_C9A29DA54119A309FE29DFB27076184B();
    void OnCompleted_C9A29DA54119A309FE29DFB27076184B();
    void OnFinish_B789526846DC39EE2244D2B333C0B2D4();
    void OnFinish_897F60F649F7C8C775434DB00F85416C();
    void OnTimedOutAndDestinationReached_EC10809A467668D02BFC6CBF1E70D6ED();
    void OnTimedOut_EC10809A467668D02BFC6CBF1E70D6ED();
    void OnNotifyEnd_89446C8843F0BCA1A5E8B7936B64AEFC(FName NotifyName);
    void OnNotifyBegin_89446C8843F0BCA1A5E8B7936B64AEFC(FName NotifyName);
    void OnInterrupted_89446C8843F0BCA1A5E8B7936B64AEFC(FName NotifyName);
    void OnBlendOut_89446C8843F0BCA1A5E8B7936B64AEFC(FName NotifyName);
    void OnCompleted_89446C8843F0BCA1A5E8B7936B64AEFC(FName NotifyName);
    void OnFinish_FA2AEB2A4FCE07DF0FDCFA8E3D1B503D();
    void OnCancelled_F739CB9945319660BA3C50B978695632();
    void OnInterrupted_F739CB9945319660BA3C50B978695632();
    void OnBlendOut_F739CB9945319660BA3C50B978695632();
    void OnCompleted_F739CB9945319660BA3C50B978695632();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void OnFallToDeath();
    void StartRespawnSequence(float Delay);
    void OnDefaultDeath();
    void OnSharkDeath();
    void OnFlattenDeath();
    void OnPlankDeath();
    void OnDrownDeath();
    void OnEatenDeath();
    void MoveCharaterIfGeo(FVector DirectionToCheck, FVector DirectionToMove);
    void OnTornadoDeath();
    void OnSlapDeath();
    void OnKnockbackShortDeath();
    void OnBlinkDeath();
    void OnAcidDeath();
    void ExecuteUbergraph_GA_Spyro_Death(int32 EntryPoint);
}; // Size: 0x68C

#endif
