#ifndef UE4SS_SDK_BP_FallToDeath_HPP
#define UE4SS_SDK_BP_FallToDeath_HPP

class ABP_FallToDeath_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0320 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0328 (size: 0x8)
    class UBoxComponent* FallToDeathVolume;                                           // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0338 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> FallTimeline__Direction_346BC65A4CF0AFEB67BA40A98CFFA8CC; // 0x0340 (size: 0x1)
    class UTimelineComponent* FallTimeline;                                           // 0x0348 (size: 0x8)
    bool DontUseCamera;                                                               // 0x0350 (size: 0x1)
    float Delay;                                                                      // 0x0354 (size: 0x4)
    bool Disabled;                                                                    // 0x0358 (size: 0x1)

    void UserConstructionScript();
    void FallTimeline__FinishedFunc();
    void FallTimeline__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__FallToDeathVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__FallToDeathVolume_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ResetTrigger();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_FallToDeath(int32 EntryPoint);
}; // Size: 0x359

#endif
