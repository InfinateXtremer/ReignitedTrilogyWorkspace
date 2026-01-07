#ifndef UE4SS_SDK_BP_ChickenZapper_HPP
#define UE4SS_SDK_BP_ChickenZapper_HPP

class ABP_ChickenZapper_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x03D0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x03D8 (size: 0x8)
    class UBoxComponent* Trigger;                                                     // 0x03E0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03E8 (size: 0x8)
    bool LiveCurrent;                                                                 // 0x03F0 (size: 0x1)
    TArray<class UPrimitiveComponent*> Boxes;                                         // 0x03F8 (size: 0x10)
    class ABP_CFS1163_SpottedChickens_C* SpottedChicken;                              // 0x0408 (size: 0x8)
    bool ChickenInBox;                                                                // 0x0410 (size: 0x1)

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
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_ChickenZapper(int32 EntryPoint);
}; // Size: 0x411

#endif
