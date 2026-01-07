#ifndef UE4SS_SDK_BP_LevelActor_Base_HPP
#define UE4SS_SDK_BP_LevelActor_Base_HPP

class ABP_LevelActor_Base_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UPhasmidCullComponent* PhasmidCull;                                         // 0x03D0 (size: 0x8)
    class UFalconSplineMovementCoordinator* FalconSplineMovementCoordinator;          // 0x03D8 (size: 0x8)
    class UCombatPoolComponent* CombatPool;                                           // 0x03E0 (size: 0x8)
    class UBP_DeathState_C* State_Death;                                              // 0x03E8 (size: 0x8)
    class UBP_StateComponent_C* State_Default;                                        // 0x03F0 (size: 0x8)
    class USphereComponent* SceneRoot;                                                // 0x03F8 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0400 (size: 0x8)
    class USplineMovementComponent* SplineMovement;                                   // 0x0408 (size: 0x8)
    class UFalconLevelActorStateMachineComponent* FalconLevelActorStateMachine;       // 0x0410 (size: 0x8)
    float Timeline_0_metalActiveFresnelExponent_8CBCF03C4306654DBA688FA8C3300B6C;     // 0x0418 (size: 0x4)
    float Timeline_0_metalActive_8CBCF03C4306654DBA688FA8C3300B6C;                    // 0x041C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_8CBCF03C4306654DBA688FA8C3300B6C; // 0x0420 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0428 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> MetalMaterials;                           // 0x0430 (size: 0x10)
    int32 LastMetalDamageGroup;                                                       // 0x0440 (size: 0x4)

    void GetMetalResponseDamageGroupInfo(const FGameplayEventData& GameplayEventData, int32& AttackGroupIndex, bool& IsNewAttack);
    bool IsDead();
    bool IsImmuneToDamage(const FGameplayTagContainer& InTagContainer, class UPrimitiveComponent* HitComponent);
    bool IsMetal?();
    bool ShouldRespondToFireAttack?(FGameplayEventData& GameplayEventData);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void PlayMetalResponse(class AActor* Target, FGameplayEventData Payload);
    void Stop Fire Reaction();
    void ExecuteUbergraph_BP_LevelActor_Base(int32 EntryPoint);
}; // Size: 0x444

#endif
