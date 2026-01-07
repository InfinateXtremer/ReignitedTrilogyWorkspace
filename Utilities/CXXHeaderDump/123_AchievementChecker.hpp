#ifndef UE4SS_SDK_123_AchievementChecker_HPP
#define UE4SS_SDK_123_AchievementChecker_HPP

class A123_AchievementChecker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    bool Landed;                                                                      // 0x0330 (size: 0x1)
    EAchievement achievement;                                                         // 0x0331 (size: 0x1)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void LookAgain();
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_123_AchievementChecker(int32 EntryPoint);
}; // Size: 0x332

#endif
