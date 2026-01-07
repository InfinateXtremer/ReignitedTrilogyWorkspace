#ifndef UE4SS_SDK_Banner_HPP
#define UE4SS_SDK_Banner_HPP

class ABanner_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0488 (size: 0x8)
    class UStaticMeshComponent* Mesh_Topper;                                          // 0x0490 (size: 0x8)
    class UStaticMeshComponent* Mesh_Banner;                                          // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State_Flamed;                                         // 0x04A0 (size: 0x8)
    float Timeline_0_0_Rotation_B7E63A2B48C33D8DC875EEB8CBDEC023;                     // 0x04A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_B7E63A2B48C33D8DC875EEB8CBDEC023; // 0x04AC (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x04B0 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__State_Flamed_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void PlayreReady();
    void ExecuteUbergraph_Banner(int32 EntryPoint);
}; // Size: 0x4B8

#endif
