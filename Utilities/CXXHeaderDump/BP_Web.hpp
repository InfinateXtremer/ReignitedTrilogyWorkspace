#ifndef UE4SS_SDK_BP_Web_HPP
#define UE4SS_SDK_BP_Web_HPP

class ABP_Web_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class USceneComponent* AttachPoint;                                               // 0x0450 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0458 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0460 (size: 0x8)
    class UBP_StateComponent_C* State_MovingUpAndDown;                                // 0x0468 (size: 0x8)
    class UBP_StateComponent_C* State_DropDownShort;                                  // 0x0470 (size: 0x8)
    class UBP_StateComponent_C* State_DropDown;                                       // 0x0478 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* State_Swing;                                          // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_FakeDeath;                                      // 0x0490 (size: 0x8)
    float Timeline_1_NewTrack_0_327BADEB4060B4A7B439EEBF14F98C32;                     // 0x0498 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_327BADEB4060B4A7B439EEBF14F98C32; // 0x049C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04A0 (size: 0x8)
    bool IsUpDownWeb;                                                                 // 0x04A8 (size: 0x1)
    FVector InitialLocation;                                                          // 0x04AC (size: 0xC)
    FRotator InitialRotation;                                                         // 0x04B8 (size: 0xC)
    bool Print;                                                                       // 0x04C4 (size: 0x1)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__State_DropDown_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Swing_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_DropDownShort_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FakeDeath_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void BndEvt__State_MovingUpAndDown_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_Web(int32 EntryPoint);
}; // Size: 0x4C5

#endif
