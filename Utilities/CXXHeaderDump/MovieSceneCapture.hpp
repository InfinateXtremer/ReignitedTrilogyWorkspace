#ifndef UE4SS_SDK_MovieSceneCapture_HPP
#define UE4SS_SDK_MovieSceneCapture_HPP

#include "MovieSceneCapture_enums.hpp"

struct FCaptureProtocolID
{
    FName Identifier;                                                                 // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FCaptureResolution
{
    uint32 ResX;                                                                      // 0x0000 (size: 0x4)
    uint32 ResY;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FCompositionGraphCapturePasses
{
    TArray<FString> Value;                                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneCaptureSettings
{
    FDirectoryPath OutputDirectory;                                                   // 0x0000 (size: 0x10)
    TSubclassOf<class AGameModeBase> GameModeOverride;                                // 0x0010 (size: 0x8)
    FString OutputFormat;                                                             // 0x0018 (size: 0x10)
    bool bOverwriteExisting;                                                          // 0x0028 (size: 0x1)
    bool bUseRelativeFrameNumbers;                                                    // 0x0029 (size: 0x1)
    int32 HandleFrames;                                                               // 0x002C (size: 0x4)
    uint8 ZeroPadFrameNumbers;                                                        // 0x0030 (size: 0x1)
    int32 FrameRate;                                                                  // 0x0034 (size: 0x4)
    FCaptureResolution Resolution;                                                    // 0x0038 (size: 0x8)
    bool bEnableTextureStreaming;                                                     // 0x0040 (size: 0x1)
    bool bCinematicEngineScalability;                                                 // 0x0041 (size: 0x1)
    bool bCinematicMode;                                                              // 0x0042 (size: 0x1)
    bool bAllowMovement;                                                              // 0x0043 (size: 0x1)
    bool bAllowTurning;                                                               // 0x0044 (size: 0x1)
    bool bShowPlayer;                                                                 // 0x0045 (size: 0x1)
    bool bShowHUD;                                                                    // 0x0046 (size: 0x1)

}; // Size: 0x48

class IMovieSceneCaptureInterface : public IInterface
{
}; // Size: 0x28

class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
}; // Size: 0x240

class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
}; // Size: 0x28

class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
    FCompositionGraphCapturePasses IncludeRenderPasses;                               // 0x0028 (size: 0x10)
    bool bCaptureFramesInHDR;                                                         // 0x0038 (size: 0x1)
    int32 HDRCompressionQuality;                                                      // 0x003C (size: 0x4)
    TEnumAsByte<EHDRCaptureGamut> CaptureGamut;                                       // 0x0040 (size: 0x1)
    FSoftObjectPath PostProcessingMaterial;                                           // 0x0048 (size: 0x18)

}; // Size: 0x60

class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
}; // Size: 0x30

class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
    int32 CompressionQuality;                                                         // 0x0030 (size: 0x4)

}; // Size: 0x38

class ULevelCapture : public UMovieSceneCapture
{
    bool bAutoStartCapture;                                                           // 0x0238 (size: 0x1)
    FGuid PrerequisiteActorId;                                                        // 0x0244 (size: 0x10)

}; // Size: 0x260

class UMovieSceneCapture : public UObject
{
    FCaptureProtocolID CaptureType;                                                   // 0x0038 (size: 0x8)
    class UMovieSceneCaptureProtocolSettings* ProtocolSettings;                       // 0x0040 (size: 0x8)
    FMovieSceneCaptureSettings Settings;                                              // 0x0048 (size: 0x48)
    bool bUseSeparateProcess;                                                         // 0x0090 (size: 0x1)
    bool bCloseEditorWhenCaptureStarts;                                               // 0x0091 (size: 0x1)
    FString AdditionalCommandLineArguments;                                           // 0x0098 (size: 0x10)
    FString InheritedCommandLineArguments;                                            // 0x00A8 (size: 0x10)

}; // Size: 0x240

class UMovieSceneCaptureEnvironment : public UObject
{

    int32 GetCaptureFrameNumber();
    float GetCaptureElapsedTime();
}; // Size: 0x28

class UMovieSceneCaptureProtocolSettings : public UObject
{
}; // Size: 0x28

class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
    bool bUseCompression;                                                             // 0x0030 (size: 0x1)
    float CompressionQuality;                                                         // 0x0034 (size: 0x4)
    FString VideoCodec;                                                               // 0x0038 (size: 0x10)

}; // Size: 0x48

#endif
