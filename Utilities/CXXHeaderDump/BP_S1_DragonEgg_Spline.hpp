#ifndef UE4SS_SDK_BP_S1_DragonEgg_Spline_HPP
#define UE4SS_SDK_BP_S1_DragonEgg_Spline_HPP

class ABP_S1_DragonEgg_Spline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    float Timeline_0_NewTrack_0_EFE2C01F440D59C2D9C5F1BB19F18958;                     // 0x0330 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_EFE2C01F440D59C2D9C5F1BB19F18958; // 0x0334 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0338 (size: 0x8)
    class AActor* MyEgg;                                                              // 0x0340 (size: 0x8)
    FVector LocationStart;                                                            // 0x0348 (size: 0xC)
    FVector LocationEnd;                                                              // 0x0354 (size: 0xC)
    int32 CamIndex;                                                                   // 0x0360 (size: 0x4)

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
    void DamageSpyro(class AActor* Actor, const FGameplayEventData Payload);
    void ExecuteUbergraph_BP_S1_DragonEgg_Spline(int32 EntryPoint);
}; // Size: 0x364

#endif
