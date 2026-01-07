#ifndef UE4SS_SDK_MusicController_HPP
#define UE4SS_SDK_MusicController_HPP

class AMusicController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0320 (size: 0x8)
    bool Active;                                                                      // 0x0328 (size: 0x1)
    int32 Buffer;                                                                     // 0x032C (size: 0x4)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveTick(float DeltaSeconds);
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_MusicController(int32 EntryPoint);
}; // Size: 0x330

#endif
