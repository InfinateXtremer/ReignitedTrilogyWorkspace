#ifndef UE4SS_SDK_LiveLinkInterface_HPP
#define UE4SS_SDK_LiveLinkInterface_HPP

struct FLiveLinkCurveElement
{
    FName CurveName;                                                                  // 0x0000 (size: 0x8)
    float CurveValue;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FLiveLinkFrameData
{
    TArray<FTransform> Transforms;                                                    // 0x0000 (size: 0x10)
    TArray<FLiveLinkCurveElement> CurveElements;                                      // 0x0010 (size: 0x10)
    FLiveLinkWorldTime WorldTime;                                                     // 0x0020 (size: 0x10)
    FLiveLinkMetaData MetaData;                                                       // 0x0030 (size: 0x60)

}; // Size: 0x90

struct FLiveLinkFrameRate
{
    uint32 Numerator;                                                                 // 0x0000 (size: 0x4)
    uint32 Denominator;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FLiveLinkInterpolationSettings
{
    bool bUseInterpolation;                                                           // 0x0000 (size: 0x1)
    float InterpolationOffset;                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FLiveLinkMetaData
{
    TMap<class FName, class FString> StringMetaData;                                  // 0x0000 (size: 0x50)
    FLiveLinkTimeCode SceneTime;                                                      // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FLiveLinkRefSkeleton
{
    TArray<FName> BoneNames;                                                          // 0x0000 (size: 0x10)
    TArray<int32> BoneParents;                                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLiveLinkSubjectName
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLiveLinkTimeCode
{
    int32 Seconds;                                                                    // 0x0000 (size: 0x4)
    int32 Frames;                                                                     // 0x0004 (size: 0x4)
    FLiveLinkFrameRate FrameRate;                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLiveLinkWorldTime
{
    double Time;                                                                      // 0x0000 (size: 0x8)
    double Offset;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

class ULiveLinkSourceFactory : public UObject
{
}; // Size: 0x28

class ULiveLinkSourceSettings : public UObject
{
    FLiveLinkInterpolationSettings InterpolationSettings;                             // 0x0028 (size: 0x8)

}; // Size: 0x30

#endif
