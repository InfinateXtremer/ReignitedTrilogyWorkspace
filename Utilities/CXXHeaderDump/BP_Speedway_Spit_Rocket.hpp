#ifndef UE4SS_SDK_BP_Speedway_Spit_Rocket_HPP
#define UE4SS_SDK_BP_Speedway_Spit_Rocket_HPP

class ABP_Speedway_Spit_Rocket_C : public ABP_SpitItemPlacement_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0740 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0748 (size: 0x8)
    class UTfbAkComponent* AkAudio;                                                   // 0x0750 (size: 0x8)
    class UStaticMeshComponent* backupMesh;                                           // 0x0758 (size: 0x8)
    bool PlayerInSphere;                                                              // 0x0760 (size: 0x1)
    TArray<class AActor*> Targets;                                                    // 0x0768 (size: 0x10)
    class AActor* CurrTarget;                                                         // 0x0778 (size: 0x8)
    int32 Destroy Count;                                                              // 0x0780 (size: 0x4)
    float Vision Cone;                                                                // 0x0784 (size: 0x4)
    float InitialSpeed;                                                               // 0x0788 (size: 0x4)
    float MaxSpeed;                                                                   // 0x078C (size: 0x4)

    void Reset Destroy Count();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__CollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnProjectileDestroyed(class APhasmidProjectileActor* Projectile, class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ScanTargets();
    void SetTarget(class AActor* Target);
    void ExecuteUbergraph_BP_Speedway_Spit_Rocket(int32 EntryPoint);
}; // Size: 0x790

#endif
