#ifndef UE4SS_SDK_101_AchievementWatcher_HPP
#define UE4SS_SDK_101_AchievementWatcher_HPP

class A101_AchievementWatcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class ACNS1127_MarcoTheBalloonist_C* Marco;                                       // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void PlayerReady();
    void MarcoStateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_101_AchievementWatcher(int32 EntryPoint);
}; // Size: 0x338

#endif
