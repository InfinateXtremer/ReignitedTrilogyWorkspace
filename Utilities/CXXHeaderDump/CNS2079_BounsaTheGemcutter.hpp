#ifndef UE4SS_SDK_CNS2079_BounsaTheGemcutter_HPP
#define UE4SS_SDK_CNS2079_BounsaTheGemcutter_HPP

class ACNS2079_BounsaTheGemcutter_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FifthTurnTo;                   // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FourthTurnTo;                  // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnTo3rdLizard;               // 0x0920 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0928 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_LightCone_Miner;                               // 0x0930 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveLogic;                     // 0x0938 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Hop;                           // 0x0940 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FifthStop;                     // 0x0948 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitForPlayer5;                // 0x0950 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FifthMove;                     // 0x0958 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FourthStop;                    // 0x0960 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitForPlayer4;                // 0x0968 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FourthMove;                    // 0x0970 (size: 0x8)
    class USplineComponent* ThrowSpline;                                              // 0x0978 (size: 0x8)
    class USplineComponent* TossSpline;                                               // 0x0980 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ThirdStop;                     // 0x0988 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitForPlayer3;                // 0x0990 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ThirdMove;                     // 0x0998 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Toss;                          // 0x09A0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SecondStop;                    // 0x09A8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitForPlayer2;                // 0x09B0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SecondMove;                    // 0x09B8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FirstStop;                     // 0x09C0 (size: 0x8)
    class UBoxComponent* TurnCheck;                                                   // 0x09C8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitForPlayer1;                // 0x09D0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FirstMove;                     // 0x09D8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToPlayer;                  // 0x09E0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_BetweenThrows;                 // 0x09E8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Throw;                                    // 0x09F0 (size: 0x8)
    float Timeline_1_0_NewTrack_0_11A678F7411351EBE31D199459D33784;                   // 0x09F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_0__Direction_11A678F7411351EBE31D199459D33784; // 0x09FC (size: 0x1)
    class UTimelineComponent* Timeline_1_0;                                           // 0x0A00 (size: 0x8)
    float Timeline_0_NewTrack_0_3D67D2654B90BC2B55966BAE7D2FADCA;                     // 0x0A08 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3D67D2654B90BC2B55966BAE7D2FADCA; // 0x0A0C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0A10 (size: 0x8)
    class AActor* CurrentLizard;                                                      // 0x0A18 (size: 0x8)
    class AActor* Lizard 1 IGC;                                                       // 0x0A20 (size: 0x8)
    bool LizardCheck;                                                                 // 0x0A28 (size: 0x1)
    int32 LizardsDown;                                                                // 0x0A2C (size: 0x4)
    float EventFloat;                                                                 // 0x0A30 (size: 0x4)
    bool TurnCheckActive;                                                             // 0x0A34 (size: 0x1)
    class AActor* Lizard_1;                                                           // 0x0A38 (size: 0x8)
    class AActor* Lizard_2;                                                           // 0x0A40 (size: 0x8)
    class AActor* Lizard_3;                                                           // 0x0A48 (size: 0x8)
    class AActor* Lizard_4;                                                           // 0x0A50 (size: 0x8)
    class AActor* Lizard_5;                                                           // 0x0A58 (size: 0x8)
    class AActor* Lizard_6;                                                           // 0x0A60 (size: 0x8)
    class AActor* Selector1;                                                          // 0x0A68 (size: 0x8)
    class AActor* Selector2;                                                          // 0x0A70 (size: 0x8)
    class AActor* Selector3;                                                          // 0x0A78 (size: 0x8)
    class AActor* Selector4;                                                          // 0x0A80 (size: 0x8)
    class AActor* Selector5;                                                          // 0x0A88 (size: 0x8)
    class AActor* Selector6;                                                          // 0x0A90 (size: 0x8)
    class ABP_BounsaRock_C* CurrentRock;                                              // 0x0A98 (size: 0x8)
    class AActor* CurrentSpitItem;                                                    // 0x0AA0 (size: 0x8)
    bool Saved;                                                                       // 0x0AA8 (size: 0x1)
    bool RocksForever;                                                                // 0x0AA9 (size: 0x1)
    bool Talking;                                                                     // 0x0AAA (size: 0x1)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1_0__FinishedFunc();
    void Timeline_1_0__UpdateFunc();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void BndEvt__FalconEnemyState: TurnToPlayer_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Toss_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: Throw_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ThirdStop_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__FalconEnemyState_FourthStop_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FifthStop_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionEnd(bool Success, bool LevelEnd);
    void BndEvt__FalconEnemyState_MoveLogic_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FirstMove_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void Begin();
    void BndEvt__FalconEnemyState_FirstStop_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SecondStop_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ReceiveTick(float DeltaSeconds);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void BndEvt__FalconEnemyState_Hop_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_CNS2079_BounsaTheGemcutter(int32 EntryPoint);
}; // Size: 0xAAB

#endif
