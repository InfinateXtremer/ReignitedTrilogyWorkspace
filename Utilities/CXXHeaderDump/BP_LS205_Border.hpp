#ifndef UE4SS_SDK_BP_LS205_Border_HPP
#define UE4SS_SDK_BP_LS205_Border_HPP

class ABP_LS205_Border_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0450 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0458 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0460 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0468 (size: 0x8)
    class UAkAudioEvent* SFX_BorderSound;                                             // 0x0470 (size: 0x8)
    bool createBlocking?;                                                             // 0x0478 (size: 0x1)
    bool stopCheck?;                                                                  // 0x0479 (size: 0x1)

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
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_LS205_Border(int32 EntryPoint);
}; // Size: 0x47A

#endif
