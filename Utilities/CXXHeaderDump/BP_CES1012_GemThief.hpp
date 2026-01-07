#ifndef UE4SS_SDK_BP_CES1012_GemThief_HPP
#define UE4SS_SDK_BP_CES1012_GemThief_HPP

class ABP_CES1012_GemThief_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UBP_LootOptions_Component_C* BP_LootOptions_Component;                      // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee_TempImmun;                // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* Gem;                                                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Hit2;                          // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Hit1;                          // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Cautious;                      // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Alert;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee;                          // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A40 (size: 0x8)
    float Timeline_1_Speed_A9231AF642C659EAAFAF52ACD960AD50;                          // 0x0A48 (size: 0x4)
    float Timeline_1_Rotation_A9231AF642C659EAAFAF52ACD960AD50;                       // 0x0A4C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_A9231AF642C659EAAFAF52ACD960AD50; // 0x0A50 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0A58 (size: 0x8)
    FRotator NormalRotation;                                                          // 0x0A60 (size: 0xC)
    float NormalSpeed;                                                                // 0x0A6C (size: 0x4)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Hit2_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Hit1_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Flee_TempImmun_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Flee_TempImmun_K2Node_ComponentBoundEvent_5_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BounceWhileImmune();
    void BndEvt__FalconEnemyState_Alert_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Alert_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CES1012_GemThief(int32 EntryPoint);
}; // Size: 0xA70

#endif
