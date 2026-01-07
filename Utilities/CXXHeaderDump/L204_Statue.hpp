#ifndef UE4SS_SDK_L204_Statue_HPP
#define UE4SS_SDK_L204_Statue_HPP

class AL204_Statue_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0488 (size: 0x8)
    class UParticleSystemComponent* P_VFX_LS204_Evil_Statue_Swap;                     // 0x0490 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS204_Evil_Statue_Idle;                    // 0x0498 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x04A0 (size: 0x8)
    class UBP_StateComponent_C* State_Hit;                                            // 0x04A8 (size: 0x8)
    class UBP_StateComponent_C* State_Possessed;                                      // 0x04B0 (size: 0x8)
    float Timeline_1_NewTrack_0_F4E2F8F543E8037C04C12E8BA4E9946D;                     // 0x04B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_F4E2F8F543E8037C04C12E8BA4E9946D; // 0x04BC (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04C0 (size: 0x8)
    class AActor* SpiritActor;                                                        // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* AngryMesh;                                            // 0x04D0 (size: 0x8)
    FColor EmissiveColor;                                                             // 0x04D8 (size: 0x4)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void BndEvt__State: Possessed_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: Possessed_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void TransitionSequence();
    void ExecuteUbergraph_L204_Statue(int32 EntryPoint);
}; // Size: 0x4DC

#endif
