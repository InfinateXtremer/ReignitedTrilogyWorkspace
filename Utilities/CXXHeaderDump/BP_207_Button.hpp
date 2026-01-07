#ifndef UE4SS_SDK_BP_207_Button_HPP
#define UE4SS_SDK_BP_207_Button_HPP

class ABP_207_Button_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UPointLightComponent* Button_PointLight;                                    // 0x0450 (size: 0x8)
    class UBP_StateComponent_C* State_Hit;                                            // 0x0458 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Button_Idle_Red_Light;                     // 0x0460 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Button_Pushed_Green_Light_Dust;            // 0x0468 (size: 0x8)
    class UTfbAkComponent* AK Audio;                                                  // 0x0470 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0478 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0480 (size: 0x8)
    class UStaticMeshComponent* Button;                                               // 0x0488 (size: 0x8)
    class UStaticMeshComponent* ButtonBase;                                           // 0x0490 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0498 (size: 0x8)
    float Timeline_1_Glow_85617147471E81C3DDEA6D8C66F4FC9C;                           // 0x04A0 (size: 0x4)
    float Timeline_1_PRess_85617147471E81C3DDEA6D8C66F4FC9C;                          // 0x04A4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_85617147471E81C3DDEA6D8C66F4FC9C; // 0x04A8 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04B0 (size: 0x8)
    float Timeline_0_0_Glow_E2999A85461221D40051AE91FBC5597A;                         // 0x04B8 (size: 0x4)
    float Timeline_0_0_PRess_E2999A85461221D40051AE91FBC5597A;                        // 0x04BC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_E2999A85461221D40051AE91FBC5597A; // 0x04C0 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x04C8 (size: 0x8)
    class UMaterialInstanceDynamic* ButtonMaterial;                                   // 0x04D0 (size: 0x8)
    class UMaterialInstanceDynamic* ButtonBaseMaterial;                               // 0x04D8 (size: 0x8)
    TArray<class AActor*> MyThingsToTrigger;                                          // 0x04E0 (size: 0x10)
    class UAkAudioEvent* SFX Button Push;                                             // 0x04F0 (size: 0x8)
    class AActor* MySaveGameObject;                                                   // 0x04F8 (size: 0x8)
    FGameplayTagContainer SpyroDamageTags;                                            // 0x0500 (size: 0x20)
    FLinearColor Light_Active_Color;                                                  // 0x0520 (size: 0x10)
    float Light_Active_Intensity;                                                     // 0x0530 (size: 0x4)
    FLinearColor Light_Inactive_Color;                                                // 0x0534 (size: 0x10)
    float Light_Inactive_Intensity;                                                   // 0x0544 (size: 0x4)
    bool done;                                                                        // 0x0548 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
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
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void IGCStart_EnemyInform();
    void IGCEnd_EnemyInform();
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__State_Hit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Event Adjust Light(FLinearColor Light_Color, float Light_Intensity);
    void ExecuteUbergraph_BP_207_Button(int32 EntryPoint);
}; // Size: 0x549

#endif
