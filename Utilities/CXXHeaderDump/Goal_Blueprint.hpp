#ifndef UE4SS_SDK_Goal_Blueprint_HPP
#define UE4SS_SDK_Goal_Blueprint_HPP

class AGoal_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class UPortalNameComponent_C* PortalNameComponent;                                // 0x0328 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0330 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0338 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0348 (size: 0x8)
    class AActor* MissionMaster;                                                      // 0x0350 (size: 0x8)
    bool Active;                                                                      // 0x0358 (size: 0x1)
    FTransform PuckLoc;                                                               // 0x0360 (size: 0x30)
    class APuck_C* Puck;                                                              // 0x0390 (size: 0x8)
    int32 score;                                                                      // 0x0398 (size: 0x4)
    int32 PlayerTeam;                                                                 // 0x039C (size: 0x4)
    class AActor* MyGoalie;                                                           // 0x03A0 (size: 0x8)
    class AActor* MyIGC;                                                              // 0x03A8 (size: 0x8)
    class AActor* HockeySetup;                                                        // 0x03B0 (size: 0x8)
    bool GoalScored;                                                                  // 0x03B8 (size: 0x1)
    bool NewVar_0;                                                                    // 0x03B9 (size: 0x1)
    class AGoal_Blueprint_C* OtherGoal;                                               // 0x03C0 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_9_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void ExitTrigger();
    void ScoredAGoal();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Goal_Blueprint(int32 EntryPoint);
}; // Size: 0x3C8

#endif
