#ifndef UE4SS_SDK_SingleFirework_HPP
#define UE4SS_SDK_SingleFirework_HPP

class ASingleFirework_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class USphereComponent* FuseTrigger;                                              // 0x0450 (size: 0x8)
    class UChildActorComponent* FusePoint;                                            // 0x0458 (size: 0x8)
    class UStaticMeshComponent* SM_SH_Firework;                                       // 0x0460 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent1;                     // 0x0468 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0470 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0478 (size: 0x8)
    class UStaticMeshComponent* RocketBase;                                           // 0x0480 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0488 (size: 0x8)
    float Timeline_0_0_NewTrack_0_6E59A9554DB880836D7687B989700C0E;                   // 0x0490 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_6E59A9554DB880836D7687B989700C0E; // 0x0494 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0498 (size: 0x8)
    float NewSpeed;                                                                   // 0x04A0 (size: 0x4)
    class AActor* MyFuse;                                                             // 0x04A8 (size: 0x8)
    class UParticleSystemComponent* AParticle;                                        // 0x04B0 (size: 0x8)
    FGameplayTagContainer FireTagContainer;                                           // 0x04B8 (size: 0x20)
    class UParticleSystemComponent* FuseParticle;                                     // 0x04D8 (size: 0x8)
    class AActor* TargetChestActor;                                                   // 0x04E0 (size: 0x8)
    class AActor* AchievementWatcher;                                                 // 0x04E8 (size: 0x8)
    bool alwaysRespawn?;                                                              // 0x04F0 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ReceiveBeginPlay();
    void FuseInterface();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void Firework - Check Chest Dead();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ExecuteUbergraph_SingleFirework(int32 EntryPoint);
}; // Size: 0x4F1

#endif
