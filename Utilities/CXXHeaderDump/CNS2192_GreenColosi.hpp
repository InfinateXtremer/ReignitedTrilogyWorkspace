#ifndef UE4SS_SDK_CNS2192_GreenColosi_HPP
#define UE4SS_SDK_CNS2192_GreenColosi_HPP

class ACNS2192_GreenColosi_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToWaypoints6_FastWalk;     // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HammerOut_Idle;                // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HammerIn_Idle;                 // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HammerIn_Door;                 // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* hammer;                                               // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle2;                         // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpeedUp;                       // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Rest;                          // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToWaypoints5_RunAway;      // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitForDoor;                   // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DroppedByEnemy;                // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HeldByEnemy;                   // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PlayerSeen;                    // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Done;                          // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToWaypoints4_Done;         // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_OpenDoor;                      // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToWaypoints3_Door;         // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChooseWaypoints;               // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_KnockedBack;                   // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToFace;                    // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToPoint;                   // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToWaypoints2_Circle;       // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToWaypoints1_Circle;       // 0x0AA8 (size: 0x8)
    class UTextRenderComponent* NPCName;                                              // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0AB8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0AC0 (size: 0x8)
    float Timeline_2_NewTrack_0_3FBB1B2C49108F86FE110F85DA08E55E;                     // 0x0AC8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_3FBB1B2C49108F86FE110F85DA08E55E; // 0x0ACC (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0AD0 (size: 0x8)
    float Timeline_1_NewTrack_2_0CC9267E419B282DEF5E389289892BA7;                     // 0x0AD8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_0CC9267E419B282DEF5E389289892BA7; // 0x0ADC (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0AE0 (size: 0x8)
    bool NewVar_0;                                                                    // 0x0AE8 (size: 0x1)
    class AActor* MyEnemy;                                                            // 0x0AF0 (size: 0x8)
    TArray<class AActor*> Doors;                                                      // 0x0AF8 (size: 0x10)
    bool PlayerSeen;                                                                  // 0x0B08 (size: 0x1)
    class ATriggerBox* TriggerVolumeSeen;                                             // 0x0B10 (size: 0x8)
    class AActor* Lock;                                                               // 0x0B18 (size: 0x8)
    bool EnemyDead;                                                                   // 0x0B20 (size: 0x1)
    FVector StartLoc;                                                                 // 0x0B24 (size: 0xC)
    FVector EndLoc;                                                                   // 0x0B30 (size: 0xC)
    class AActor* KnockbackLoc;                                                       // 0x0B40 (size: 0x8)
    class AActor* SaveRestorePoint;                                                   // 0x0B48 (size: 0x8)
    class ATriggerSphere* TriggerVolumeUnseen;                                        // 0x0B50 (size: 0x8)
    float CurrentSpeed;                                                               // 0x0B58 (size: 0x4)
    float TargetSpeed;                                                                // 0x0B5C (size: 0x4)
    float SlowDownDist;                                                               // 0x0B60 (size: 0x4)
    float SpeedUpDist;                                                                // 0x0B64 (size: 0x4)
    bool Special_SpeedUpWhenHit?;                                                     // 0x0B68 (size: 0x1)
    float OriginalWalkSpeed;                                                          // 0x0B6C (size: 0x4)

    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void PromptControl(bool On);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void SetTriggerState(bool Disabled);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void BndEvt__FalconEnemyState_ChooseWaypoints_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void StateWatcher(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_OpenDoor_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TurnToFace_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void OverlapVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__FalconEnemyState_WalkToWaypoints1_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WalkToWaypoints2_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WalkToWaypoints3_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WalkToWaypoints4_K2Node_ComponentBoundEvent_7_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WalkToPoint_K2Node_ComponentBoundEvent_8_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WalkToWaypoints5_RunAway_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SpeedUp_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_KnockedBack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void PlayerUnseen(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Player Unseen();
    void CustomEvent_0();
    void BndEvt__FalconEnemyState_WalkToWaypoints5_RunAway_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_HammerOut_Door_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WaitForDoor_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_HammerOut_Idle_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_HammerIn_Idle_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WalkToWaypoints6_FastWalk_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WalkToWaypoints6_FastWalk_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_HeldByEnemy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_HeldByEnemy_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_CNS2192_GreenColosi(int32 EntryPoint);
}; // Size: 0xB70

#endif
