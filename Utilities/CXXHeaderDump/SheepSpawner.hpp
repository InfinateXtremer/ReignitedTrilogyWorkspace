#ifndef UE4SS_SDK_SheepSpawner_HPP
#define UE4SS_SDK_SheepSpawner_HPP

class ASheepSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UArrowComponent* Arrow6;                                                    // 0x0320 (size: 0x8)
    class UArrowComponent* Arrow5;                                                    // 0x0328 (size: 0x8)
    class UArrowComponent* Arrow4;                                                    // 0x0330 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0338 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x0340 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0348 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0350 (size: 0x8)
    TArray<class ABP_CFS1166_Sheep_BOSS_C*> Sheep;                                    // 0x0358 (size: 0x10)
    class ABP_208_Achievement_C* AchievementBP;                                       // 0x0368 (size: 0x8)
    float NewVar_0;                                                                   // 0x0370 (size: 0x4)
    bool SheepLimitHit;                                                               // 0x0374 (size: 0x1)

    void UserConstructionScript();
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
    void OnTakeDamage(class AActor* Actor, const FGameplayEventData Payload);
    void MissionAlert(class AActor* Actor, int32 Value);
    void SheepAdd(class ABP_CFS1166_Sheep_BOSS_C* Sheep);
    void SheepState(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void PlayerReady();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_SheepSpawner(int32 EntryPoint);
}; // Size: 0x375

#endif
