#ifndef UE4SS_SDK_MM_MusicController_HPP
#define UE4SS_SDK_MM_MusicController_HPP

class AMM_MusicController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0320 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    float StartDelay;                                                                 // 0x0338 (size: 0x4)
    class UAkAudioEvent* Music_Start;                                                 // 0x0340 (size: 0x8)
    float End_Delay;                                                                  // 0x0348 (size: 0x4)
    class UAkAudioEvent* Music_End;                                                   // 0x0350 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ExecuteUbergraph_MM_MusicController(int32 EntryPoint);
}; // Size: 0x358

#endif
