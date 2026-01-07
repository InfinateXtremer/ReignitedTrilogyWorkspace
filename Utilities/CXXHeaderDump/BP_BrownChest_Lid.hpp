#ifndef UE4SS_SDK_BP_BrownChest_Lid_HPP
#define UE4SS_SDK_BP_BrownChest_Lid_HPP

class ABP_BrownChest_Lid_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS203_Chest_Open_Dust;                     // 0x0328 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)

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
    void ExecuteUbergraph_BP_BrownChest_Lid(int32 EntryPoint);
}; // Size: 0x340

#endif
