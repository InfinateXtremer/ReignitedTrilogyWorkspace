#ifndef UE4SS_SDK_BP_LS205_GeneratorVFXController_HPP
#define UE4SS_SDK_BP_LS205_GeneratorVFXController_HPP

class ABP_LS205_GeneratorVFXController_C : public AEmitter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0370 (size: 0x8)
    class AActor* AmperRef;                                                           // 0x0378 (size: 0x8)
    class ATargetPoint* TargetPointRef;                                               // 0x0380 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_LS205_GeneratorVFXController(int32 EntryPoint);
}; // Size: 0x388

#endif
