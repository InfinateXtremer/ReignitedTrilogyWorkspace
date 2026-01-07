#ifndef UE4SS_SDK_Crane_214_HPP
#define UE4SS_SDK_Crane_214_HPP

class ACrane_214_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Crate_Dust_Puff;                           // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_WaitForPlayer;                                  // 0x0490 (size: 0x8)
    class UBP_StateComponent_C* State_Choose;                                         // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State_ReloadA;                                        // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* Target;                                               // 0x04A8 (size: 0x8)
    class UBoxComponent* PropB_Collision;                                             // 0x04B0 (size: 0x8)
    class UBoxComponent* PropA_Collision;                                             // 0x04B8 (size: 0x8)
    class UBP_StateComponent_C* State_DropB;                                          // 0x04C0 (size: 0x8)
    class UBP_StateComponent_C* State_ReloadB;                                        // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* CranePropA;                                           // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* PropB;                                                // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* PropA;                                                // 0x04E0 (size: 0x8)
    class UBP_StateComponent_C* State_DropA;                                          // 0x04E8 (size: 0x8)
    class UStaticMeshComponent* CranePropB;                                           // 0x04F0 (size: 0x8)
    class USkeletalMeshComponent* CraneMesh;                                          // 0x04F8 (size: 0x8)
    float DropObjectTimeline_NewTrack_0_D498A94842072B9D5F05189A7CB3E6F5;             // 0x0500 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DropObjectTimeline__Direction_D498A94842072B9D5F05189A7CB3E6F5; // 0x0504 (size: 0x1)
    class UTimelineComponent* DropObjectTimeline;                                     // 0x0508 (size: 0x8)
    FVector Vector_Start;                                                             // 0x0510 (size: 0xC)
    FVector Vector_End;                                                               // 0x051C (size: 0xC)
    class AActor* SpawnedTarget;                                                      // 0x0528 (size: 0x8)
    FVector Vector_Offset;                                                            // 0x0530 (size: 0xC)
    bool Barrel?;                                                                     // 0x053C (size: 0x1)

    void UserConstructionScript();
    void DropObjectTimeline__FinishedFunc();
    void DropObjectTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__State_Drop_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_ReloadB_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_DropB_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void DropObject(bool barrel);
    void BndEvt__State_Choose_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Crane_214(int32 EntryPoint);
}; // Size: 0x53D

#endif
