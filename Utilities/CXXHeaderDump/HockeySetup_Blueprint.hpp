#ifndef UE4SS_SDK_HockeySetup_Blueprint_HPP
#define UE4SS_SDK_HockeySetup_Blueprint_HPP

class AHockeySetup_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* PlayArea;                                                    // 0x0320 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0330 (size: 0x8)
    class AActor* MM1;                                                                // 0x0338 (size: 0x8)
    class AActor* MM2;                                                                // 0x0340 (size: 0x8)
    class AActor* PlayerStartPos;                                                     // 0x0348 (size: 0x8)
    class AActor* EnemyPlayer;                                                        // 0x0350 (size: 0x8)
    class AActor* EnemyStartPos;                                                      // 0x0358 (size: 0x8)
    class AActor* EnemyGoalie;                                                        // 0x0360 (size: 0x8)
    class AActor* EnemyGoalieStartPos;                                                // 0x0368 (size: 0x8)
    class AActor* PlayerGoalie;                                                       // 0x0370 (size: 0x8)
    class AActor* PlayerGoalieStartPos;                                               // 0x0378 (size: 0x8)
    bool Active;                                                                      // 0x0380 (size: 0x1)
    class AActor* MM_Temp;                                                            // 0x0388 (size: 0x8)
    class AActor* Puck;                                                               // 0x0390 (size: 0x8)
    TArray<class AActor*> NotifyActors;                                               // 0x0398 (size: 0x10)
    class AActor* Selector;                                                           // 0x03A8 (size: 0x8)
    bool GameActive;                                                                  // 0x03B0 (size: 0x1)
    bool PuckInPlay;                                                                  // 0x03B1 (size: 0x1)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveTick(float DeltaSeconds);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void CamFade();
    void TeleportActors();
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__PlayArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void MissionEnd(bool Success, bool LevelEnd);
    void PuckDistanceCheck();
    void ExecuteUbergraph_HockeySetup_Blueprint(int32 EntryPoint);
}; // Size: 0x3B2

#endif
