#ifndef UE4SS_SDK_Trolly_Sign_Track_Switch_HPP
#define UE4SS_SDK_Trolly_Sign_Track_Switch_HPP

class ATrolly_Sign_Track_Switch_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0328 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    float Rotate_NewTrack_0_30E350CB4AD02ACC7E6C72B946B3C6BF;                         // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Rotate__Direction_30E350CB4AD02ACC7E6C72B946B3C6BF; // 0x0344 (size: 0x1)
    class UTimelineComponent* Rotate;                                                 // 0x0348 (size: 0x8)
    bool Track Lean Right;                                                            // 0x0350 (size: 0x1)
    FRotator Starting Rotation;                                                       // 0x0354 (size: 0xC)
    class AActor* Transition Target;                                                  // 0x0360 (size: 0x8)
    class AActor* Left location;                                                      // 0x0368 (size: 0x8)
    class AActor* Right location;                                                     // 0x0370 (size: 0x8)
    class AAuto_Trigger_C* Switch Trigger Remap;                                      // 0x0378 (size: 0x8)
    class AActor* Track_Left;                                                         // 0x0380 (size: 0x8)
    class AActor* Track_Right;                                                        // 0x0388 (size: 0x8)
    float Rotation_Right;                                                             // 0x0390 (size: 0x4)
    float Rotation_Left;                                                              // 0x0394 (size: 0x4)
    float Sign_Start;                                                                 // 0x0398 (size: 0x4)
    float Sign_End;                                                                   // 0x039C (size: 0x4)

    void UserConstructionScript();
    void Rotate__FinishedFunc();
    void Rotate__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void SpintoNewRot();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ExecuteUbergraph_Trolly_Sign_Track_Switch(int32 EntryPoint);
}; // Size: 0x3A0

#endif
