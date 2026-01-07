#ifndef UE4SS_SDK_AnimNotify_ModelSwap_HPP
#define UE4SS_SDK_AnimNotify_ModelSwap_HPP

class UAnimNotify_ModelSwap_C : public UAnimNotify
{
    int32 ModelIndex;                                                                 // 0x0038 (size: 0x4)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x3C

#endif
