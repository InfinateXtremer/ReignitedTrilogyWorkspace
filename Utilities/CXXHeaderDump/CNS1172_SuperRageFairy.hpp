#ifndef UE4SS_SDK_CNS1172_SuperRageFairy_HPP
#define UE4SS_SDK_CNS1172_SuperRageFairy_HPP

class ACNS1172_SuperRageFairy_C : public ACNS1167_RageFairy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0960 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0968 (size: 0x8)
    class UFalconEnemyStateComponent* State_ArriveAtWP;                               // 0x0970 (size: 0x8)
    class UFalconEnemyStateComponent* State_MoveToWP;                                 // 0x0978 (size: 0x8)
    class UFalconEnemyStateComponent* State_Chased;                                   // 0x0980 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Ability_Timer__Direction_F4D8CD1C42350020F13DE69D2BEC1AEE; // 0x0988 (size: 0x1)
    class UTimelineComponent* Ability Timer;                                          // 0x0990 (size: 0x8)
    float Timeline_2_NewTrack_1_A9FB3F334D266107B91D2FBB629B75AD;                     // 0x0998 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_A9FB3F334D266107B91D2FBB629B75AD; // 0x099C (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x09A0 (size: 0x8)
    float Timeline_1_KissTrack_61F41D734FBF489F1A6FAF8EE10AB1EA;                      // 0x09A8 (size: 0x4)
    float Timeline_1_Rotation_61F41D734FBF489F1A6FAF8EE10AB1EA;                       // 0x09AC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_61F41D734FBF489F1A6FAF8EE10AB1EA; // 0x09B0 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x09B8 (size: 0x8)
    float Timeline_0_NewTrack_0_7743B3A24E6C3EC377F0E09CE8F82710;                     // 0x09C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7743B3A24E6C3EC377F0E09CE8F82710; // 0x09C4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x09C8 (size: 0x8)
    class AActor* WaypointActor;                                                      // 0x09D0 (size: 0x8)
    FRotator Rotation_Start;                                                          // 0x09D8 (size: 0xC)
    FRotator Rotation_End;                                                            // 0x09E4 (size: 0xC)
    class AActor* TriggerActor;                                                       // 0x09F0 (size: 0x8)
    FVector Location_Start;                                                           // 0x09F8 (size: 0xC)
    FVector Location_End;                                                             // 0x0A04 (size: 0xC)
    bool PlayerInBox;                                                                 // 0x0A10 (size: 0x1)
    class AActor* CameraActor;                                                        // 0x0A18 (size: 0x8)
    bool NewVar_0_0;                                                                  // 0x0A20 (size: 0x1)
    bool IsWalking;                                                                   // 0x0A21 (size: 0x1)
    float AbilityDuration;                                                            // 0x0A24 (size: 0x4)
    class AActor* EnemyActor;                                                         // 0x0A28 (size: 0x8)
    bool EnemyWatch;                                                                  // 0x0A30 (size: 0x1)
    FRotator Rotation_SpyroKiss_Start;                                                // 0x0A34 (size: 0xC)
    FRotator Rotation_SpyroKiss_End;                                                  // 0x0A40 (size: 0xC)
    bool PlayerHasPermanentAbility;                                                   // 0x0A4C (size: 0x1)
    bool IControlAbility;                                                             // 0x0A4D (size: 0x1)
    class AActor* AimActor;                                                           // 0x0A50 (size: 0x8)
    bool preventInteractionUntilAbilityExpires?;                                      // 0x0A58 (size: 0x1)
    bool powerIsActive?;                                                              // 0x0A59 (size: 0x1)
    bool RestoreFromSave;                                                             // 0x0A5A (size: 0x1)
    bool RestoreAfterCutscene;                                                        // 0x0A5B (size: 0x1)
    float OrigTimer;                                                                  // 0x0A5C (size: 0x4)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_1__NewTrack_0__EventFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Ability Timer__FinishedFunc();
    void Ability Timer__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__State_ArriveAtWP_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__TriggerActor_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__TriggerActor_K2Node_ComponentBoundEvent_4_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__State_Idle_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void CheckForPlayer();
    void IGC Control(int32 Index);
    void Ability_Control(bool On);
    void EnemyDead(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void CommunicateWithOtherFairies();
    void BndEvt__State_Zap_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void GetSpyroNose();
    void PlayerReady();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void GameStateChange(EFalconGameState PrevState, EFalconGameState NextState);
    void ExecuteUbergraph_CNS1172_SuperRageFairy(int32 EntryPoint);
}; // Size: 0xA60

#endif
