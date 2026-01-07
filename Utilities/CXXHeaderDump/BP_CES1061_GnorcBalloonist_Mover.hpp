#ifndef UE4SS_SDK_BP_CES1061_GnorcBalloonist_Mover_HPP
#define UE4SS_SDK_BP_CES1061_GnorcBalloonist_Mover_HPP

class ABP_CES1061_GnorcBalloonist_Mover_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UBP_LootOptions_Component_C* BP_LootOptions_Component;                      // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveUp;                        // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveDown;                      // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start;                         // 0x0A18 (size: 0x8)
    float Z_Movement_Up_Z_Multiplier_F6B026954A09AB4815F9B3851B2C92EC;                // 0x0A20 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Z_Movement_Up__Direction_F6B026954A09AB4815F9B3851B2C92EC; // 0x0A24 (size: 0x1)
    class UTimelineComponent* Z_Movement_Up;                                          // 0x0A28 (size: 0x8)
    float Z_Movement_Down_Z_Multiplier_7AEFB7714E1F56F576FF17B692494A87;              // 0x0A30 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Z_Movement_Down__Direction_7AEFB7714E1F56F576FF17B692494A87; // 0x0A34 (size: 0x1)
    class UTimelineComponent* Z_Movement_Down;                                        // 0x0A38 (size: 0x8)
    float BalloonBobbingDistance;                                                     // 0x0A40 (size: 0x4)
    FVector CurrentPosition;                                                          // 0x0A44 (size: 0xC)
    class ABP_CES1061_GnorcBalloonist_C* TheGnorcWhoShaggedMe;                        // 0x0A50 (size: 0x8)
    bool TimeOffsetUsed;                                                              // 0x0A58 (size: 0x1)
    float TimeOffset;                                                                 // 0x0A5C (size: 0x4)

    void UserConstructionScript();
    void Z_Movement_Up__FinishedFunc();
    void Z_Movement_Up__UpdateFunc();
    void Z_Movement_Down__FinishedFunc();
    void Z_Movement_Down__UpdateFunc();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_MoveUp_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_MoveDown_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void OnCull(class AActor* Actor, bool bIsCulled);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CES1061_GnorcBalloonist_Mover(int32 EntryPoint);
}; // Size: 0xA60

#endif
