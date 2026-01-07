#ifndef UE4SS_SDK_BP_LS207_DestructibleSeaweed_HPP
#define UE4SS_SDK_BP_LS207_DestructibleSeaweed_HPP

class ABP_LS207_DestructibleSeaweed_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_DestructibleSeaweed_Glow;                  // 0x0450 (size: 0x8)
    class UBP_StateComponent_C* State_Destroyed;                                      // 0x0458 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0460 (size: 0x8)
    class UBP_StateComponent_C* State_Flamed;                                         // 0x0468 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0470 (size: 0x8)
    float Timeline_1_Burn_1048D3364A31DA352CD361BFBB51BAD7;                           // 0x0478 (size: 0x4)
    float Timeline_1_Blacken_1048D3364A31DA352CD361BFBB51BAD7;                        // 0x047C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_1048D3364A31DA352CD361BFBB51BAD7; // 0x0480 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0488 (size: 0x8)
    class AActor* SkillPointWatcher;                                                  // 0x0490 (size: 0x8)
    FGameplayTagContainer TagContainer;                                               // 0x0498 (size: 0x20)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
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
    void BndEvt__State_Destroyed_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void ExecuteUbergraph_BP_LS207_DestructibleSeaweed(int32 EntryPoint);
}; // Size: 0x4B8

#endif
