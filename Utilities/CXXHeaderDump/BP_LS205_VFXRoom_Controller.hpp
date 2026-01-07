#ifndef UE4SS_SDK_BP_LS205_VFXRoom_Controller_HPP
#define UE4SS_SDK_BP_LS205_VFXRoom_Controller_HPP

class ABP_LS205_VFXRoom_Controller_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03D0 (size: 0x8)
    TArray<class AEmitter*> AllVFX;                                                   // 0x03D8 (size: 0x10)
    TArray<class AAkAmbientSound*> Audio;                                             // 0x03E8 (size: 0x10)

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
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_LS205_VFXRoom_Controller(int32 EntryPoint);
}; // Size: 0x3F8

#endif
