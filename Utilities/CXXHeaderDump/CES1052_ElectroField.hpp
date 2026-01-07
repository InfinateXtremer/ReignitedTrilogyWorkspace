#ifndef UE4SS_SDK_CES1052_ElectroField_HPP
#define UE4SS_SDK_CES1052_ElectroField_HPP

class ACES1052_ElectroField_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x03D0 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Electric_Floor;                            // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* Floor2;                                               // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x03E8 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x03F0 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x03F8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0400 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0408 (size: 0x8)
    float Emission_Animation_Emission_Strength_B1617AA34B741B7ED8A9C0B8C01616A8;      // 0x0410 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Emission_Animation__Direction_B1617AA34B741B7ED8A9C0B8C01616A8; // 0x0414 (size: 0x1)
    class UTimelineComponent* Emission Animation;                                     // 0x0418 (size: 0x8)
    bool LiveCurrent;                                                                 // 0x0420 (size: 0x1)
    TArray<class UPrimitiveComponent*> Boxes;                                         // 0x0428 (size: 0x10)
    class UMaterialInstanceDynamic* Material;                                         // 0x0438 (size: 0x8)
    class UMaterialInstanceDynamic* Material2;                                        // 0x0440 (size: 0x8)
    bool UseFloor2;                                                                   // 0x0448 (size: 0x1)
    FPhasmidSoftReference SkillChecker;                                               // 0x0450 (size: 0x28)
    class AActor* LocalSkillChecker;                                                  // 0x0478 (size: 0x8)
    class UMaterialInstanceDynamic* Material3_Bricks;                                 // 0x0480 (size: 0x8)
    TArray<TSoftObjectPtr<AActor>> ZappedList;                                        // 0x0488 (size: 0x10)
    FTimerHandle ResetTimer;                                                          // 0x0498 (size: 0x8)

    void ResetField();
    void ZapActor(class AActor* Zapee);
    void UserConstructionScript();
    void Emission Animation__FinishedFunc();
    void Emission Animation__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ElectroNotify();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_CES1052_ElectroField(int32 EntryPoint);
}; // Size: 0x4A0

#endif
