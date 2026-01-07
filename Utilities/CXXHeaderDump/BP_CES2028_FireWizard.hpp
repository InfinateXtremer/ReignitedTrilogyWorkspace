#ifndef UE4SS_SDK_BP_CES2028_FireWizard_HPP
#define UE4SS_SDK_BP_CES2028_FireWizard_HPP

class ABP_CES2028_FireWizard_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* WaitToMoveState;                                // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* TheatricCooldownState;                          // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* TheatricIdleState;                              // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* TheatricAttackState;                            // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* LaughState;                                     // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* MoveState;                                      // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A40 (size: 0x8)
    float BodyDissolve_TimeLine_head_dissolve_DD33647840B6F86C77158CA4C563F319;       // 0x0A48 (size: 0x4)
    float BodyDissolve_TimeLine_NewTrack_0_DD33647840B6F86C77158CA4C563F319;          // 0x0A4C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BodyDissolve_TimeLine__Direction_DD33647840B6F86C77158CA4C563F319; // 0x0A50 (size: 0x1)
    class UTimelineComponent* BodyDissolve_TimeLine;                                  // 0x0A58 (size: 0x8)
    class UParticleSystemComponent* HeadFlames;                                       // 0x0A60 (size: 0x8)
    class UParticleSystemComponent* HandFlameLeft;                                    // 0x0A68 (size: 0x8)
    class UParticleSystemComponent* HandFlameRight;                                   // 0x0A70 (size: 0x8)
    class UParticleSystemComponent* HairFlames;                                       // 0x0A78 (size: 0x8)
    class ADeathDummy_C* DeathDummy;                                                  // 0x0A80 (size: 0x8)

    void UserConstructionScript();
    void BodyDissolve_TimeLine__FinishedFunc();
    void BodyDissolve_TimeLine__UpdateFunc();
    void OnNotifyEnd_A2EB6D374F061100C5000EB9F90D4BC4(FName NotifyName);
    void OnNotifyBegin_A2EB6D374F061100C5000EB9F90D4BC4(FName NotifyName);
    void OnInterrupted_A2EB6D374F061100C5000EB9F90D4BC4(FName NotifyName);
    void OnBlendOut_A2EB6D374F061100C5000EB9F90D4BC4(FName NotifyName);
    void OnCompleted_A2EB6D374F061100C5000EB9F90D4BC4(FName NotifyName);
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__MoveState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__MoveState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CES2028_FireWizard(int32 EntryPoint);
}; // Size: 0xA88

#endif
