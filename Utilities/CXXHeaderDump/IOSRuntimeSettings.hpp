#ifndef UE4SS_SDK_IOSRuntimeSettings_HPP
#define UE4SS_SDK_IOSRuntimeSettings_HPP

#include "IOSRuntimeSettings_enums.hpp"

struct FIOSBuildResourceDirectory
{
    FString Path;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FIOSBuildResourceFilePath
{
    FString FilePath;                                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

class UIOSRuntimeSettings : public UObject
{
    uint8 bEnableGameCenterSupport;                                                   // 0x0028 (size: 0x1)
    uint8 bEnableCloudKitSupport;                                                     // 0x0028 (size: 0x1)
    uint8 bEnableRemoteNotificationsSupport;                                          // 0x0028 (size: 0x1)
    bool bSupportsMetal;                                                              // 0x002C (size: 0x1)
    bool bSupportsMetalMRT;                                                           // 0x002D (size: 0x1)
    bool bCookPVRTCTextures;                                                          // 0x002E (size: 0x1)
    bool bCookASTCTextures;                                                           // 0x002F (size: 0x1)
    bool bSupportsOpenGLES2;                                                          // 0x0030 (size: 0x1)
    bool EnableRemoteShaderCompile;                                                   // 0x0031 (size: 0x1)
    bool bGeneratedSYMFile;                                                           // 0x0032 (size: 0x1)
    bool bGeneratedSYMBundle;                                                         // 0x0033 (size: 0x1)
    bool bGenerateCrashReportSymbols;                                                 // 0x0034 (size: 0x1)
    bool bGenerateXCArchive;                                                          // 0x0035 (size: 0x1)
    bool bDevForArmV7;                                                                // 0x0036 (size: 0x1)
    bool bDevForArm64;                                                                // 0x0037 (size: 0x1)
    bool bDevForArmV7S;                                                               // 0x0038 (size: 0x1)
    bool bShipForArmV7;                                                               // 0x0039 (size: 0x1)
    bool bShipForArm64;                                                               // 0x003A (size: 0x1)
    bool bShipForArmV7S;                                                              // 0x003B (size: 0x1)
    bool bShipForBitcode;                                                             // 0x003C (size: 0x1)
    FString AdditionalLinkerFlags;                                                    // 0x0040 (size: 0x10)
    FString AdditionalShippingLinkerFlags;                                            // 0x0050 (size: 0x10)
    FString RemoteServerName;                                                         // 0x0060 (size: 0x10)
    bool bUseRSync;                                                                   // 0x0070 (size: 0x1)
    FString RSyncUsername;                                                            // 0x0078 (size: 0x10)
    FIOSBuildResourceDirectory DeltaCopyInstallPath;                                  // 0x0088 (size: 0x10)
    FString SSHPrivateKeyLocation;                                                    // 0x0098 (size: 0x10)
    FIOSBuildResourceFilePath SSHPrivateKeyOverridePath;                              // 0x00A8 (size: 0x10)
    bool bTreatRemoteAsSeparateController;                                            // 0x00B8 (size: 0x1)
    bool bAllowRemoteRotation;                                                        // 0x00B9 (size: 0x1)
    bool bUseRemoteAsVirtualJoystick;                                                 // 0x00BA (size: 0x1)
    bool bUseRemoteAbsoluteDpadValues;                                                // 0x00BB (size: 0x1)
    uint8 bSupportsPortraitOrientation;                                               // 0x00BC (size: 0x1)
    uint8 bSupportsUpsideDownOrientation;                                             // 0x00BC (size: 0x1)
    uint8 bSupportsLandscapeLeftOrientation;                                          // 0x00BC (size: 0x1)
    uint8 bSupportsLandscapeRightOrientation;                                         // 0x00BC (size: 0x1)
    FString BundleDisplayName;                                                        // 0x00C0 (size: 0x10)
    FString BundleName;                                                               // 0x00D0 (size: 0x10)
    FString BundleIdentifier;                                                         // 0x00E0 (size: 0x10)
    FString VersionInfo;                                                              // 0x00F0 (size: 0x10)
    EPowerUsageFrameRateLock FrameRateLock;                                           // 0x0100 (size: 0x1)
    EIOSVersion MinimumiOSVersion;                                                    // 0x0101 (size: 0x1)
    uint8 bSupportsIPad;                                                              // 0x0104 (size: 0x1)
    uint8 bSupportsIPhone;                                                            // 0x0104 (size: 0x1)
    FString AdditionalPlistData;                                                      // 0x0108 (size: 0x10)
    bool bEnableFacebookSupport;                                                      // 0x0118 (size: 0x1)
    FString FacebookAppID;                                                            // 0x0120 (size: 0x10)
    FString MobileProvision;                                                          // 0x0130 (size: 0x10)
    FString SigningCertificate;                                                       // 0x0140 (size: 0x10)
    bool bAutomaticSigning;                                                           // 0x0150 (size: 0x1)
    FString IOSTeamID;                                                                // 0x0158 (size: 0x10)
    bool bDisableHTTPS;                                                               // 0x0168 (size: 0x1)
    uint8 MaxShaderLanguageVersion;                                                   // 0x0169 (size: 0x1)
    bool UseFastIntrinsics;                                                           // 0x016A (size: 0x1)
    bool EnableMathOptimisations;                                                     // 0x016B (size: 0x1)
    bool bUseIntegratedKeyboard;                                                      // 0x016C (size: 0x1)
    int32 AudioSampleRate;                                                            // 0x0170 (size: 0x4)
    int32 AudioCallbackBufferFrameSize;                                               // 0x0174 (size: 0x4)
    int32 AudioNumBuffersToEnqueue;                                                   // 0x0178 (size: 0x4)
    int32 AudioMaxChannels;                                                           // 0x017C (size: 0x4)
    int32 AudioNumSourceWorkers;                                                      // 0x0180 (size: 0x4)
    FString SpatializationPlugin;                                                     // 0x0188 (size: 0x10)
    FString ReverbPlugin;                                                             // 0x0198 (size: 0x10)
    FString OcclusionPlugin;                                                          // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

#endif
