#ifndef UE4SS_SDK_MovieScene_HPP
#define UE4SS_SDK_MovieScene_HPP

#include "MovieScene_enums.hpp"

struct FMovieSceneBinding
{
    FGuid ObjectGuid;                                                                 // 0x0000 (size: 0x10)
    FString BindingName;                                                              // 0x0010 (size: 0x10)
    TArray<class UMovieSceneTrack*> Tracks;                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMovieSceneBindingOverrideData
{
    FMovieSceneObjectBindingID ObjectBindingId;                                       // 0x0000 (size: 0x18)
    TWeakObjectPtr<class UObject> Object;                                             // 0x0018 (size: 0x8)
    bool bOverridesDefault;                                                           // 0x0020 (size: 0x1)

}; // Size: 0x24

struct FMovieSceneEasingSettings
{
    float AutoEaseInTime;                                                             // 0x0000 (size: 0x4)
    float AutoEaseOutTime;                                                            // 0x0004 (size: 0x4)
    TScriptInterface<class IMovieSceneEasingFunction> EaseIn;                         // 0x0008 (size: 0x10)
    bool bManualEaseIn;                                                               // 0x0018 (size: 0x1)
    float ManualEaseInTime;                                                           // 0x001C (size: 0x4)
    TScriptInterface<class IMovieSceneEasingFunction> EaseOut;                        // 0x0020 (size: 0x10)
    bool bManualEaseOut;                                                              // 0x0030 (size: 0x1)
    float ManualEaseOutTime;                                                          // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FMovieSceneEditorData
{
    TMap<class FString, class FMovieSceneExpansionState> ExpansionStates;             // 0x0000 (size: 0x50)
    FFloatRange WorkingRange;                                                         // 0x0050 (size: 0x10)
    FFloatRange ViewRange;                                                            // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FMovieSceneEmptyStruct
{
}; // Size: 0x1

struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
    EMovieSceneCompletionMode CompletionMode;                                         // 0x0010 (size: 0x1)
    class UMovieSceneSection* SourceSection;                                          // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FMovieSceneEvalTemplateBase
{
}; // Size: 0x10

struct FMovieSceneEvalTemplatePtr
{
}; // Size: 0x38

struct FMovieSceneEvaluationField
{
    FGuid Signature;                                                                  // 0x0000 (size: 0x10)
    TArray<FFloatRange> Ranges;                                                       // 0x0010 (size: 0x10)
    TArray<FMovieSceneEvaluationGroup> Groups;                                        // 0x0020 (size: 0x10)
    TArray<FMovieSceneEvaluationMetaData> MetaData;                                   // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
    FMovieSceneSegmentIdentifier SegmentID;                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMovieSceneEvaluationFieldTrackPtr
{
    FMovieSceneSequenceID SequenceID;                                                 // 0x0000 (size: 0x4)
    FMovieSceneTrackIdentifier TrackIdentifier;                                       // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovieSceneEvaluationGroup
{
    TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices;                            // 0x0000 (size: 0x10)
    TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;                       // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMovieSceneEvaluationGroupLUTIndex
{
    int32 LUTOffset;                                                                  // 0x0000 (size: 0x4)
    int32 NumInitPtrs;                                                                // 0x0004 (size: 0x4)
    int32 NumEvalPtrs;                                                                // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMovieSceneEvaluationKey
{
    FMovieSceneSequenceID SequenceID;                                                 // 0x0000 (size: 0x4)
    FMovieSceneTrackIdentifier TrackIdentifier;                                       // 0x0004 (size: 0x4)
    uint32 SectionIndex;                                                              // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMovieSceneEvaluationMetaData
{
    TArray<FMovieSceneSequenceID> ActiveSequences;                                    // 0x0000 (size: 0x10)
    TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities;                           // 0x0010 (size: 0x10)
    TMap<class FMovieSceneSequenceID, class FGuid> SubSequenceSignatures;             // 0x0020 (size: 0x50)

}; // Size: 0x70

struct FMovieSceneEvaluationOperand
{
    FGuid ObjectBindingId;                                                            // 0x0000 (size: 0x10)
    FMovieSceneSequenceID SequenceID;                                                 // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FMovieSceneEvaluationTemplate
{
    TMap<class FMovieSceneTrackIdentifier, class FMovieSceneEvaluationTrack> Tracks;  // 0x0000 (size: 0x50)
    FMovieSceneEvaluationField EvaluationField;                                       // 0x00A0 (size: 0x40)
    FMovieSceneSequenceHierarchy Hierarchy;                                           // 0x00E0 (size: 0xA0)
    FGuid SequenceSignature;                                                          // 0x0180 (size: 0x10)
    FMovieSceneTemplateGenerationLedger TemplateLedger;                               // 0x0190 (size: 0xA8)
    FMovieSceneTrackFieldData TrackFieldData;                                         // 0x0238 (size: 0x60)
    FMovieSceneSubSectionFieldData SubSectionFieldData;                               // 0x0298 (size: 0x60)

}; // Size: 0x2F8

struct FMovieSceneEvaluationTrack
{
    FGuid ObjectBindingId;                                                            // 0x0000 (size: 0x10)
    uint16 EvaluationPriority;                                                        // 0x0010 (size: 0x2)
    EEvaluationMethod EvaluationMethod;                                               // 0x0012 (size: 0x1)
    FMovieSceneEvaluationTrackSegments Segments;                                      // 0x0018 (size: 0x20)
    class UMovieSceneTrack* SourceTrack;                                              // 0x0038 (size: 0x8)
    FSectionEvaluationDataTree EvaluationTree;                                        // 0x0040 (size: 0x60)
    TArray<FMovieSceneEvalTemplatePtr> ChildTemplates;                                // 0x00A0 (size: 0x10)
    FMovieSceneTrackImplementationPtr TrackTemplate;                                  // 0x00B0 (size: 0x38)
    FName EvaluationGroup;                                                            // 0x00E8 (size: 0x8)
    uint8 bEvaluateInPreroll;                                                         // 0x00F0 (size: 0x1)
    uint8 bEvaluateInPostroll;                                                        // 0x00F0 (size: 0x1)

}; // Size: 0xF8

struct FMovieSceneEvaluationTrackSegments
{
    TArray<int32> SegmentIdentifierToIndex;                                           // 0x0000 (size: 0x10)
    TArray<FMovieSceneSegment> SortedSegments;                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMovieSceneExpansionState
{
    bool bExpanded;                                                                   // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FMovieSceneKeyStruct
{
}; // Size: 0x8

struct FMovieSceneObjectBindingID
{
    int32 SequenceID;                                                                 // 0x0000 (size: 0x4)
    EMovieSceneObjectBindingSpace Space;                                              // 0x0004 (size: 0x1)
    FGuid Guid;                                                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMovieSceneOrderedEvaluationKey
{
    FMovieSceneEvaluationKey Key;                                                     // 0x0000 (size: 0xC)
    uint32 EvaluationIndex;                                                           // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMovieScenePossessable
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    UClass* PossessedObjectClass;                                                     // 0x0020 (size: 0x8)
    FGuid ParentGuid;                                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FMovieScenePropertySectionData
{
    FName PropertyName;                                                               // 0x0000 (size: 0x8)
    FString PropertyPath;                                                             // 0x0008 (size: 0x10)
    FName FunctionName;                                                               // 0x0018 (size: 0x8)
    FName NotifyFunctionName;                                                         // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;                                      // 0x0020 (size: 0x28)

}; // Size: 0x48

struct FMovieSceneSectionEvalOptions
{
    bool bCanEditCompletionMode;                                                      // 0x0000 (size: 0x1)
    EMovieSceneCompletionMode CompletionMode;                                         // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FMovieSceneSectionParameters
{
    float StartOffset;                                                                // 0x0000 (size: 0x4)
    float TimeScale;                                                                  // 0x0004 (size: 0x4)
    int32 HierarchicalBias;                                                           // 0x0008 (size: 0x4)
    float PrerollTime;                                                                // 0x000C (size: 0x4)
    float PostrollTime;                                                               // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FMovieSceneSegment
{
}; // Size: 0x58

struct FMovieSceneSegmentIdentifier
{
    int32 IdentifierIndex;                                                            // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneSequenceHierarchy
{
    TMap<class FMovieSceneSequenceID, class FMovieSceneSubSequenceData> SubSequences; // 0x0000 (size: 0x50)
    TMap<class FMovieSceneSequenceID, class FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FMovieSceneSequenceHierarchyNode
{
    FMovieSceneSequenceID ParentID;                                                   // 0x0000 (size: 0x4)
    TArray<FMovieSceneSequenceID> Children;                                           // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMovieSceneSequenceID
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneSequenceInstanceData
{
}; // Size: 0x8

struct FMovieSceneSequenceInstanceDataPtr
{
}; // Size: 0x18

struct FMovieSceneSequencePlaybackSettings
{
    int32 LoopCount;                                                                  // 0x0000 (size: 0x4)
    float PlayRate;                                                                   // 0x0004 (size: 0x4)
    bool bRandomStartTime;                                                            // 0x0008 (size: 0x1)
    float StartTime;                                                                  // 0x000C (size: 0x4)
    bool bRestoreState;                                                               // 0x0010 (size: 0x1)
    bool bDisableMovementInput;                                                       // 0x0011 (size: 0x1)
    bool bDisableLookAtInput;                                                         // 0x0012 (size: 0x1)
    bool bHidePlayer;                                                                 // 0x0013 (size: 0x1)
    bool bHideHud;                                                                    // 0x0014 (size: 0x1)
    bool bDisableCameraCuts;                                                          // 0x0015 (size: 0x1)
    class UObject* InstanceData;                                                      // 0x0018 (size: 0x8)
    TScriptInterface<class IMovieSceneBindingOverridesInterface> BindingOverrides;    // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMovieSceneSequenceTransform
{
    float TimeScale;                                                                  // 0x0000 (size: 0x4)
    float Offset;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovieSceneSpawnable
{
    FTransform SpawnTransform;                                                        // 0x0000 (size: 0x30)
    FGuid Guid;                                                                       // 0x0030 (size: 0x10)
    FString Name;                                                                     // 0x0040 (size: 0x10)
    class UObject* ObjectTemplate;                                                    // 0x0050 (size: 0x8)
    TArray<FGuid> ChildPossessables;                                                  // 0x0058 (size: 0x10)
    ESpawnOwnership Ownership;                                                        // 0x0068 (size: 0x1)

}; // Size: 0x70

struct FMovieSceneSubSectionData
{
    TWeakObjectPtr<class UMovieSceneSubSection> Section;                              // 0x0000 (size: 0x8)
    FGuid ObjectBindingId;                                                            // 0x0008 (size: 0x10)
    ESectionEvaluationFlags Flags;                                                    // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FMovieSceneSubSectionFieldData
{
}; // Size: 0x60

struct FMovieSceneSubSequenceData
{
    FSoftObjectPath Sequence;                                                         // 0x0000 (size: 0x18)
    FMovieSceneSequenceTransform RootToSequenceTransform;                             // 0x0018 (size: 0x8)
    FMovieSceneSequenceID DeterministicSequenceID;                                    // 0x0020 (size: 0x4)
    FFloatRange PlayRange;                                                            // 0x0024 (size: 0x10)
    FFloatRange PreRollRange;                                                         // 0x0034 (size: 0x10)
    FFloatRange PostRollRange;                                                        // 0x0044 (size: 0x10)
    int32 HierarchicalBias;                                                           // 0x0054 (size: 0x4)
    FMovieSceneSequenceInstanceDataPtr InstanceData;                                  // 0x0058 (size: 0x18)

}; // Size: 0x78

struct FMovieSceneTemplateGenerationLedger
{
    FMovieSceneTrackIdentifier LastTrackIdentifier;                                   // 0x0000 (size: 0x4)
    TMap<class FGuid, class FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x0008 (size: 0x50)
    TMap<class FGuid, class FFloatRange> SubSectionRanges;                            // 0x0058 (size: 0x50)

}; // Size: 0xA8

struct FMovieSceneTrackEvalOptions
{
    uint8 bCanEvaluateNearestSection;                                                 // 0x0000 (size: 0x1)
    uint8 bEvalNearestSection;                                                        // 0x0000 (size: 0x1)
    uint8 bEvaluateInPreroll;                                                         // 0x0000 (size: 0x1)
    uint8 bEvaluateInPostroll;                                                        // 0x0000 (size: 0x1)
    uint8 bEvaluateNearestSection;                                                    // 0x0000 (size: 0x1)

}; // Size: 0x4

struct FMovieSceneTrackFieldData
{
}; // Size: 0x60

struct FMovieSceneTrackIdentifier
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{
}; // Size: 0x10

struct FMovieSceneTrackImplementationPtr
{
}; // Size: 0x38

struct FMovieSceneTrackLabels
{
    TArray<FString> Strings;                                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FOptionalMovieSceneBlendType
{
    EMovieSceneBlendType BlendType;                                                   // 0x0000 (size: 0x1)
    bool bIsValid;                                                                    // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FSectionEvaluationData
{
    int32 ImplIndex;                                                                  // 0x0000 (size: 0x4)
    float ForcedTime;                                                                 // 0x0004 (size: 0x4)
    ESectionEvaluationFlags Flags;                                                    // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FSectionEvaluationDataTree
{
}; // Size: 0x60

struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{
}; // Size: 0x20

class IMovieSceneBindingOverridesInterface : public IInterface
{
}; // Size: 0x28

class IMovieSceneBindingOwnerInterface : public IInterface
{
}; // Size: 0x28

class IMovieSceneEasingFunction : public IInterface
{

    float OnEvaluate(float Interp);
}; // Size: 0x28

class UMovieScene : public UMovieSceneSignedObject
{
    TArray<FMovieSceneSpawnable> Spawnables;                                          // 0x00B0 (size: 0x10)
    TArray<FMovieScenePossessable> Possessables;                                      // 0x00C0 (size: 0x10)
    TArray<FMovieSceneBinding> ObjectBindings;                                        // 0x00D0 (size: 0x10)
    TArray<class UMovieSceneTrack*> MasterTracks;                                     // 0x00E0 (size: 0x10)
    class UMovieSceneTrack* CameraCutTrack;                                           // 0x00F0 (size: 0x8)
    FFloatRange SelectionRange;                                                       // 0x00F8 (size: 0x10)
    FFloatRange PlaybackRange;                                                        // 0x0108 (size: 0x10)
    bool bForceFixedFrameIntervalPlayback;                                            // 0x0118 (size: 0x1)
    float FixedFrameInterval;                                                         // 0x011C (size: 0x4)
    float InTime;                                                                     // 0x0120 (size: 0x4)
    float OutTime;                                                                    // 0x0124 (size: 0x4)
    float StartTime;                                                                  // 0x0128 (size: 0x4)
    float EndTime;                                                                    // 0x012C (size: 0x4)

}; // Size: 0x130

class UMovieSceneBindingOverrides : public UObject
{
    TArray<FMovieSceneBindingOverrideData> BindingData;                               // 0x0030 (size: 0x10)

}; // Size: 0x98

class UMovieSceneBuiltInEasingFunction : public UObject
{
    EMovieSceneBuiltInEasing Type;                                                    // 0x0030 (size: 0x1)

}; // Size: 0x38

class UMovieSceneEasingExternalCurve : public UObject
{
    class UCurveFloat* Curve;                                                         // 0x0030 (size: 0x8)

}; // Size: 0x38

class UMovieSceneFolder : public UObject
{
    FName FolderName;                                                                 // 0x0028 (size: 0x8)
    TArray<class UMovieSceneFolder*> ChildFolders;                                    // 0x0030 (size: 0x10)
    TArray<class UMovieSceneTrack*> ChildMasterTracks;                                // 0x0040 (size: 0x10)
    TArray<FString> ChildObjectBindingStrings;                                        // 0x0050 (size: 0x10)

}; // Size: 0x70

class UMovieSceneNameableTrack : public UMovieSceneTrack
{
}; // Size: 0xC0

class UMovieSceneSection : public UMovieSceneSignedObject
{
    FMovieSceneSectionEvalOptions EvalOptions;                                        // 0x00B0 (size: 0x2)
    FMovieSceneEasingSettings Easing;                                                 // 0x00B8 (size: 0x38)
    float StartTime;                                                                  // 0x00F0 (size: 0x4)
    float EndTime;                                                                    // 0x00F4 (size: 0x4)
    int32 RowIndex;                                                                   // 0x00F8 (size: 0x4)
    int32 OverlapPriority;                                                            // 0x00FC (size: 0x4)
    uint8 bIsActive;                                                                  // 0x0100 (size: 0x1)
    uint8 bIsLocked;                                                                  // 0x0100 (size: 0x1)
    uint8 bIsInfinite;                                                                // 0x0100 (size: 0x1)
    float PrerollTime;                                                                // 0x0104 (size: 0x4)
    float PostrollTime;                                                               // 0x0108 (size: 0x4)
    FOptionalMovieSceneBlendType BlendType;                                           // 0x010C (size: 0x2)

}; // Size: 0x110

class UMovieSceneSegmentCompilerTestSection : public UMovieSceneSection
{
}; // Size: 0x110

class UMovieSceneSegmentCompilerTestTrack : public UMovieSceneTrack
{
    bool bHighPassFilter;                                                             // 0x00B8 (size: 0x1)
    TArray<class UMovieSceneSection*> SectionArray;                                   // 0x00C0 (size: 0x10)

}; // Size: 0xD0

class UMovieSceneSequence : public UMovieSceneSignedObject
{
    FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate;                      // 0x00B0 (size: 0x2F8)
    EMovieSceneCompletionMode DefaultCompletionMode;                                  // 0x03A8 (size: 0x1)
    bool bParentContextsAreSignificant;                                               // 0x03A9 (size: 0x1)

}; // Size: 0x3B0

class UMovieSceneSequencePlayer : public UObject
{
    FMovieSceneSequencePlayerOnPlay OnPlay;                                           // 0x0370 (size: 0x10)
    FMovieSceneSequencePlayerOnPlayReverse OnPlayReverse;                             // 0x0380 (size: 0x10)
    FMovieSceneSequencePlayerOnStop OnStop;                                           // 0x0390 (size: 0x10)
    FMovieSceneSequencePlayerOnPause OnPause;                                         // 0x03A0 (size: 0x10)
    FMovieSceneSequencePlayerOnFinished OnFinished;                                   // 0x03B0 (size: 0x10)
    TEnumAsByte<EMovieScenePlayerStatus::Type> Status;                                // 0x03C0 (size: 0x1)
    uint8 bReversePlayback;                                                           // 0x03C4 (size: 0x1)
    uint8 bPendingFirstUpdate;                                                        // 0x03C4 (size: 0x1)
    class UMovieSceneSequence* Sequence;                                              // 0x03D0 (size: 0x8)
    float TimeCursorPosition;                                                         // 0x03D8 (size: 0x4)
    float StartTime;                                                                  // 0x03DC (size: 0x4)
    float EndTime;                                                                    // 0x03E0 (size: 0x4)
    int32 CurrentNumLoops;                                                            // 0x03E4 (size: 0x4)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x03F8 (size: 0x30)

    void Stop();
    void StartPlayingNextTick();
    void SetPlayRate(float PlayRate);
    void SetPlaybackRange(const float NewStartTime, const float NewEndTime);
    void SetPlaybackPosition(float NewPlaybackPosition);
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    void Scrub();
    void PlayReverse();
    void PlayLooping(int32 NumLoops);
    void Play();
    void Pause();
    void JumpToPosition(float NewPlaybackPosition);
    bool IsPlaying();
    bool IsPaused();
    void GoToEndAndStop();
    float GetPlayRate();
    float GetPlaybackStart();
    float GetPlaybackPosition();
    float GetPlaybackEnd();
    float GetLength();
    bool GetDisableCameraCuts();
    TArray<class UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    void ChangePlaybackDirection();
}; // Size: 0x800

class UMovieSceneSignedObject : public UObject
{
    FGuid Signature;                                                                  // 0x0028 (size: 0x10)

}; // Size: 0xB0

class UMovieSceneSubSection : public UMovieSceneSection
{
    FMovieSceneSectionParameters Parameters;                                          // 0x0110 (size: 0x14)
    float StartOffset;                                                                // 0x0124 (size: 0x4)
    float TimeScale;                                                                  // 0x0128 (size: 0x4)
    float PrerollTime;                                                                // 0x012C (size: 0x4)
    class UMovieSceneSequence* SubSequence;                                           // 0x0130 (size: 0x8)
    TLazyObjectPtr<class AActor> ActorToRecord;                                       // 0x0138 (size: 0x1C)
    FString TargetSequenceName;                                                       // 0x0158 (size: 0x10)
    FDirectoryPath TargetPathToRecordTo;                                              // 0x0168 (size: 0x10)

}; // Size: 0x180

class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00B8 (size: 0x10)

}; // Size: 0xD0

class UMovieSceneTrack : public UMovieSceneSignedObject
{
    FMovieSceneTrackEvalOptions EvalOptions;                                          // 0x00B0 (size: 0x4)

}; // Size: 0xC0

#endif
