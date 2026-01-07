#ifndef UE4SS_SDK_BP_Button_HPP
#define UE4SS_SDK_BP_Button_HPP

class ABP_Button_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBP_StateComponent_C* State_Activated;                                      // 0x0450 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Button_Idle_Red_Light;                     // 0x0458 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Button_Pushed_Green_Light_Dust;            // 0x0460 (size: 0x8)
    class UTfbAkComponent* AK Audio;                                                  // 0x0468 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0470 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0478 (size: 0x8)
    class UStaticMeshComponent* Button;                                               // 0x0480 (size: 0x8)
    class UStaticMeshComponent* ButtonBase;                                           // 0x0488 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0490 (size: 0x8)
    float Timeline_0_0_Glow_97E89E0544B29463F744C2A1ECC5B21A;                         // 0x0498 (size: 0x4)
    float Timeline_0_0_PRess_97E89E0544B29463F744C2A1ECC5B21A;                        // 0x049C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_97E89E0544B29463F744C2A1ECC5B21A; // 0x04A0 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x04A8 (size: 0x8)
    bool Activated;                                                                   // 0x04B0 (size: 0x1)
    class UMaterialInstanceDynamic* ButtonMaterial;                                   // 0x04B8 (size: 0x8)
    class UMaterialInstanceDynamic* ButtonBaseMaterial;                               // 0x04C0 (size: 0x8)
    TArray<class AActor*> MyThingsToTrigger;                                          // 0x04C8 (size: 0x10)
    bool UseCamera;                                                                   // 0x04D8 (size: 0x1)
    class UAkAudioEvent* SFX Button Push;                                             // 0x04E0 (size: 0x8)
    bool IGCActive;                                                                   // 0x04E8 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
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
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void IGCStart_EnemyInform();
    void IGCEnd_EnemyInform();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__State_Activated_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void LightSwitch();
    void ExecuteUbergraph_BP_Button(int32 EntryPoint);
}; // Size: 0x4E9

#endif
