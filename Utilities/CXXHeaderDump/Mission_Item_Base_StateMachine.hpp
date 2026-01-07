#ifndef UE4SS_SDK_Mission_Item_Base_StateMachine_HPP
#define UE4SS_SDK_Mission_Item_Base_StateMachine_HPP

class AMission_Item_Base_StateMachine_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UStaticMeshComponent* BaseMesh;                                             // 0x0450 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0458 (size: 0x8)
    class UParticleSystem* Destroy_VFX;                                               // 0x0460 (size: 0x8)
    class UAkAudioEvent* Destroy_SFX_AK;                                              // 0x0468 (size: 0x8)
    class UParticleSystem* Collect_VFX;                                               // 0x0470 (size: 0x8)
    class UAkAudioEvent* Collect_SFX_AK;                                              // 0x0478 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ExecuteUbergraph_Mission_Item_Base_StateMachine(int32 EntryPoint);
}; // Size: 0x480

#endif
