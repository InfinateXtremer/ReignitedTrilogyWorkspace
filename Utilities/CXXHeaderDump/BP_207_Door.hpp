#ifndef UE4SS_SDK_BP_207_Door_HPP
#define UE4SS_SDK_BP_207_Door_HPP

class ABP_207_Door_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UArrowComponent* PS_Location;                                               // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_207_Door(int32 EntryPoint);
}; // Size: 0x338

#endif
