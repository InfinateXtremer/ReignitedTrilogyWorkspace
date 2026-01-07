#ifndef UE4SS_SDK_SM_LS203_Door2_HPP
#define UE4SS_SDK_SM_LS203_Door2_HPP

class ASM_LS203_Door2_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0330 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0338 (size: 0x8)
    float Timeline_0_NewTrack_0_A4938F3E40E99D2BD0F7C2A30CE082AF;                     // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A4938F3E40E99D2BD0F7C2A30CE082AF; // 0x0344 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0348 (size: 0x8)
    FVector InitialLocation;                                                          // 0x0350 (size: 0xC)
    float NewVar_0;                                                                   // 0x035C (size: 0x4)
    class UParticleSystem* My Particle;                                               // 0x0360 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_SM_LS203_Door2(int32 EntryPoint);
}; // Size: 0x368

#endif
