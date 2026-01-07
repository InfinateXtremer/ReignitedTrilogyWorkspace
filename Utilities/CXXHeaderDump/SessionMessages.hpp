#ifndef UE4SS_SDK_SessionMessages_HPP
#define UE4SS_SDK_SessionMessages_HPP

struct FSessionServiceLog
{
    FName Category;                                                                   // 0x0000 (size: 0x8)
    FString Data;                                                                     // 0x0008 (size: 0x10)
    FGuid InstanceId;                                                                 // 0x0018 (size: 0x10)
    double TimeSeconds;                                                               // 0x0028 (size: 0x8)
    uint8 Verbosity;                                                                  // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FSessionServiceLogSubscribe
{
}; // Size: 0x1

struct FSessionServiceLogUnsubscribe
{
}; // Size: 0x1

struct FSessionServicePing
{
    FString UserName;                                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSessionServicePong
{
    bool Authorized;                                                                  // 0x0000 (size: 0x1)
    FString BuildDate;                                                                // 0x0008 (size: 0x10)
    FString DeviceName;                                                               // 0x0018 (size: 0x10)
    FGuid InstanceId;                                                                 // 0x0028 (size: 0x10)
    FString InstanceName;                                                             // 0x0038 (size: 0x10)
    bool IsConsoleBuild;                                                              // 0x0048 (size: 0x1)
    FString PlatformName;                                                             // 0x0050 (size: 0x10)
    FGuid SessionId;                                                                  // 0x0060 (size: 0x10)
    FString SessionName;                                                              // 0x0070 (size: 0x10)
    FString SessionOwner;                                                             // 0x0080 (size: 0x10)
    bool Standalone;                                                                  // 0x0090 (size: 0x1)

}; // Size: 0x98

#endif
