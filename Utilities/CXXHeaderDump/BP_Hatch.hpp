#ifndef UE4SS_SDK_BP_Hatch_HPP
#define UE4SS_SDK_BP_Hatch_HPP

class ABP_Hatch_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Hatch;                                                // 0x0320 (size: 0x8)
    class UStaticMeshComponent* SM_LS207_Hatch02_Lid;                                 // 0x0328 (size: 0x8)
    class UChildActorComponent* VFXLocation;                                          // 0x0330 (size: 0x8)
    class UStaticMeshComponent* RotatePoint;                                          // 0x0338 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0340 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0348 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0350 (size: 0x8)
    float Raise_Movement_6678ED2F400B5BD7F7AE57AF1B5D2ACC;                            // 0x0358 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Raise__Direction_6678ED2F400B5BD7F7AE57AF1B5D2ACC; // 0x035C (size: 0x1)
    class UTimelineComponent* Raise;                                                  // 0x0360 (size: 0x8)
    float Height;                                                                     // 0x0368 (size: 0x4)
    TArray<class AActor*> MyThingsToTrigger;                                          // 0x0370 (size: 0x10)
    FRotator Initial Rot;                                                             // 0x0380 (size: 0xC)
    class UParticleSystemComponent* WaterParticle;                                    // 0x0390 (size: 0x8)
    float CurrentRot;                                                                 // 0x0398 (size: 0x4)
    float DesiredRot;                                                                 // 0x039C (size: 0x4)
    class AActor* OtherCam;                                                           // 0x03A0 (size: 0x8)

    void UserConstructionScript();
    void Raise__FinishedFunc();
    void Raise__UpdateFunc();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Hatch(int32 EntryPoint);
}; // Size: 0x3A8

#endif
