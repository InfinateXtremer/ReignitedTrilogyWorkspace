#ifndef UE4SS_SDK_AnimNotify_FootStepEvent_HPP
#define UE4SS_SDK_AnimNotify_FootStepEvent_HPP

class UAnimNotify_FootStepEvent_C : public UAnimNotify
{
    FName FootSocketName;                                                             // 0x0038 (size: 0x8)
    bool IsRightFoot;                                                                 // 0x0040 (size: 0x1)

    FString GetNotifyName();
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x41

#endif
