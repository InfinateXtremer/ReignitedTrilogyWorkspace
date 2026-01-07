#ifndef UE4SS_SDK_ILevelTransitionTarget_HPP
#define UE4SS_SDK_ILevelTransitionTarget_HPP

class IILevelTransitionTarget_C : public IInterface
{

    void ITransitionCompleteSource();
    void ITransitionTriggerDetectedTarget();
    void ITransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void ITransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
}; // Size: 0x28

#endif
