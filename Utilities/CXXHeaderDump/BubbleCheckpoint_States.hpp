#ifndef UE4SS_SDK_BubbleCheckpoint_States_HPP
#define UE4SS_SDK_BubbleCheckpoint_States_HPP

class ABubbleCheckpoint_States_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UTfbAkComponent* AK Audio;                                                  // 0x0450 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0458 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0460 (size: 0x8)
    class UBP_StateComponent_C* State_Success;                                        // 0x0468 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0470 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0478 (size: 0x8)
    class UBP_StateComponent_C* State_Fail;                                           // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* State_Expanding;                                      // 0x0488 (size: 0x8)
    class UStaticMeshComponent* Bubble14;                                             // 0x0490 (size: 0x8)
    class UArrowComponent* Arrow14;                                                   // 0x0498 (size: 0x8)
    class UStaticMeshComponent* Bubble13;                                             // 0x04A0 (size: 0x8)
    class UArrowComponent* Arrow13;                                                   // 0x04A8 (size: 0x8)
    class UStaticMeshComponent* Bubble12;                                             // 0x04B0 (size: 0x8)
    class UArrowComponent* Arrow12;                                                   // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* Bubble11;                                             // 0x04C0 (size: 0x8)
    class UArrowComponent* Arrow11;                                                   // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* Bubble10;                                             // 0x04D0 (size: 0x8)
    class UArrowComponent* Arrow10;                                                   // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* Bubble09;                                             // 0x04E0 (size: 0x8)
    class UArrowComponent* Arrow09;                                                   // 0x04E8 (size: 0x8)
    class UStaticMeshComponent* Bubble08;                                             // 0x04F0 (size: 0x8)
    class UArrowComponent* Arrow08;                                                   // 0x04F8 (size: 0x8)
    class UStaticMeshComponent* Bubble07;                                             // 0x0500 (size: 0x8)
    class UArrowComponent* Arrow07;                                                   // 0x0508 (size: 0x8)
    class UStaticMeshComponent* Bubble06;                                             // 0x0510 (size: 0x8)
    class UArrowComponent* Arrow06;                                                   // 0x0518 (size: 0x8)
    class UStaticMeshComponent* Bubble05;                                             // 0x0520 (size: 0x8)
    class UArrowComponent* Arrow05;                                                   // 0x0528 (size: 0x8)
    class UStaticMeshComponent* Bubble04;                                             // 0x0530 (size: 0x8)
    class UArrowComponent* Arrow04;                                                   // 0x0538 (size: 0x8)
    class UStaticMeshComponent* Bubble03;                                             // 0x0540 (size: 0x8)
    class UArrowComponent* Arrow03;                                                   // 0x0548 (size: 0x8)
    class UStaticMeshComponent* Bubble02;                                             // 0x0550 (size: 0x8)
    class UArrowComponent* Arrow02;                                                   // 0x0558 (size: 0x8)
    class UStaticMeshComponent* Bubble01;                                             // 0x0560 (size: 0x8)
    class UArrowComponent* Arrow01;                                                   // 0x0568 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0570 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0578 (size: 0x8)
    float Timeline_0_0_Scale_B4B8477F4EDAF57E9DA19C84BF60938E;                        // 0x0580 (size: 0x4)
    float Timeline_0_0_Location_B4B8477F4EDAF57E9DA19C84BF60938E;                     // 0x0584 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_B4B8477F4EDAF57E9DA19C84BF60938E; // 0x0588 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0590 (size: 0x8)
    class UAkAudioEvent* SFX Gate Success;                                            // 0x0598 (size: 0x8)
    bool Success;                                                                     // 0x05A0 (size: 0x1)
    class UAkAudioEvent* SFX Gate Fail;                                               // 0x05A8 (size: 0x8)
    FVector OriginalScaleOuterRing;                                                   // 0x05B0 (size: 0xC)
    FVector OriginalScaleInnerRing;                                                   // 0x05BC (size: 0xC)
    bool Failure;                                                                     // 0x05C8 (size: 0x1)
    bool Active;                                                                      // 0x05C9 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__State_Expanding_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void Open Gates();
    void Close Gates();
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Success_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BubbleCheckpoint_States(int32 EntryPoint);
}; // Size: 0x5CA

#endif
