#ifndef UE4SS_SDK_128_AchievementWatcher_HPP
#define UE4SS_SDK_128_AchievementWatcher_HPP

class A128_AchievementWatcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    TArray<class ABP_CES1062_HauntedTinSoldier_C*> TinSoldier;                        // 0x0328 (size: 0x10)
    bool FailCheck;                                                                   // 0x0338 (size: 0x1)
    bool ActiveChecker;                                                               // 0x0339 (size: 0x1)

    void UserConstructionScript();
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
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_128_AchievementWatcher(int32 EntryPoint);
}; // Size: 0x33A

#endif
