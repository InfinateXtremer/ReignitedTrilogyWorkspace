#ifndef UE4SS_SDK_BP_SP3_Base_Boss_HPP
#define UE4SS_SDK_BP_SP3_Base_Boss_HPP

class ABP_SP3_Base_Boss_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_BattleStart;                   // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Spawn;                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_QuestActive;                   // 0x0A08 (size: 0x8)
    FVector ArenaCenter;                                                              // 0x0A10 (size: 0xC)
    float ArenaRadius;                                                                // 0x0A1C (size: 0x4)
    FName FirstActiveBossState;                                                       // 0x0A20 (size: 0x8)
    int32 HitPoints;                                                                  // 0x0A28 (size: 0x4)
    int32 DefaultHitPoints;                                                           // 0x0A2C (size: 0x4)
    class UUI_HealhBars_BottomLeftRight_C* HealthBarWidget;                           // 0x0A30 (size: 0x8)
    FName BossIconName;                                                               // 0x0A38 (size: 0x8)
    float InvulnerableUntilTime;                                                      // 0x0A40 (size: 0x4)
    bool BattleStarted;                                                               // 0x0A44 (size: 0x1)
    class AActor* ArenaCenterActor;                                                   // 0x0A48 (size: 0x8)

    void IsBattleStarted(bool& Result);
    void NotifyBattleStarted();
    void IsInvulnerable(bool& Result);
    void SetInvulnerabilityTime(float Time);
    void IsPhase5(bool& Result);
    void IsPhase4(bool& Result);
    void IsPhase3(bool& Result);
    void IsPhase2(bool& Result);
    void IsPhase1(bool& Result);
    void ClampDistance(FVector& A, FVector B, float Max Distance, FVector& A's Adjusted Location);
    void IsTooCloseToExistingPoint(FVector& TestPos, float& TestRadius, TArray<FVector>& Points, bool& Result);
    void GetDistanceToPlayer(float& Distance);
    void GetDistanceFromArenaCenter(float& Result);
    void GetBattlePhase(int32& Phase);
    void IsNotZeroHealth(bool& Result);
    void IsZeroHealth(bool& Result);
    void IsAlwaysFalse(bool& Result);
    void SetHitPoints(int32 HP);
    void SetHealthBarEnabled(bool Enabled, bool& Result);
    void IsPlayerAlive(bool& Result);
    void IsPlayerDead(bool& Result);
    void IsAlwaysTrue(bool& Result);
    void CheckForHarmfulTerrain(FGameplayTagContainer Tags, bool& Result, FVector& Pos);
    void CheckForLava(bool& HitLava, FVector& Pos);
    void IsPlayerOutsideArenaRadius(bool& Result);
    void IsPlayerInsideArenaRadius(bool& Result);
    void SetArenaParams(class AActor* CenterActor, float Radius, bool& Result);
    void UserConstructionScript();
    void CustomNotify02(class AActor* InputActor);
    void CustomNotify01(class AActor* InputActor);
    void BndEvt__FalconEnemyState_QuestActive_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void CustomNotify03(class AActor* InputActor);
    void CustomNotify04(class AActor* InputActor);
    void CustomNotify05(class AActor* InputActor);
    void BndEvt__FalconEnemyState_BattleStart_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_SP3_Base_Boss(int32 EntryPoint);
}; // Size: 0xA50

#endif
