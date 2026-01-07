#ifndef UE4SS_SDK_BP_207_Tower_Controller_HPP
#define UE4SS_SDK_BP_207_Tower_Controller_HPP

class ABP_207_Tower_Controller_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0450 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0458 (size: 0x8)
    class AActor* DGrate1;                                                            // 0x0460 (size: 0x8)
    class AActor* DGrate2;                                                            // 0x0468 (size: 0x8)
    class AActor* DGrate3;                                                            // 0x0470 (size: 0x8)
    class AActor* DGrate4;                                                            // 0x0478 (size: 0x8)
    int32 Tower_ID;                                                                   // 0x0480 (size: 0x4)
    class APhasmidTaggedTargetPoint* Grate_WP_1;                                      // 0x0488 (size: 0x8)
    class APhasmidTaggedTargetPoint* Grate_WP_2;                                      // 0x0490 (size: 0x8)
    class APhasmidTaggedTargetPoint* Grate_WP_3;                                      // 0x0498 (size: 0x8)
    class APhasmidTaggedTargetPoint* Grate_WP_4;                                      // 0x04A0 (size: 0x8)
    class AActor* MySeahorse;                                                         // 0x04A8 (size: 0x8)
    bool Active;                                                                      // 0x04B0 (size: 0x1)
    class UParticleSystemComponent* Grate1A;                                          // 0x04B8 (size: 0x8)
    class ABP_207_TowerRing_C* TowerRing;                                             // 0x04C0 (size: 0x8)

    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    void UserConstructionScript();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveBeginPlay();
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void Tower 1();
    void Tower 2();
    void Tower 4();
    void Tower 5();
    void Tower 6();
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void SetTriggerState(bool Disabled);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void PromptControl(bool On);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_207_Tower_Controller(int32 EntryPoint);
}; // Size: 0x4C8

#endif
