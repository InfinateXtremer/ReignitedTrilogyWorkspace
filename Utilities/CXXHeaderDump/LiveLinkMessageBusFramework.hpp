#ifndef UE4SS_SDK_LiveLinkMessageBusFramework_HPP
#define UE4SS_SDK_LiveLinkMessageBusFramework_HPP

struct FLiveLinkClearSubject
{
    FName SubjectName;                                                                // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLiveLinkConnectMessage
{
}; // Size: 0x1

struct FLiveLinkHeartbeatMessage
{
}; // Size: 0x1

struct FLiveLinkPingMessage
{
    FGuid PollRequest;                                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLiveLinkPongMessage
{
    FString ProviderName;                                                             // 0x0000 (size: 0x10)
    FString MachineName;                                                              // 0x0010 (size: 0x10)
    FGuid PollRequest;                                                                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLiveLinkSubjectDataMessage
{
    FLiveLinkRefSkeleton RefSkeleton;                                                 // 0x0000 (size: 0x20)
    FName SubjectName;                                                                // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FLiveLinkSubjectFrameMessage
{
    FName SubjectName;                                                                // 0x0000 (size: 0x8)
    TArray<FTransform> Transforms;                                                    // 0x0008 (size: 0x10)
    TArray<FLiveLinkCurveElement> Curves;                                             // 0x0018 (size: 0x10)
    FLiveLinkMetaData MetaData;                                                       // 0x0028 (size: 0x60)
    double Time;                                                                      // 0x0088 (size: 0x8)

}; // Size: 0x90

#endif
