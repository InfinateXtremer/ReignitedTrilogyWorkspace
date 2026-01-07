#ifndef UE4SS_SDK_BP_205_Button_HPP
#define UE4SS_SDK_BP_205_Button_HPP

class ABP_205_Button_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBoxComponent* Sphere_Charge;                                               // 0x0450 (size: 0x8)
    class USphereComponent* Sphere_Flame;                                             // 0x0458 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0460 (size: 0x8)
    class UTfbAkComponent* AK Audio;                                                  // 0x0468 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0470 (size: 0x8)
    class UStaticMeshComponent* Button;                                               // 0x0478 (size: 0x8)
    class UStaticMeshComponent* ButtonBase;                                           // 0x0480 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0488 (size: 0x8)
    float VFX_Thingy_ThingyVAl_DF04C3BA4BC17A4789AFB1BE1B9F7493;                      // 0x0490 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> VFX_Thingy__Direction_DF04C3BA4BC17A4789AFB1BE1B9F7493; // 0x0494 (size: 0x1)
    class UTimelineComponent* VFX_Thingy;                                             // 0x0498 (size: 0x8)
    float Timeline_0_0_Glow_469C35304A1280DC5A8151A82D873695;                         // 0x04A0 (size: 0x4)
    float Timeline_0_0_PRess_469C35304A1280DC5A8151A82D873695;                        // 0x04A4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_469C35304A1280DC5A8151A82D873695; // 0x04A8 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x04B0 (size: 0x8)
    float FanRotation_NewTrack_0_866CD85A44716D4538C3859B9EA8B56F;                    // 0x04B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FanRotation__Direction_866CD85A44716D4538C3859B9EA8B56F; // 0x04BC (size: 0x1)
    class UTimelineComponent* FanRotation;                                            // 0x04C0 (size: 0x8)
    class UMaterialInstanceDynamic* ButtonMaterial;                                   // 0x04C8 (size: 0x8)
    class UMaterialInstanceDynamic* ButtonBaseMaterial;                               // 0x04D0 (size: 0x8)
    TArray<class ABP_201_Door_C*> MyThingsToTrigger;                                  // 0x04D8 (size: 0x10)
    bool UseCamera;                                                                   // 0x04E8 (size: 0x1)
    class UAkAudioEvent* SFX Button Push;                                             // 0x04F0 (size: 0x8)
    bool hitActive;                                                                   // 0x04F8 (size: 0x1)
    class AActor* IGC_Selector;                                                       // 0x0500 (size: 0x8)
    int32 IGC_ID;                                                                     // 0x0508 (size: 0x4)
    bool preventInteraction?;                                                         // 0x050C (size: 0x1)
    class AStaticMeshActor* FanRef;                                                   // 0x0510 (size: 0x8)
    float FanRotationRate;                                                            // 0x0518 (size: 0x4)
    class AEmitter* SpinVFX;                                                          // 0x0520 (size: 0x8)
    class ABP_205_WindmillLarge_C* AssociatedWindmillBlocker;                         // 0x0528 (size: 0x8)
    TArray<class AActor*> Save_SpikeNotifyActors;                                     // 0x0530 (size: 0x10)
    bool save_WaitForCheckpoint?;                                                     // 0x0540 (size: 0x1)
    class AAkAmbientSound* SFX_Fan;                                                   // 0x0548 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void FanRotation__FinishedFunc();
    void FanRotation__UpdateFunc();
    void VFX_Thingy__FinishedFunc();
    void VFX_Thingy__UpdateFunc();
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
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void IGCStart_EnemyInform();
    void IGCEnd_EnemyInform();
    void 205 Button - Allow Interaction();
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void BndEvt__Sphere_Charge_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_205_Button(int32 EntryPoint);
}; // Size: 0x550

#endif
