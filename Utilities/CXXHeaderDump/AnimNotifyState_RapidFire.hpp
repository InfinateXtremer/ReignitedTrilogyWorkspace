#ifndef UE4SS_SDK_AnimNotifyState_RapidFire_HPP
#define UE4SS_SDK_AnimNotifyState_RapidFire_HPP

class UAnimNotifyState_RapidFire_C : public UAnimNotifyState
{

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x30

#endif
