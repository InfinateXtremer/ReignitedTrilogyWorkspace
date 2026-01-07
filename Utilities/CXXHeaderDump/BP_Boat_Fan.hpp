#ifndef UE4SS_SDK_BP_Boat_Fan_HPP
#define UE4SS_SDK_BP_Boat_Fan_HPP

class ABP_Boat_Fan_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio_Steam;                                                // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0328 (size: 0x8)
    class UStaticMeshComponent* FanBlades;                                            // 0x0330 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0338 (size: 0x8)
    float Timeline_2_NewTrack_0_5422A66B49D0E8AE642FBAB8C0808163;                     // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_5422A66B49D0E8AE642FBAB8C0808163; // 0x0344 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0348 (size: 0x8)
    float Timeline_0_NewTrack_0_AFCC1E5A466BD73546A0A19C765F361A;                     // 0x0350 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_AFCC1E5A466BD73546A0A19C765F361A; // 0x0354 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0358 (size: 0x8)
    TArray<class AActor*> Campfire;                                                   // 0x0360 (size: 0x10)
    bool Active;                                                                      // 0x0370 (size: 0x1)
    class AEmitter* VFX_Smoke;                                                        // 0x0378 (size: 0x8)
    class AEmitter* VFX_Pipe_Steam;                                                   // 0x0380 (size: 0x8)
    class UAkAudioEvent* SFX_Steam_Start;                                             // 0x0388 (size: 0x8)
    class UAkAudioEvent* SFX_Steam_Stop;                                              // 0x0390 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
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
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void StateWatcher(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void Manage Steam SFX(bool Stop);
    void ExecuteUbergraph_BP_Boat_Fan(int32 EntryPoint);
}; // Size: 0x398

#endif
