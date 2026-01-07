#ifndef UE4SS_SDK_BP_CES1034_BlueWizard_HPP
#define UE4SS_SDK_BP_CES1034_BlueWizard_HPP

class ABP_CES1034_BlueWizard_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* ConjureD;                                       // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* ConjureC;                                       // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* ConjureB;                                       // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* ConjureA;                                       // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* PreAttackToIdle;                                // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* Alert;                                          // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* TheatricRanged;                                 // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* TheatricPreAttack;                              // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* TheatricIdle;                                   // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FriendlyFire;                                   // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* Death;                                          // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* PostAttack;                                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* Ranged;                                         // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* PreAttack;                                      // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* Idle;                                           // 0x0A68 (size: 0x8)
    float Timeline_0_0_Alpha_8100679E46CCCAF9119338A97DD91F8F;                        // 0x0A70 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_8100679E46CCCAF9119338A97DD91F8F; // 0x0A74 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0A78 (size: 0x8)
    float Alpha_Alpha_5124212242B920724F4D36A03BA6C2ED;                               // 0x0A80 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Alpha__Direction_5124212242B920724F4D36A03BA6C2ED; // 0x0A84 (size: 0x1)
    class UTimelineComponent* Alpha;                                                  // 0x0A88 (size: 0x8)
    FRotator OriginalRotation;                                                        // 0x0A90 (size: 0xC)
    class AActor* ActorToFace;                                                        // 0x0AA0 (size: 0x8)
    class AActor* LS116_ActorToFace_A;                                                // 0x0AA8 (size: 0x8)
    class AActor* LS116_ActorToFace_B;                                                // 0x0AB0 (size: 0x8)
    class AActor* LS116_ActorToFace_C;                                                // 0x0AB8 (size: 0x8)
    class AActor* LS116_ActorToFace_D;                                                // 0x0AC0 (size: 0x8)
    bool LS116_FirstBlueWizard?;                                                      // 0x0AC8 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Alpha__FinishedFunc();
    void Alpha__UpdateFunc();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void BndEvt__ConjureA_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__ConjureB_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__ConjureC_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__ConjureD_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__ConjureD_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CES1034_BlueWizard(int32 EntryPoint);
}; // Size: 0xAC9

#endif
