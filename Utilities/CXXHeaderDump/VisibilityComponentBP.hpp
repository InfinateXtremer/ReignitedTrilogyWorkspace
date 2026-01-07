#ifndef UE4SS_SDK_VisibilityComponentBP_HPP
#define UE4SS_SDK_VisibilityComponentBP_HPP

class UVisibilityComponentBP_C : public UVisibilityComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0108 (size: 0x8)
    bool Disable;                                                                     // 0x0110 (size: 0x1)

    void SetVisible(bool visible);
    void ITransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void ITransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void ITransitionTriggerDetectedTarget();
    void ITransitionCompleteSource();
    void ReceiveBeginPlay();
    void CustomEvent_0(FName LevelName, bool visible);
    void ExecuteUbergraph_VisibilityComponentBP(int32 EntryPoint);
}; // Size: 0x111

#endif
