#ifndef UE4SS_SDK_BP_WhirlWind_Spawner_HPP
#define UE4SS_SDK_BP_WhirlWind_Spawner_HPP

class ABP_WhirlWind_Spawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio3;                                                     // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio2;                                                     // 0x0328 (size: 0x8)
    class UAkComponent* AkAudio1;                                                     // 0x0330 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0338 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0340 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x0348 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0350 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0358 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0360 (size: 0x8)
    TArray<class AActor*> Campfire;                                                   // 0x0368 (size: 0x10)
    bool Activate;                                                                    // 0x0378 (size: 0x1)
    class AActor* Actor;                                                              // 0x0380 (size: 0x8)
    TArray<class AActor*> ActorArray;                                                 // 0x0388 (size: 0x10)
    class AActor* Whirlwind_Spawned;                                                  // 0x0398 (size: 0x8)
    class AEmitter* VFX_Smoke;                                                        // 0x03A0 (size: 0x8)
    class AEmitter* VFX_Pipe_Steam;                                                   // 0x03A8 (size: 0x8)
    class UAkAudioEvent* SFX_Steam_Start;                                             // 0x03B0 (size: 0x8)
    class UAkAudioEvent* SFX_Steam_Stop;                                              // 0x03B8 (size: 0x8)

    void UserConstructionScript();
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
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Manage Steam SFX(bool Stop);
    void ExecuteUbergraph_BP_WhirlWind_Spawner(int32 EntryPoint);
}; // Size: 0x3C0

#endif
