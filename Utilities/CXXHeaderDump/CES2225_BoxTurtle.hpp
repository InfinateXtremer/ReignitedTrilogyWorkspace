#ifndef UE4SS_SDK_CES2225_BoxTurtle_HPP
#define UE4SS_SDK_CES2225_BoxTurtle_HPP

class ACES2225_BoxTurtle_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToTarget_4;                // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToTarget_3;                // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToPlate2;                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveFromPlate;                 // 0x0A10 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToTarget_2;                // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToTarget_1;                // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToOrigin;                  // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToDummy;                   // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleAtPlate;                   // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToPlate;                   // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnAway;                      // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A60 (size: 0x8)
    float TurnAway_Turning_046741264C6D4F93CA484A9583665A3B;                          // 0x0A68 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TurnAway__Direction_046741264C6D4F93CA484A9583665A3B; // 0x0A6C (size: 0x1)
    class UTimelineComponent* TurnAway;                                               // 0x0A70 (size: 0x8)
    FRotator MyRotation;                                                              // 0x0A78 (size: 0xC)
    FRotator TargetRotation;                                                          // 0x0A84 (size: 0xC)
    class AActor* OtherActor;                                                         // 0x0A90 (size: 0x8)
    class AActor* MyDummy;                                                            // 0x0A98 (size: 0x8)
    class AActor* MyPlate;                                                            // 0x0AA0 (size: 0x8)
    FName State;                                                                      // 0x0AA8 (size: 0x8)
    bool Checking;                                                                    // 0x0AB0 (size: 0x1)
    class AActor* Collision_0;                                                        // 0x0AB8 (size: 0x8)
    class AActor* Collision_1;                                                        // 0x0AC0 (size: 0x8)
    class AActor* Collision_2;                                                        // 0x0AC8 (size: 0x8)
    class AActor* Collision_3;                                                        // 0x0AD0 (size: 0x8)
    bool Turtle4;                                                                     // 0x0AD8 (size: 0x1)
    bool AtPlate;                                                                     // 0x0AD9 (size: 0x1)
    class AActor* Collision_4;                                                        // 0x0AE0 (size: 0x8)
    class AActor* Collision_5;                                                        // 0x0AE8 (size: 0x8)
    class AActor* Collision_6;                                                        // 0x0AF0 (size: 0x8)

    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void TurnAway__FinishedFunc();
    void TurnAway__UpdateFunc();
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void BndEvt__FalconEnemyState_TurnAway_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_MoveToPlate_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_IdleAtPlate_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_MoveToDummy_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_MoveToOrigin_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void SetTriggerState(bool Disabled);
    void PromptControl(bool On);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void Begin();
    void BndEvt__FalconEnemyState_MoveFromPlate_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_MoveToTarget_1_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_MoveToTarget_2_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_MoveToTarget_4_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_MoveToTarget_3_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_CES2225_BoxTurtle(int32 EntryPoint);
}; // Size: 0xAF8

#endif
