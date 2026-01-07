#ifndef UE4SS_SDK_BP_Drawbridge_DUPL_1_HPP
#define UE4SS_SDK_BP_Drawbridge_DUPL_1_HPP

class ABP_DrawBridge_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Chainpiece;                                           // 0x0320 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Drawbridge;                                           // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Pivot;                                                // 0x0338 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0340 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0348 (size: 0x8)
    float Timeline_0_NewTrack_0_2576E33B475A5C2986EFC5B8D4F84D2E;                     // 0x0350 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2576E33B475A5C2986EFC5B8D4F84D2E; // 0x0354 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0358 (size: 0x8)
    class AActor* Chains;                                                             // 0x0360 (size: 0x8)
    bool Active;                                                                      // 0x0368 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void CutsceneControl(bool Start);
    void ReceiveTick(float DeltaSeconds);
    void ChainSwap();
    void ExecuteUbergraph_BP_DrawBridge(int32 EntryPoint);
}; // Size: 0x369

#endif
