#ifndef UE4SS_SDK_BP_CNS3706_Hunter_HPP
#define UE4SS_SDK_BP_CNS3706_Hunter_HPP

class ABP_CNS3706_Hunter_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_QuestTossRock;                            // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* State_HitReactFriendly;                         // 0x0910 (size: 0x8)
    class USP3_CharacterComponent* SP3_Character;                                     // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* State_FireArrow;                                // 0x0920 (size: 0x8)
    class UFalconEnemyStateComponent* State_SplineJump_D;                             // 0x0928 (size: 0x8)
    class UFalconEnemyStateComponent* State_SplineJump_C;                             // 0x0930 (size: 0x8)
    class UFalconEnemyStateComponent* State_SplineJump_B;                             // 0x0938 (size: 0x8)
    class UFalconEnemyStateComponent* State_SplineJump_A;                             // 0x0940 (size: 0x8)
    float RockScaleTimeline_Scale_D49A74F944AAAA621B9444863929AFE0;                   // 0x0948 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> RockScaleTimeline__Direction_D49A74F944AAAA621B9444863929AFE0; // 0x094C (size: 0x1)
    class UTimelineComponent* RockScaleTimeline;                                      // 0x0950 (size: 0x8)
    float MissionStartDelay;                                                          // 0x0958 (size: 0x4)
    bool is201Logic?;                                                                 // 0x095C (size: 0x1)
    class ABP_SpitItem_310_C* RockSpitItem;                                           // 0x0960 (size: 0x8)
    class UStaticMeshComponent* RockInHandMesh;                                       // 0x0968 (size: 0x8)
    bool IsRockVisible;                                                               // 0x0970 (size: 0x1)

    void IsMoving(bool& IsMoving);
    void NotMoving(bool& Not Moving);
    void UserConstructionScript();
    void RockScaleTimeline__FinishedFunc();
    void RockScaleTimeline__UpdateFunc();
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
    void SetRockVisibility(bool visible);
    void BndEvt__State_TossRock_K2Node_ComponentBoundEvent_0_FalconProjectileSpawned__DelegateSignature(class APhasmidProjectileActor* Projectile, FName ProjectileName);
    void BndEvt__State_TossRock_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ProjectileDestroyedByPlayer(class APhasmidProjectileActor* Projectile, class AActor* OtherActor);
    void ReceiveBeginPlay();
    void BndEvt__State_QuestTossRock_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CNS3706_Hunter(int32 EntryPoint);
}; // Size: 0x971

#endif
