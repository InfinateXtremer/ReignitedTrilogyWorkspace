#ifndef UE4SS_SDK_LiveLink_HPP
#define UE4SS_SDK_LiveLink_HPP

struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
    FName SubjectName;                                                                // 0x0030 (size: 0x8)
    TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset;                          // 0x0038 (size: 0x8)
    class ULiveLinkRetargetAsset* CurrentRetargetAsset;                               // 0x0040 (size: 0x8)

}; // Size: 0x58

struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
}; // Size: 0x580

struct FLiveLinkRetargetAssetReference
{
    class ULiveLinkRetargetAsset* CurrentRetargetAsset;                               // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLiveLinkVirtualSubject
{
    TArray<FName> Subjects;                                                           // 0x0000 (size: 0x10)
    FGuid Source;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x60

class ULiveLinkDrivenComponent : public UActorComponent
{
    FLiveLinkSubjectName SubjectName;                                                 // 0x00F0 (size: 0x8)
    FName ActorTransformBone;                                                         // 0x00F8 (size: 0x8)
    bool bModifyActorTransform;                                                       // 0x0100 (size: 0x1)
    bool bSetRelativeLocation;                                                        // 0x0101 (size: 0x1)

}; // Size: 0x110

class ULiveLinkInstance : public UAnimInstance
{
}; // Size: 0x3C0

class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{

    void RemapCurveElements(TMap<FName, float>& CurveItems);
    FName GetRemappedCurveName(FName CurveName);
    FName GetRemappedBoneName(FName BoneName);
}; // Size: 0xD0

class ULiveLinkRetargetAsset : public UObject
{
}; // Size: 0x28

#endif
