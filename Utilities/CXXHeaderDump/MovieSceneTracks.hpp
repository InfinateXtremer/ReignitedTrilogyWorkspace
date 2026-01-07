#ifndef UE4SS_SDK_MovieSceneTracks_HPP
#define UE4SS_SDK_MovieSceneTracks_HPP

#include "MovieSceneTracks_enums.hpp"

struct FColorParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    int32 Index;                                                                      // 0x0008 (size: 0x4)
    FRichCurve RedCurve;                                                              // 0x0010 (size: 0x70)
    FRichCurve GreenCurve;                                                            // 0x0080 (size: 0x70)
    FRichCurve BlueCurve;                                                             // 0x00F0 (size: 0x70)
    FRichCurve AlphaCurve;                                                            // 0x0160 (size: 0x70)

}; // Size: 0x1D0

struct FEventPayload
{
    FName EventName;                                                                  // 0x0000 (size: 0x8)
    FMovieSceneEventParameters Parameters;                                            // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID AttachBindingID;                                       // 0x0020 (size: 0x18)
    FName AttachSocketName;                                                           // 0x0038 (size: 0x8)
    FName AttachComponentName;                                                        // 0x0040 (size: 0x8)
    EAttachmentRule AttachmentLocationRule;                                           // 0x0048 (size: 0x1)
    EAttachmentRule AttachmentRotationRule;                                           // 0x0049 (size: 0x1)
    EAttachmentRule AttachmentScaleRule;                                              // 0x004A (size: 0x1)
    EDetachmentRule DetachmentLocationRule;                                           // 0x004B (size: 0x1)
    EDetachmentRule DetachmentRotationRule;                                           // 0x004C (size: 0x1)
    EDetachmentRule DetachmentScaleRule;                                              // 0x004D (size: 0x1)

}; // Size: 0x50

struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    float Time;                                                                       // 0x0014 (size: 0x4)

}; // Size: 0x30

struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID PathBindingID;                                         // 0x0020 (size: 0x18)
    FRichCurve TimingCurve;                                                           // 0x0038 (size: 0x70)
    MovieScene3DPathSection_Axis FrontAxisEnum;                                       // 0x00A8 (size: 0x1)
    MovieScene3DPathSection_Axis UpAxisEnum;                                          // 0x00A9 (size: 0x1)
    uint8 bFollow;                                                                    // 0x00AC (size: 0x1)
    uint8 bReverse;                                                                   // 0x00AC (size: 0x1)
    uint8 bForceUpright;                                                              // 0x00AC (size: 0x1)

}; // Size: 0xB0

struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
    FRotator Rotation;                                                                // 0x0008 (size: 0xC)
    float Time;                                                                       // 0x0014 (size: 0x4)

}; // Size: 0x30

struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
    FVector Scale;                                                                    // 0x0008 (size: 0xC)
    float Time;                                                                       // 0x0014 (size: 0x4)

}; // Size: 0x30

struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FRotator Rotation;                                                                // 0x0014 (size: 0xC)
    FVector Scale;                                                                    // 0x0020 (size: 0xC)
    float Time;                                                                       // 0x002C (size: 0x4)

}; // Size: 0x78

struct FMovieScene3DTransformTemplateData
{
    FRichCurve TranslationCurve;                                                      // 0x0000 (size: 0x150)
    FRichCurve RotationCurve;                                                         // 0x0150 (size: 0x150)
    FRichCurve ScaleCurve;                                                            // 0x02A0 (size: 0x150)
    FRichCurve ManualWeight;                                                          // 0x03F0 (size: 0x70)
    EMovieSceneBlendType BlendType;                                                   // 0x0460 (size: 0x1)
    FMovieSceneTransformMask Mask;                                                    // 0x0464 (size: 0x4)

}; // Size: 0x468

struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;                                      // 0x0020 (size: 0x28)
    FIntegralCurve ActorGuidIndexCurve;                                               // 0x0048 (size: 0x70)
    TArray<FGuid> ActorGuids;                                                         // 0x00B8 (size: 0x10)

}; // Size: 0xC8

struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{
}; // Size: 0x20

struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneAudioSectionTemplateData AudioData;                                    // 0x0020 (size: 0x140)

}; // Size: 0x160

struct FMovieSceneAudioSectionTemplateData
{
    class USoundBase* Sound;                                                          // 0x0000 (size: 0x8)
    float AudioStartOffset;                                                           // 0x0008 (size: 0x4)
    FFloatRange AudioRange;                                                           // 0x000C (size: 0x10)
    FRichCurve AudioPitchMultiplierCurve;                                             // 0x0020 (size: 0x70)
    FRichCurve AudioVolumeCurve;                                                      // 0x0090 (size: 0x70)
    int32 RowIndex;                                                                   // 0x0100 (size: 0x4)
    bool bOverrideAttenuation;                                                        // 0x0104 (size: 0x1)
    class USoundAttenuation* AttenuationSettings;                                     // 0x0108 (size: 0x8)
    FMovieSceneAudioSectionTemplateDataOnQueueSubtitles OnQueueSubtitles;             // 0x0110 (size: 0x10)
    void OnQueueSubtitles(const TArray<FSubtitleCue>& Subtitles, float CueDuration);
    FMovieSceneAudioSectionTemplateDataOnAudioFinished OnAudioFinished;               // 0x0120 (size: 0x10)
    FMovieSceneAudioSectionTemplateDataOnAudioPlaybackPercent OnAudioPlaybackPercent; // 0x0130 (size: 0x10)

}; // Size: 0x140

struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FIntegralCurve BoolCurve;                                                         // 0x0048 (size: 0x70)

}; // Size: 0xB8

struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FIntegralCurve ByteCurve;                                                         // 0x0048 (size: 0x70)

}; // Size: 0xB8

struct FMovieSceneCameraAnimSectionData
{
    class UCameraAnim* CameraAnim;                                                    // 0x0000 (size: 0x8)
    float PlayRate;                                                                   // 0x0008 (size: 0x4)
    float PlayScale;                                                                  // 0x000C (size: 0x4)
    float BlendInTime;                                                                // 0x0010 (size: 0x4)
    float BlendOutTime;                                                               // 0x0014 (size: 0x4)
    bool bLooping;                                                                    // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
    FMovieSceneCameraAnimSectionData SourceData;                                      // 0x0020 (size: 0x20)
    float SectionStartTime;                                                           // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID CameraBindingID;                                       // 0x0020 (size: 0x18)
    FTransform CutTransform;                                                          // 0x0040 (size: 0x30)
    bool bHasCutTransform;                                                            // 0x0070 (size: 0x1)

}; // Size: 0x80

struct FMovieSceneCameraShakeSectionData
{
    TSubclassOf<class UCameraShake> ShakeClass;                                       // 0x0000 (size: 0x8)
    float PlayScale;                                                                  // 0x0008 (size: 0x4)
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;                                // 0x000C (size: 0x1)
    FRotator UserDefinedPlaySpace;                                                    // 0x0010 (size: 0xC)

}; // Size: 0x20

struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
    FMovieSceneCameraShakeSectionData SourceData;                                     // 0x0020 (size: 0x20)
    float SectionStartTime;                                                           // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
    FLinearColor Color;                                                               // 0x0008 (size: 0x10)
    float Time;                                                                       // 0x0018 (size: 0x4)

}; // Size: 0x60

struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
    FRichCurve Curves;                                                                // 0x0048 (size: 0x1C0)
    EMovieSceneBlendType BlendType;                                                   // 0x0208 (size: 0x1)

}; // Size: 0x210

struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
    int32 MaterialIndex;                                                              // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScene3DTransformTemplateData TemplateData;                                  // 0x0020 (size: 0x468)

}; // Size: 0x488

struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FIntegralCurve EnumCurve;                                                         // 0x0048 (size: 0x70)

}; // Size: 0xB8

struct FMovieSceneEventParameters
{
}; // Size: 0x28

struct FMovieSceneEventSectionData
{
    TArray<float> KeyTimes;                                                           // 0x0000 (size: 0x10)
    TArray<FEventPayload> keyValues;                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneEventSectionData EventData;                                            // 0x0020 (size: 0x20)
    TArray<FMovieSceneObjectBindingID> EventReceivers;                                // 0x0040 (size: 0x10)
    uint8 bFireEventsWhenForwards;                                                    // 0x0050 (size: 0x1)
    uint8 bFireEventsWhenBackwards;                                                   // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
    FRichCurve FadeCurve;                                                             // 0x0020 (size: 0x70)
    FLinearColor FadeColor;                                                           // 0x0090 (size: 0x10)
    uint8 bFadeAudio;                                                                 // 0x00A0 (size: 0x1)

}; // Size: 0xA8

struct FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FRichCurve FloatCurve;                                                            // 0x0048 (size: 0x70)
    EMovieSceneBlendType BlendType;                                                   // 0x00B8 (size: 0x1)

}; // Size: 0xC0

struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FIntegralCurve IntegerCurve;                                                      // 0x0048 (size: 0x70)
    EMovieSceneBlendType BlendType;                                                   // 0x00B8 (size: 0x1)

}; // Size: 0xC0

struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
    ELevelVisibility Visibility;                                                      // 0x0020 (size: 0x1)
    TArray<FName> LevelNames;                                                         // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
    class UMaterialParameterCollection* MPC;                                          // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
    TArray<FScalarParameterNameAndCurve> Scalars;                                     // 0x0020 (size: 0x10)
    TArray<FVectorParameterNameAndCurves> Vectors;                                    // 0x0030 (size: 0x10)
    TArray<FColorParameterNameAndCurves> Colors;                                      // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
}; // Size: 0x50

struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
    FIntegralCurve ParticleKeys;                                                      // 0x0020 (size: 0x70)

}; // Size: 0x90

struct FMovieSceneSkeletalAnimationParams
{
    class UAnimSequenceBase* Animation;                                               // 0x0000 (size: 0x8)
    float StartOffset;                                                                // 0x0008 (size: 0x4)
    float EndOffset;                                                                  // 0x000C (size: 0x4)
    float PlayRate;                                                                   // 0x0010 (size: 0x4)
    uint8 bReverse;                                                                   // 0x0014 (size: 0x1)
    FName SlotName;                                                                   // 0x0018 (size: 0x8)
    FRichCurve Weight;                                                                // 0x0020 (size: 0x70)

}; // Size: 0x90

struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                     // 0x0020 (size: 0x98)

}; // Size: 0xB8

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
    float SectionStartTime;                                                           // 0x0090 (size: 0x4)
    float SectionEndTime;                                                             // 0x0094 (size: 0x4)

}; // Size: 0x98

struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
    FRichCurve SlomoCurve;                                                            // 0x0020 (size: 0x70)

}; // Size: 0x90

struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
    FIntegralCurve Curve;                                                             // 0x0020 (size: 0x70)

}; // Size: 0x90

struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FStringCurve StringCurve;                                                         // 0x0048 (size: 0x78)

}; // Size: 0xC0

struct FMovieSceneTransformMask
{
    uint32 Mask;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieScene3DTransformTemplateData TemplateData;                                  // 0x0048 (size: 0x468)

}; // Size: 0x4B0

struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector2D Vector;                                                                 // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector4 Vector;                                                                  // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector Vector;                                                                   // 0x0050 (size: 0xC)

}; // Size: 0x60

struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
    float Time;                                                                       // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FRichCurve ComponentCurves;                                                       // 0x0048 (size: 0x1C0)
    int32 NumChannelsUsed;                                                            // 0x0208 (size: 0x4)
    EMovieSceneBlendType BlendType;                                                   // 0x020C (size: 0x1)

}; // Size: 0x210

struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
    bool bTemporarilyHiddenInGame;                                                    // 0x00B8 (size: 0x1)

}; // Size: 0xC0

struct FScalarParameterNameAndCurve
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    int32 Index;                                                                      // 0x0008 (size: 0x4)
    FRichCurve ParameterCurve;                                                        // 0x0010 (size: 0x70)

}; // Size: 0x80

struct FVectorParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    int32 Index;                                                                      // 0x0008 (size: 0x4)
    FRichCurve XCurve;                                                                // 0x0010 (size: 0x70)
    FRichCurve YCurve;                                                                // 0x0080 (size: 0x70)
    FRichCurve ZCurve;                                                                // 0x00F0 (size: 0x70)

}; // Size: 0x160

class IMovieSceneTransformOrigin : public IInterface
{

    FTransform BP_GetTransformOrigin();
}; // Size: 0x28

class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
    FName AttachSocketName;                                                           // 0x0138 (size: 0x8)
    FName AttachComponentName;                                                        // 0x0140 (size: 0x8)
    EAttachmentRule AttachmentLocationRule;                                           // 0x0148 (size: 0x1)
    EAttachmentRule AttachmentRotationRule;                                           // 0x0149 (size: 0x1)
    EAttachmentRule AttachmentScaleRule;                                              // 0x014A (size: 0x1)
    EDetachmentRule DetachmentLocationRule;                                           // 0x014B (size: 0x1)
    EDetachmentRule DetachmentRotationRule;                                           // 0x014C (size: 0x1)
    EDetachmentRule DetachmentScaleRule;                                              // 0x014D (size: 0x1)

}; // Size: 0x150

class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
}; // Size: 0xD0

class UMovieScene3DConstraintSection : public UMovieSceneSection
{
    FGuid ConstraintId;                                                               // 0x0110 (size: 0x10)
    FMovieSceneObjectBindingID ConstraintBindingID;                                   // 0x0120 (size: 0x18)

}; // Size: 0x140

class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> ConstraintSections;                             // 0x00B8 (size: 0x10)

}; // Size: 0xD0

class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
    FRichCurve TimingCurve;                                                           // 0x0138 (size: 0x70)
    MovieScene3DPathSection_Axis FrontAxisEnum;                                       // 0x01A8 (size: 0x1)
    MovieScene3DPathSection_Axis UpAxisEnum;                                          // 0x01A9 (size: 0x1)
    uint8 bFollow;                                                                    // 0x01AC (size: 0x1)
    uint8 bReverse;                                                                   // 0x01AC (size: 0x1)
    uint8 bForceUpright;                                                              // 0x01AC (size: 0x1)

}; // Size: 0x1B0

class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
}; // Size: 0xD0

class UMovieScene3DTransformSection : public UMovieSceneSection
{
    FMovieSceneTransformMask TransformMask;                                           // 0x0118 (size: 0x4)
    FRichCurve Translation;                                                           // 0x0120 (size: 0x150)
    FRichCurve Rotation;                                                              // 0x0270 (size: 0x150)
    FRichCurve Scale;                                                                 // 0x03C0 (size: 0x150)
    FRichCurve ManualWeight;                                                          // 0x0510 (size: 0x70)

}; // Size: 0x580

class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xE0

class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
    FIntegralCurve ActorGuidIndexCurve;                                               // 0x0118 (size: 0x70)
    TArray<FString> ActorGuidStrings;                                                 // 0x0198 (size: 0x10)

}; // Size: 0x1B0

class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xE0

class UMovieSceneAudioSection : public UMovieSceneSection
{
    class USoundBase* Sound;                                                          // 0x0110 (size: 0x8)
    float StartOffset;                                                                // 0x0118 (size: 0x4)
    float AudioStartTime;                                                             // 0x011C (size: 0x4)
    float AudioDilationFactor;                                                        // 0x0120 (size: 0x4)
    float AudioVolume;                                                                // 0x0124 (size: 0x4)
    FRichCurve SoundVolume;                                                           // 0x0128 (size: 0x70)
    FRichCurve PitchMultiplier;                                                       // 0x0198 (size: 0x70)
    bool bSuppressSubtitles;                                                          // 0x0208 (size: 0x1)
    bool bOverrideAttenuation;                                                        // 0x0209 (size: 0x1)
    class USoundAttenuation* AttenuationSettings;                                     // 0x0210 (size: 0x8)
    FMovieSceneAudioSectionOnQueueSubtitles OnQueueSubtitles;                         // 0x0218 (size: 0x10)
    void OnQueueSubtitles(const TArray<FSubtitleCue>& Subtitles, float CueDuration);
    FMovieSceneAudioSectionOnAudioFinished OnAudioFinished;                           // 0x0228 (size: 0x10)
    FMovieSceneAudioSectionOnAudioPlaybackPercent OnAudioPlaybackPercent;             // 0x0238 (size: 0x10)

}; // Size: 0x250

class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AudioSections;                                  // 0x00B8 (size: 0x10)

}; // Size: 0xD0

class UMovieSceneBoolSection : public UMovieSceneSection
{
    bool DefaultValue;                                                                // 0x0118 (size: 0x1)
    FIntegralCurve BoolCurve;                                                         // 0x0120 (size: 0x70)

}; // Size: 0x190

class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xE0

class UMovieSceneByteSection : public UMovieSceneSection
{
    FIntegralCurve ByteCurve;                                                         // 0x0118 (size: 0x70)

}; // Size: 0x190

class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;                                                                // 0x00E0 (size: 0x8)

}; // Size: 0xF0

class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
    FMovieSceneCameraAnimSectionData AnimData;                                        // 0x0110 (size: 0x20)
    class UCameraAnim* CameraAnim;                                                    // 0x0130 (size: 0x8)
    float PlayRate;                                                                   // 0x0138 (size: 0x4)
    float PlayScale;                                                                  // 0x013C (size: 0x4)
    float BlendInTime;                                                                // 0x0140 (size: 0x4)
    float BlendOutTime;                                                               // 0x0144 (size: 0x4)
    bool bLooping;                                                                    // 0x0148 (size: 0x1)

}; // Size: 0x150

class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraAnimSections;                             // 0x00B8 (size: 0x10)

}; // Size: 0xD0

class UMovieSceneCameraCutSection : public UMovieSceneSection
{
    FGuid CameraGuid;                                                                 // 0x0110 (size: 0x10)
    FMovieSceneObjectBindingID CameraBindingID;                                       // 0x0120 (size: 0x18)

}; // Size: 0x140

class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00B8 (size: 0x10)

}; // Size: 0xD0

class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSectionData ShakeData;                                      // 0x0110 (size: 0x20)
    TSubclassOf<class UCameraShake> ShakeClass;                                       // 0x0130 (size: 0x8)
    float PlayScale;                                                                  // 0x0138 (size: 0x4)
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;                                // 0x013C (size: 0x1)
    FRotator UserDefinedPlaySpace;                                                    // 0x0140 (size: 0xC)

}; // Size: 0x150

class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraShakeSections;                            // 0x00B8 (size: 0x10)

}; // Size: 0xD0

class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
    FString ShotDisplayName;                                                          // 0x0178 (size: 0x10)
    FText DisplayName;                                                                // 0x0188 (size: 0x18)

}; // Size: 0x1A0

class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
}; // Size: 0xD0

class UMovieSceneColorSection : public UMovieSceneSection
{
    FRichCurve RedCurve;                                                              // 0x0118 (size: 0x70)
    FRichCurve GreenCurve;                                                            // 0x0188 (size: 0x70)
    FRichCurve BlueCurve;                                                             // 0x01F8 (size: 0x70)
    FRichCurve AlphaCurve;                                                            // 0x0268 (size: 0x70)

}; // Size: 0x2E0

class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
    bool bIsSlateColor;                                                               // 0x00E0 (size: 0x1)

}; // Size: 0xF0

class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
    int32 MaterialIndex;                                                              // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UMovieSceneEnumSection : public UMovieSceneSection
{
    FIntegralCurve EnumCurve;                                                         // 0x0118 (size: 0x70)

}; // Size: 0x190

class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;                                                                // 0x00E0 (size: 0x8)

}; // Size: 0xF0

class UMovieSceneEventSection : public UMovieSceneSection
{
    FNameCurve Events;                                                                // 0x0110 (size: 0x68)
    FMovieSceneEventSectionData EventData;                                            // 0x0178 (size: 0x20)

}; // Size: 0x220

class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
    uint8 bFireEventsWhenForwards;                                                    // 0x00B8 (size: 0x1)
    uint8 bFireEventsWhenBackwards;                                                   // 0x00B8 (size: 0x1)
    EFireEventsAtPosition EventPosition;                                              // 0x00BC (size: 0x1)
    TArray<FMovieSceneObjectBindingID> EventReceivers;                                // 0x00C0 (size: 0x10)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00D0 (size: 0x10)

}; // Size: 0xE0

class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
    FLinearColor FadeColor;                                                           // 0x0188 (size: 0x10)
    uint8 bFadeAudio;                                                                 // 0x0198 (size: 0x1)

}; // Size: 0x1A0

class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
}; // Size: 0xE0

class UMovieSceneFloatSection : public UMovieSceneSection
{
    FRichCurve FloatCurve;                                                            // 0x0118 (size: 0x70)

}; // Size: 0x190

class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xE0

class UMovieSceneIntegerSection : public UMovieSceneSection
{
    FIntegralCurve IntegerCurve;                                                      // 0x0118 (size: 0x70)

}; // Size: 0x190

class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xE0

class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
    ELevelVisibility Visibility;                                                      // 0x0110 (size: 0x1)
    TArray<FName> LevelNames;                                                         // 0x0118 (size: 0x10)

}; // Size: 0x130

class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00B8 (size: 0x10)

}; // Size: 0xD0

class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
    class UMaterialParameterCollection* MPC;                                          // 0x00C8 (size: 0x8)

}; // Size: 0xD0

class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00B8 (size: 0x10)

}; // Size: 0xD0

class UMovieSceneParameterSection : public UMovieSceneSection
{
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;               // 0x0110 (size: 0x10)
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;              // 0x0120 (size: 0x10)
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;                // 0x0130 (size: 0x10)

}; // Size: 0x140

class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00B8 (size: 0x10)

}; // Size: 0xD0

class UMovieSceneParticleSection : public UMovieSceneSection
{
    FIntegralCurve ParticleKeys;                                                      // 0x0110 (size: 0x70)

}; // Size: 0x180

class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> ParticleSections;                               // 0x00B8 (size: 0x10)

}; // Size: 0xD0

class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
    FName PropertyName;                                                               // 0x00B8 (size: 0x8)
    FString PropertyPath;                                                             // 0x00C0 (size: 0x10)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00D0 (size: 0x10)

}; // Size: 0xE0

class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
    FMovieSceneSkeletalAnimationParams Params;                                        // 0x0110 (size: 0x90)
    class UAnimSequence* AnimSequence;                                                // 0x01A0 (size: 0x8)
    class UAnimSequenceBase* Animation;                                               // 0x01A8 (size: 0x8)
    float StartOffset;                                                                // 0x01B0 (size: 0x4)
    float EndOffset;                                                                  // 0x01B4 (size: 0x4)
    float PlayRate;                                                                   // 0x01B8 (size: 0x4)
    uint8 bReverse;                                                                   // 0x01BC (size: 0x1)
    FName SlotName;                                                                   // 0x01C0 (size: 0x8)

}; // Size: 0x1D0

class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;                              // 0x00B8 (size: 0x10)
    bool bUseLegacySectionIndexBlend;                                                 // 0x00C8 (size: 0x1)

}; // Size: 0xD0

class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
}; // Size: 0x190

class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
}; // Size: 0xE0

class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
}; // Size: 0x190

class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00B8 (size: 0x10)
    FGuid ObjectGuid;                                                                 // 0x00C8 (size: 0x10)

}; // Size: 0xE0

class UMovieSceneStringSection : public UMovieSceneSection
{
    FStringCurve StringCurve;                                                         // 0x0118 (size: 0x78)

}; // Size: 0x190

class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xE0

class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xE0

class UMovieSceneVectorSection : public UMovieSceneSection
{
    FRichCurve Curves;                                                                // 0x0118 (size: 0x1C0)
    int32 ChannelsUsed;                                                               // 0x02D8 (size: 0x4)

}; // Size: 0x2E0

class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
    int32 NumChannelsUsed;                                                            // 0x00E0 (size: 0x4)

}; // Size: 0xF0

class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
}; // Size: 0xE0

#endif
