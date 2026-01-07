#ifndef UE4SS_SDK_204_AchievementWatcher_HPP
#define UE4SS_SDK_204_AchievementWatcher_HPP

class A204_AchievementWatcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Setup();
    void GoatChangesStates(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_204_AchievementWatcher(int32 EntryPoint);
}; // Size: 0x330

#endif
