#ifndef UE4SS_SDK_111_Gate_HPP
#define UE4SS_SDK_111_Gate_HPP

class A111_Gate_C : public A105_Gate_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0528 (size: 0x8)
    class UStaticMeshComponent* FakeRing;                                             // 0x0530 (size: 0x8)
    class UTfbAkComponent* TfbAk_0;                                                   // 0x0538 (size: 0x8)
    float Timeline_0_0_Rotation_6DEFAFEF41F7B08456BFD78E26996EEE;                     // 0x0540 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_6DEFAFEF41F7B08456BFD78E26996EEE; // 0x0544 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0548 (size: 0x8)
    FVector NewVar_0_0;                                                               // 0x0550 (size: 0xC)
    float yVal;                                                                       // 0x055C (size: 0x4)
    class UParticleSystem* Ring Particle;                                             // 0x0560 (size: 0x8)
    class UParticleSystem* Ring Particle Destroyed;                                   // 0x0568 (size: 0x8)
    class UParticleSystemComponent* LocalParticle;                                    // 0x0570 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void BndEvt__State_Death2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void MissionEnd(bool Success, bool LevelEnd);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_111_Gate(int32 EntryPoint);
}; // Size: 0x578

#endif
