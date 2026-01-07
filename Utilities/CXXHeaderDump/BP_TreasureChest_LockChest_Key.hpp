#ifndef UE4SS_SDK_BP_TreasureChest_LockChest_Key_HPP
#define UE4SS_SDK_BP_TreasureChest_LockChest_Key_HPP

class ABP_TreasureChest_LockChest_Key_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UPhasmidCullComponent* PhasmidCull;                                         // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* KeyMesh;                                              // 0x03D8 (size: 0x8)
    class USphereComponent* SphereCollision;                                          // 0x03E0 (size: 0x8)
    class UParticleSystemComponent* KeyVFX;                                           // 0x03E8 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x03F0 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x03F8 (size: 0x8)
    float Quick_Bloom_NewTrack_0_5446BD7A485EB1F5AA79D5A53872F618;                    // 0x0400 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Quick_Bloom__Direction_5446BD7A485EB1F5AA79D5A53872F618; // 0x0404 (size: 0x1)
    class UTimelineComponent* Quick Bloom;                                            // 0x0408 (size: 0x8)
    float Timeline_0_NewTrack_0_3233026549EFBCB137599BB42D0712C2;                     // 0x0410 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3233026549EFBCB137599BB42D0712C2; // 0x0414 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0418 (size: 0x8)
    class ABP_TreasureChest_Lock_C* ChestRef;                                         // 0x0420 (size: 0x8)
    class UParticleSystemComponent* trailvfx;                                         // 0x0428 (size: 0x8)
    class AActor* MyChest;                                                            // 0x0430 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Quick Bloom__FinishedFunc();
    void Quick Bloom__UpdateFunc();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_TreasureChest_LockChest_Key(int32 EntryPoint);
}; // Size: 0x438

#endif
