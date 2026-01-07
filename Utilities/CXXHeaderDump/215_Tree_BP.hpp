#ifndef UE4SS_SDK_215_Tree_BP_HPP
#define UE4SS_SDK_215_Tree_BP_HPP

class A215_Tree_BP_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0488 (size: 0x8)
    class USceneComponent* CoconutSpawn;                                              // 0x0490 (size: 0x8)
    class UBP_StateComponent_C* State_Hit;                                            // 0x0498 (size: 0x8)
    float Timeline_0_0_NewTrack_0_B1E1021C49FA6C67B7D1218BDD082B2F;                   // 0x04A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_B1E1021C49FA6C67B7D1218BDD082B2F; // 0x04A4 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x04A8 (size: 0x8)
    class AActor* HunterRef;                                                          // 0x04B0 (size: 0x8)
    bool HunterInPlace;                                                               // 0x04B8 (size: 0x1)
    bool MonkeyCaptured;                                                              // 0x04B9 (size: 0x1)
    bool CoconutTree;                                                                 // 0x04BA (size: 0x1)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void BndEvt__State_Hit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__HunterCollision_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__HunterCollision_K2Node_ComponentBoundEvent_21_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void DropCoconut();
    void ExecuteUbergraph_215_Tree_BP(int32 EntryPoint);
}; // Size: 0x4BB

#endif
