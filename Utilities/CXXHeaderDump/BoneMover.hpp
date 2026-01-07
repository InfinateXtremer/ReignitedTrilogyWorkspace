#ifndef UE4SS_SDK_BoneMover_HPP
#define UE4SS_SDK_BoneMover_HPP

class ABoneMover_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    float Timeline_0_JumpVertical_9E088A374762950A2476D483E97CF1D2;                   // 0x0328 (size: 0x4)
    float Timeline_0_JumpHorizontal_9E088A374762950A2476D483E97CF1D2;                 // 0x032C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_9E088A374762950A2476D483E97CF1D2; // 0x0330 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0338 (size: 0x8)
    FVector StartLoc;                                                                 // 0x0340 (size: 0xC)
    FVector EndLoc;                                                                   // 0x034C (size: 0xC)
    float JumpMultiplier;                                                             // 0x0358 (size: 0x4)
    class ALS212_Bone_Collectible_C* MovingItem;                                      // 0x0360 (size: 0x8)
    class AActor* SourcePositionActor;                                                // 0x0368 (size: 0x8)
    class AActor* WatchActor;                                                         // 0x0370 (size: 0x8)
    FName WatchState;                                                                 // 0x0378 (size: 0x8)
    FRotator StartRot;                                                                // 0x0380 (size: 0xC)
    FRotator EndRot;                                                                  // 0x038C (size: 0xC)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ItemStateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void Player Ready();
    void ExecuteUbergraph_BoneMover(int32 EntryPoint);
}; // Size: 0x398

#endif
