#ifndef UE4SS_SDK_209_Arch_HPP
#define UE4SS_SDK_209_Arch_HPP

class A209_Arch_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0488 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0490 (size: 0x8)
    class UPortalNameComponent_C* PortalNameComponent;                                // 0x0498 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x04A0 (size: 0x8)
    class UDestructibleComponent* SM_SH_Flight_Gate_S2_DM;                            // 0x04A8 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x04B0 (size: 0x8)
    class UParticleSystemComponent* PS_S2Arch_ElectiricRings;                         // 0x04B8 (size: 0x8)
    class UBP_StateComponent_C* State_Death2;                                         // 0x04C0 (size: 0x8)
    class UBoxComponent* Box_Trigger;                                                 // 0x04C8 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x04D0 (size: 0x8)
    FVector CapsuleLoc;                                                               // 0x04D8 (size: 0xC)
    float yVal;                                                                       // 0x04E4 (size: 0x4)
    bool Player_In_Capsule;                                                           // 0x04E8 (size: 0x1)
    TArray<class AActor*> ExtraCollision;                                             // 0x04F0 (size: 0x10)

    void UserConstructionScript();
    void BndEvt__Box_Trigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void TurnNumbers();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ExecuteUbergraph_209_Arch(int32 EntryPoint);
}; // Size: 0x500

#endif
