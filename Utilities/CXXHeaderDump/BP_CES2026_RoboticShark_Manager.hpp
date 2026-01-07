#ifndef UE4SS_SDK_BP_CES2026_RoboticShark_Manager_HPP
#define UE4SS_SDK_BP_CES2026_RoboticShark_Manager_HPP

class ABP_CES2026_RoboticShark_Manager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USphereComponent* EscapeSphere;                                             // 0x0320 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    class ATriggerCapsule* SharkCapsule;                                              // 0x0338 (size: 0x8)
    class ATriggerBox* SharkBox;                                                      // 0x0340 (size: 0x8)
    TArray<class ABP_CES2026_RoboticShark_C*> ListOfSharks;                           // 0x0348 (size: 0x10)
    bool InEscapeSphere;                                                              // 0x0358 (size: 0x1)
    bool InCapsule;                                                                   // 0x0359 (size: 0x1)
    bool InBox;                                                                       // 0x035A (size: 0x1)
    int32 ManagerState;                                                               // 0x035C (size: 0x4)
    float HighestDotValue;                                                            // 0x0360 (size: 0x4)
    int32 SharkIndex;                                                                 // 0x0364 (size: 0x4)
    bool UseOnlyOneTrigger;                                                           // 0x0368 (size: 0x1)
    class ABP_CES2026_RoboticShark_C* ChosenShark;                                    // 0x0370 (size: 0x8)

    void UserConstructionScript();
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
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__SharkCapsule_K2Node_ComponentBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SharkCapsule_K2Node_ComponentBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SharkBox_K2Node_ComponentBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__SharkBox_K2Node_ComponentBoundEvent_9_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__EscapeSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__EscapeSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_CES2026_RoboticShark_Manager(int32 EntryPoint);
}; // Size: 0x378

#endif
