#ifndef UE4SS_SDK_BP_ModelSwapComponent_HPP
#define UE4SS_SDK_BP_ModelSwapComponent_HPP

class UBP_ModelSwapComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    class USkeletalMesh* SkeletalMesh0;                                               // 0x00F8 (size: 0x8)
    class UMaterialInterface* Material0;                                              // 0x0100 (size: 0x8)
    TArray<class UMaterialInterface*> Materials0;                                     // 0x0108 (size: 0x10)
    UClass* AnimClass0;                                                               // 0x0118 (size: 0x8)
    class USkeletalMesh* SkeletalMesh1;                                               // 0x0120 (size: 0x8)
    class UMaterialInterface* Material1;                                              // 0x0128 (size: 0x8)
    UClass* AnimClass1;                                                               // 0x0130 (size: 0x8)
    class UBlendSpaceBase* Blendspace0;                                               // 0x0138 (size: 0x8)
    TArray<class UMaterialInterface*> Materials1;                                     // 0x0140 (size: 0x10)
    class UBlendSpaceBase* Blendspace1;                                               // 0x0150 (size: 0x8)

    void ReceiveBeginPlay();
    void ActivateModelSwap(int32 ModelIndex);
    void ExecuteUbergraph_BP_ModelSwapComponent(int32 EntryPoint);
}; // Size: 0x158

#endif
