#ifndef UE4SS_SDK_BP_134_DoorA_HPP
#define UE4SS_SDK_BP_134_DoorA_HPP

class ABP_134_DoorA_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    float Timeline_0_NewTrack_0_42EF9FAC4997E07C1C91FA80A73B4530;                     // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_42EF9FAC4997E07C1C91FA80A73B4530; // 0x033C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0340 (size: 0x8)
    FVector Origin;                                                                   // 0x0348 (size: 0xC)
    FVector TargetLocation;                                                           // 0x0354 (size: 0xC)
    class AActor* IGC;                                                                // 0x0360 (size: 0x8)

    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetNPCValues(FText& NPCName);
    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void PromptControl(bool On);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void SetTriggerState(bool Disabled);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_134_DoorA(int32 EntryPoint);
}; // Size: 0x368

#endif
