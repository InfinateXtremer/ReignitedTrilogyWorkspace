#ifndef UE4SS_SDK_BP_CES1070_TNTBarrel_HPP
#define UE4SS_SDK_BP_CES1070_TNTBarrel_HPP

class ABP_CES1070_TNTBarrel_C : public ABP_Barrel_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0598 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x05A0 (size: 0x8)
    float Timeline_0_0_Scale_Z_205D6A42476534F704C7F48BD5B7A29A;                      // 0x05A8 (size: 0x4)
    float Timeline_0_0_Emissive_205D6A42476534F704C7F48BD5B7A29A;                     // 0x05AC (size: 0x4)
    float Timeline_0_0_Scale_XY_205D6A42476534F704C7F48BD5B7A29A;                     // 0x05B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_205D6A42476534F704C7F48BD5B7A29A; // 0x05B4 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x05B8 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void BndEvt__FalconLevelActorState_Launch_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconLevelActorState_Rolling_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconLevelActorState_Rolling_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconLevelActorState_Boom_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void OnSpawnFromPool();
    void ReceiveOnReleaseToPool();
    void ExecuteUbergraph_BP_CES1070_TNTBarrel(int32 EntryPoint);
}; // Size: 0x5C0

#endif
