#ifndef UE4SS_SDK_NPC_IGC_Trigger_HPP
#define UE4SS_SDK_NPC_IGC_Trigger_HPP

class ANPC_IGC_Trigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0320 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0328 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0330 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0338 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0340 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0348 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0350 (size: 0x8)
    float LootTraversal_NewTrack_0_6E0A825A4FAEE2206A69689EB84A5E83;                  // 0x0358 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LootTraversal__Direction_6E0A825A4FAEE2206A69689EB84A5E83; // 0x035C (size: 0x1)
    class UTimelineComponent* LootTraversal;                                          // 0x0360 (size: 0x8)
    class AActor* NPC;                                                                // 0x0368 (size: 0x8)
    TArray<class AActor*> MissionActors;                                              // 0x0370 (size: 0x10)
    int32 IGC_Index;                                                                  // 0x0380 (size: 0x4)
    TArray<FSpyro_IGC_Struct> IGC_Definitions;                                        // 0x0388 (size: 0x10)
    class ALevelSequenceActor* IGC_Current;                                           // 0x0398 (size: 0x8)
    bool TeleportOnSuccess/Fail;                                                      // 0x03A0 (size: 0x1)
    bool ResetOnFail;                                                                 // 0x03A1 (size: 0x1)
    class ULevelSequencePlayer* LevelSequencePlayback;                                // 0x03A8 (size: 0x8)
    float DeltaSeconds;                                                               // 0x03B0 (size: 0x4)
    bool ShouldRotate;                                                                // 0x03B4 (size: 0x1)
    FText LocalText;                                                                  // 0x03B8 (size: 0x18)
    FText ReplaceText;                                                                // 0x03D0 (size: 0x18)
    FSpyro_IGC_Struct IGC_CurrentDef;                                                 // 0x03E8 (size: 0x68)
    bool NeedsPrompt;                                                                 // 0x0450 (size: 0x1)
    bool PromptVisible;                                                               // 0x0451 (size: 0x1)
    bool PlayerInVolume;                                                              // 0x0452 (size: 0x1)
    class AActor* SimpleCamRef;                                                       // 0x0458 (size: 0x8)
    class AActor* LootActor;                                                          // 0x0460 (size: 0x8)
    int32 IGCIndexOnSucceed;                                                          // 0x0468 (size: 0x4)
    int32 IGCIndexOnFail;                                                             // 0x046C (size: 0x4)

    void DebugCamSetup();
    void MissionAlertHandler(class AActor* Actor, int32 IGC_Index);
    void CommunicateState();
    void AssignCurrentIGC();
    void MissionEndHandler(bool Success);
    void UserConstructionScript();
    void LootTraversal__FinishedFunc();
    void LootTraversal__UpdateFunc();
    void InpActEvt_FreeLook_K2Node_InputActionEvent_0(FKey Key);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void IGC_Finished();
    void MissionEnd(bool Success, bool LevelEnd);
    void ResetIGCTrigger();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MovePlayerToCenter();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_38_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CheckGoals();
    void ImmediatePlay();
    void ExecuteUbergraph_NPC_IGC_Trigger(int32 EntryPoint);
}; // Size: 0x470

#endif
