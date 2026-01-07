#ifndef UE4SS_SDK_AnimNotifyState_HideThrowable_HPP
#define UE4SS_SDK_AnimNotifyState_HideThrowable_HPP

class UAnimNotifyState_HideThrowable_C : public UAnimNotifyState
{

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x30

#endif
