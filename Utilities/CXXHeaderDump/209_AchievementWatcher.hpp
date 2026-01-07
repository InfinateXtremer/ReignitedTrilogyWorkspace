#ifndef UE4SS_SDK_209_AchievementWatcher_HPP
#define UE4SS_SDK_209_AchievementWatcher_HPP

class A209_AchievementWatcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    TArray<class AActor*> Actors;                                                     // 0x0330 (size: 0x10)
    bool Check;                                                                       // 0x0340 (size: 0x1)
    int32 DesiredValue;                                                               // 0x0344 (size: 0x4)
    int32 CurrentValue;                                                               // 0x0348 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_209_AchievementWatcher(int32 EntryPoint);
}; // Size: 0x34C

#endif
