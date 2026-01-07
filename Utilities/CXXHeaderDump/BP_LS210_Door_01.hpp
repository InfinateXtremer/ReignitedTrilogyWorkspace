#ifndef UE4SS_SDK_BP_LS210_Door_01_HPP
#define UE4SS_SDK_BP_LS210_Door_01_HPP

class ABP_LS210_Door_01_C : public ABP_SplineMesh_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0350 (size: 0x8)
    class UStaticMeshComponent* StaticMesh - Door;                                    // 0x0358 (size: 0x8)
    float Timeline_0_percent_0ED83B4F426E174EFA43F0BA84F13BCD;                        // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_0ED83B4F426E174EFA43F0BA84F13BCD; // 0x0364 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0368 (size: 0x8)
    FVector Start_Position;                                                           // 0x0370 (size: 0xC)
    FVector End_Position;                                                             // 0x037C (size: 0xC)
    FVector Offset;                                                                   // 0x0388 (size: 0xC)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
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
    void ExecuteUbergraph_BP_LS210_Door_01(int32 EntryPoint);
}; // Size: 0x394

#endif
