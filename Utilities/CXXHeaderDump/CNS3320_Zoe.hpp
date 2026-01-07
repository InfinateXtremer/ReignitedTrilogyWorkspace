#ifndef UE4SS_SDK_CNS3320_Zoe_HPP
#define UE4SS_SDK_CNS3320_Zoe_HPP

class ACNS3320_Zoe_C : public ABP_Base_Character_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0830 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0838 (size: 0x8)
    class UParticleSystemComponent* PS_SaveFairyZoeS3_glow;                           // 0x0840 (size: 0x8)
    class UParticleSystemComponent* Sparkle;                                          // 0x0848 (size: 0x8)
    class UZoeActions* ZoeActions;                                                    // 0x0850 (size: 0x8)
    class USkeletalMeshComponent* Wand;                                               // 0x0858 (size: 0x8)
    class USP3_CharacterComponent* SP3_Character;                                     // 0x0860 (size: 0x8)
    class UAkAudioEvent* AudioBankSetupHelper;                                        // 0x0868 (size: 0x8)
    FName ZoeState;                                                                   // 0x0870 (size: 0x8)

    bool IsImmuneToDamage(const FGameplayTagContainer& InTagContainer, class UPrimitiveComponent* HitComponent);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void OnNotifyEnd_3E5CDFB84BB42BDDCC88A6AFC548C550(FName NotifyName);
    void OnNotifyBegin_3E5CDFB84BB42BDDCC88A6AFC548C550(FName NotifyName);
    void OnInterrupted_3E5CDFB84BB42BDDCC88A6AFC548C550(FName NotifyName);
    void OnBlendOut_3E5CDFB84BB42BDDCC88A6AFC548C550(FName NotifyName);
    void OnCompleted_3E5CDFB84BB42BDDCC88A6AFC548C550(FName NotifyName);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__ZoeActions_K2Node_ComponentBoundEvent_0_ZoeAction__DelegateSignature();
    void BndEvt__ZoeActions_K2Node_ComponentBoundEvent_1_ZoeAction__DelegateSignature();
    void BndEvt__ZoeActions_K2Node_ComponentBoundEvent_2_ZoeAction__DelegateSignature();
    void BndEvt__ZoeActions_K2Node_ComponentBoundEvent_3_ZoeLatentAction__DelegateSignature(class UQuestActionsComponent* Actions);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void PlayMontage();
    void ExecuteUbergraph_CNS3320_Zoe(int32 EntryPoint);
}; // Size: 0x878

#endif
