#ifndef UE4SS_SDK_BP_LS207_Fish_HPP
#define UE4SS_SDK_BP_LS207_Fish_HPP

class ABP_LS207_Fish_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UCapsuleComponent* SurprisedVolume;                                         // 0x0908 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0910 (size: 0x8)
    float Timeline_0_NewTrack_0_201D0927476716AF90506EA2A3A88F28;                     // 0x0918 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_201D0927476716AF90506EA2A3A88F28; // 0x091C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0920 (size: 0x8)
    float Play Rate;                                                                  // 0x0928 (size: 0x4)
    class AActor* Choosen Path;                                                       // 0x0930 (size: 0x8)
    class USplineComponent* SplineRef;                                                // 0x0938 (size: 0x8)
    class USplineComponent* BarfSplineRef;                                            // 0x0940 (size: 0x8)
    float CurrentSplinePosition;                                                      // 0x0948 (size: 0x4)
    bool ReturnSplineActive;                                                          // 0x094C (size: 0x1)
    bool IdleSplineActive;                                                            // 0x094D (size: 0x1)
    class USplineComponent* Path;                                                     // 0x0950 (size: 0x8)
    class USplineComponent* NewPathRef;                                               // 0x0958 (size: 0x8)
    float DeltaModifier;                                                              // 0x0960 (size: 0x4)
    float SplineLength;                                                               // 0x0964 (size: 0x4)
    FRotator CurrentRotation;                                                         // 0x0968 (size: 0xC)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnNotifyEnd_F631AF714D3A213E28A188A08360AF26(FName NotifyName);
    void OnNotifyBegin_F631AF714D3A213E28A188A08360AF26(FName NotifyName);
    void OnInterrupted_F631AF714D3A213E28A188A08360AF26(FName NotifyName);
    void OnBlendOut_F631AF714D3A213E28A188A08360AF26(FName NotifyName);
    void OnCompleted_F631AF714D3A213E28A188A08360AF26(FName NotifyName);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionSetup(bool Active);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void Surprised(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SetUpSpeedValues(int32 Index);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void ReceiveTick(float DeltaSeconds);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void Player Ready();
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_BP_LS207_Fish(int32 EntryPoint);
}; // Size: 0x974

#endif
