#ifndef UE4SS_SDK_BP_PressurePlate_HPP
#define UE4SS_SDK_BP_PressurePlate_HPP

class ABP_PressurePlate_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0328 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Plate_Dust_PUff_Up;                        // 0x0330 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Plate_Dust_PUff_Down;                      // 0x0338 (size: 0x8)
    class UStaticMeshComponent* SM_LS206_PressurePlateButton;                         // 0x0340 (size: 0x8)
    class UStaticMeshComponent* Plate;                                                // 0x0348 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0350 (size: 0x8)
    float Timeline_1_NewTrack_0_A315B6F14B3D8D00B48344B21638E18B;                     // 0x0358 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_A315B6F14B3D8D00B48344B21638E18B; // 0x035C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0360 (size: 0x8)
    float Timeline_0_NewTrack_0_448D43AA4CE72062684A40AC56B6DEEA;                     // 0x0368 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_448D43AA4CE72062684A40AC56B6DEEA; // 0x036C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0370 (size: 0x8)
    class AActor* Door1;                                                              // 0x0378 (size: 0x8)
    class AActor* Door2;                                                              // 0x0380 (size: 0x8)
    class AActor* MyTurtle;                                                           // 0x0388 (size: 0x8)
    float Door1_DeltaYaw;                                                             // 0x0390 (size: 0x4)
    float Door2_DeltaYaw;                                                             // 0x0394 (size: 0x4)
    float Door1_ClosedYaw;                                                            // 0x0398 (size: 0x4)
    float Door2_ClosedYaw;                                                            // 0x039C (size: 0x4)
    float Door1_OpenedYaw;                                                            // 0x03A0 (size: 0x4)
    float Door2_OpenedYaw;                                                            // 0x03A4 (size: 0x4)
    bool IsPlayer;                                                                    // 0x03A8 (size: 0x1)
    int32 MyID;                                                                       // 0x03AC (size: 0x4)
    class AActor* BabyTurtleController;                                               // 0x03B0 (size: 0x8)
    bool Controlling;                                                                 // 0x03B8 (size: 0x1)
    bool Checking;                                                                    // 0x03B9 (size: 0x1)
    float PlateOriginZ;                                                               // 0x03BC (size: 0x4)
    float PlateDownZ;                                                                 // 0x03C0 (size: 0x4)
    FVector PlateOrigin;                                                              // 0x03C4 (size: 0xC)
    bool IsTurtle;                                                                    // 0x03D0 (size: 0x1)
    class AEmitter* VFX_Door_Dust_Open;                                               // 0x03D8 (size: 0x8)
    class AEmitter* VFX_Door_Dust_Close;                                              // 0x03E0 (size: 0x8)
    class UAkAudioEvent* SFX_Door1_Open;                                              // 0x03E8 (size: 0x8)
    class UAkAudioEvent* SFX_Door2_Open;                                              // 0x03F0 (size: 0x8)
    class UAkAudioEvent* SFX_Door1_Close;                                             // 0x03F8 (size: 0x8)
    class UAkAudioEvent* SFX_Door2_Close;                                             // 0x0400 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void Down();
    void Up();
    void MissionEnd(bool Success, bool LevelEnd);
    void Play Open SFX();
    void Play Close SFX();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void ExecuteUbergraph_BP_PressurePlate(int32 EntryPoint);
}; // Size: 0x408

#endif
