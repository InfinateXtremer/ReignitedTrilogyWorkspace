#ifndef UE4SS_SDK_BP_WaterPlane_HPP
#define UE4SS_SDK_BP_WaterPlane_HPP

class ABP_WaterPlane_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio_Water;                                                // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0328 (size: 0x8)
    class UTextRenderComponent* WaterManager;                                         // 0x0330 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0338 (size: 0x8)
    float Timeline_0_NewTrack_0_3E303288466F6AF2C9F7829A3D6F1AF1;                     // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3E303288466F6AF2C9F7829A3D6F1AF1; // 0x0344 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0348 (size: 0x8)
    TArray<class AActor*> Campfire;                                                   // 0x0350 (size: 0x10)
    FVector InitialLocation;                                                          // 0x0360 (size: 0xC)
    class AActor* WaterVolume;                                                        // 0x0370 (size: 0x8)
    FVector WaterVolumeLoc;                                                           // 0x0378 (size: 0xC)
    class AActor* FluidManager;                                                       // 0x0388 (size: 0x8)
    FPhasmidSoftReference FluidSoftRef;                                               // 0x0390 (size: 0x28)
    bool Active;                                                                      // 0x03B8 (size: 0x1)
    FPhasmidSoftReference UnderWaterSoftRef;                                          // 0x03C0 (size: 0x28)
    class AActor* UnderwaterPP;                                                       // 0x03E8 (size: 0x8)
    FVector UnderWaterLoc;                                                            // 0x03F0 (size: 0xC)
    class AEmitter* VFX_Smoke;                                                        // 0x0400 (size: 0x8)
    class AEmitter* VFX_Pipe_Steam;                                                   // 0x0408 (size: 0x8)
    class UAkAudioEvent* SFX_Steam_Loop;                                              // 0x0410 (size: 0x8)
    class UAkAudioEvent* SFX_Steam_Stop;                                              // 0x0418 (size: 0x8)

    void RevertWaterActors(bool Sweep);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void StateWatcher(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void PlayerReady();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Manage Steam SFX(bool Stop);
    void ExecuteUbergraph_BP_WaterPlane(int32 EntryPoint);
}; // Size: 0x420

#endif
