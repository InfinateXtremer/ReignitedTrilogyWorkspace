#ifndef UE4SS_SDK_SM_LS203_Door_L_HPP
#define UE4SS_SDK_SM_LS203_Door_L_HPP

class ASM_LS203_Door_L_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0330 (size: 0x8)
    float Timeline_0_NewTrack_0_B3B98B3541DB99F2847A5D8CF169B65C;                     // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B3B98B3541DB99F2847A5D8CF169B65C; // 0x033C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0340 (size: 0x8)
    FVector InitialLocation;                                                          // 0x0348 (size: 0xC)
    bool XAxis;                                                                       // 0x0354 (size: 0x1)

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
    void ExecuteUbergraph_SM_LS203_Door_L(int32 EntryPoint);
}; // Size: 0x355

#endif
