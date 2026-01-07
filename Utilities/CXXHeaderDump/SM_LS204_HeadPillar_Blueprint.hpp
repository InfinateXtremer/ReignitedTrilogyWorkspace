#ifndef UE4SS_SDK_SM_LS204_HeadPillar_Blueprint_HPP
#define UE4SS_SDK_SM_LS204_HeadPillar_Blueprint_HPP

class ASM_LS204_HeadPillar_Blueprint_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0330 (size: 0x8)
    float Timeline_0_RaisePlatform_E0895BE740C0E1B0521F60A6650B81CC;                  // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E0895BE740C0E1B0521F60A6650B81CC; // 0x033C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0340 (size: 0x8)
    FVector Offset;                                                                   // 0x0348 (size: 0xC)
    FVector StartPos;                                                                 // 0x0354 (size: 0xC)
    FVector EndPos;                                                                   // 0x0360 (size: 0xC)
    bool Direction;                                                                   // 0x036C (size: 0x1)
    class AActor* BonkTrigger;                                                        // 0x0370 (size: 0x8)
    class AEmitter* VFX_Dust;                                                         // 0x0378 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__Events__EventFunc();
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
    void Move(bool Forward);
    void ExecuteUbergraph_SM_LS204_HeadPillar_Blueprint(int32 EntryPoint);
}; // Size: 0x380

#endif
