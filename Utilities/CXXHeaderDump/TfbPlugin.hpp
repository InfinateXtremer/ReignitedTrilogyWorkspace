#ifndef UE4SS_SDK_TfbPlugin_HPP
#define UE4SS_SDK_TfbPlugin_HPP

#include "TfbPlugin_enums.hpp"

struct FTfbAnimNode_LipSyncBlend : public FAnimNode_Base
{
    FPoseLink BasePose;                                                               // 0x0030 (size: 0x18)
    FPoseLink LipSyncPose;                                                            // 0x0048 (size: 0x18)
    FAnimNode_LayeredBoneBlend BoneBlend;                                             // 0x0060 (size: 0xE0)

}; // Size: 0x140

struct FTfbDialogueTableRow : public FTableRowBase
{
    FSoftObjectPath VoicedLine;                                                       // 0x0008 (size: 0x18)
    FSoftObjectPath LipSyncAnim;                                                      // 0x0020 (size: 0x18)
    FText Text;                                                                       // 0x0038 (size: 0x18)
    FText DisplayName;                                                                // 0x0050 (size: 0x18)
    bool IsSubtitle;                                                                  // 0x0068 (size: 0x1)

}; // Size: 0x70

struct FTfbMovieSceneDialogueSectionData
{
    FText EventName;                                                                  // 0x0000 (size: 0x18)
    class UAnimSequenceBase* Animation;                                               // 0x0018 (size: 0x8)
    FText Text;                                                                       // 0x0020 (size: 0x18)
    float StartTime;                                                                  // 0x0038 (size: 0x4)
    uint8 bHudOpen;                                                                   // 0x003C (size: 0x1)
    uint32 PlayingID;                                                                 // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FTfbMovieSceneDialogueTemplate : public FMovieSceneEvalTemplate
{
    class UTfbMovieSceneDialogueSection* Section;                                     // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FTfbPanelButtonDefStruct
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Label;                                                                    // 0x0010 (size: 0x10)
    bool closeOnActivate;                                                             // 0x0020 (size: 0x1)
    TSubclassOf<class UUserWidget> widgetClass;                                       // 0x0028 (size: 0x8)
    UClass* handlerObjectClass;                                                       // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FTfbPanelDefStruct : public FTableRowBase
{
    UClass* handlerObjectClass;                                                       // 0x0008 (size: 0x8)
    TSubclassOf<class UUserWidget> widgetClass;                                       // 0x0010 (size: 0x8)
    TArray<FTfbPanelButtonDefStruct> buttonList;                                      // 0x0018 (size: 0x10)

}; // Size: 0x28

class ALipsyncActor : public ASkeletalMeshActor
{
}; // Size: 0x3A0

class ATfbLevelSequenceActor : public ALevelSequenceActor
{
    float StartingCameraBlendTime;                                                    // 0x03B8 (size: 0x4)
    float EndingCameraBlendTime;                                                      // 0x03BC (size: 0x4)
    FTfbLevelSequenceActorBP_OnSequenceStarted BP_OnSequenceStarted;                  // 0x03C0 (size: 0x10)
    FTfbLevelSequenceActorBP_OnSequenceFinished BP_OnSequenceFinished;                // 0x03D0 (size: 0x10)

    void OnSequenceStarted();
    void OnSequenceFinished();
}; // Size: 0x3F0

class ITfbAnimationInterface : public IInterface
{

    void SetTalkingAnimationState(bool Value);
    void SetJumpAnimationState(ETfbJumpingAnimationState State);
    void SetIsDeadAnimationState(bool Value);
    void SetIdleStartOffset(float OffsetPercent);
}; // Size: 0x28

class ITfbGameStateInterface : public IInterface
{

    void OnTfbCutsceneEnd();
    void OnTfbCutsceneBegin();
}; // Size: 0x28

class ITfbHudDialogCallbackInterface : public IInterface
{

    void HudDialogOptionSelected(int32 selectedIndex);
}; // Size: 0x28

class ITfbHudDialogInterface : public IInterface
{

    void HudDialogShow(const class AActor* dialogCharacter, const FText& DialogText, float displaySeconds);
    void HudDialogHide();
    void HudDialogBalloonist(const class UObject* Owner, const FText& question, const TArray<FText>& destinations, int32 defaultDestinationIndex);
    void HudDialogAskQuestionAdv(const class UObject* Owner, const class AActor* dialogCharacter, const FText& question, float questionVOSecs, const TArray<FText>& answers, int32 defaultAnswerIndex);
    void HudDialogAskQuestion(const class UObject* Owner, const class AActor* dialogCharacter, const FText& question, const TArray<FText>& answers);
    void HudDialogActivate(const class UObject* Owner, const FText& Title, const FText& question, float questionVOSecs, const TArray<FText>& answers, int32 defaultAnswerIndex);
}; // Size: 0x28

class ITfbIGCInterface : public IInterface
{

    void PlayIGC(const FPlayIGCOnFinished& OnFinished);
}; // Size: 0x28

class UAssetManagementFunctionLibrary : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class UMP4PlayerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetDefaultLanguage(class UMediaPlayer* Player);
    void PlayWithCurrentLanguage(class UMediaPlayer* Player);
}; // Size: 0x28

class UTfbAnimInstance : public UAnimInstance
{
    uint8 bTrue;                                                                      // 0x03C0 (size: 0x1)
    float BigFloat;                                                                   // 0x03C4 (size: 0x4)
    float SmallFloat;                                                                 // 0x03C8 (size: 0x4)
    uint8 bIdleAnimationOption;                                                       // 0x03CC (size: 0x1)
    float AnimDelayMax;                                                               // 0x03D0 (size: 0x4)
    float AnimDelayMin;                                                               // 0x03D4 (size: 0x4)
    uint8 bIsTalking;                                                                 // 0x03D8 (size: 0x1)
    uint8 bIsJumping;                                                                 // 0x03D8 (size: 0x1)
    uint8 bIsFalling;                                                                 // 0x03D8 (size: 0x1)
    uint8 bIsDead;                                                                    // 0x03D8 (size: 0x1)
    uint8 bIsSwimming;                                                                // 0x03D8 (size: 0x1)
    uint8 bIsDiving;                                                                  // 0x03D8 (size: 0x1)
    uint8 bIsFlying;                                                                  // 0x03D8 (size: 0x1)
    uint8 bHasReviveAnim;                                                             // 0x03D8 (size: 0x1)
    float Speed;                                                                      // 0x03DC (size: 0x4)
    float TurnRate;                                                                   // 0x03E0 (size: 0x4)
    float RunThreshold;                                                               // 0x03E4 (size: 0x4)
    float InitialIdleStartOffset;                                                     // 0x03E8 (size: 0x4)
    class UAnimSequence* IdleAnimation;                                               // 0x03F0 (size: 0x8)
    class UAnimSequence* IdleAnimation2;                                              // 0x03F8 (size: 0x8)
    class UAnimSequence* TalkingAnimation;                                            // 0x0400 (size: 0x8)
    class UAnimSequence* RunAnimation;                                                // 0x0408 (size: 0x8)
    class UAnimSequence* WalkAnimation;                                               // 0x0410 (size: 0x8)
    class UAnimSequence* JumpStartAnimation;                                          // 0x0418 (size: 0x8)
    class UAnimSequence* JumpApexAnimation;                                           // 0x0420 (size: 0x8)
    class UAnimSequence* FallingAnimation;                                            // 0x0428 (size: 0x8)
    class UAnimSequence* LandingAnimation;                                            // 0x0430 (size: 0x8)
    class UAnimSequence* DeathAnimation;                                              // 0x0438 (size: 0x8)
    class UAnimSequence* ReviveAnimation;                                             // 0x0440 (size: 0x8)
    class UAnimSequence* DiveAnimation;                                               // 0x0448 (size: 0x8)
    class UAnimSequence* SwimAnimation;                                               // 0x0450 (size: 0x8)
    class UAnimSequence* TakeOffAnimation;                                            // 0x0458 (size: 0x8)
    class UAnimSequence* FlyAnimation;                                                // 0x0460 (size: 0x8)

}; // Size: 0x470

class UTfbButtonPanelFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SortStringSet(const TArray<FString>& stringSet, TArray<FString>& sortedStrings);
    FTfbPanelDefStruct GetRowByName(class UDataTable* DataTable, FName pName, bool& Result);
}; // Size: 0x28

class UTfbDialogueBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SplitQuestionString(const FText& String, FText& question, TArray<FText>& answers);
    void GetDialogueTableRow(const FDataTableRowHandle& RowHandle, class UAkAudioEvent*& VoicedLine, FText& Text, class UAnimSequence*& LipSyncAnim, FText& DisplayName, ETfbDialogueRowResult& Result);
}; // Size: 0x28

class UTfbLevelSequencePlayer : public ULevelSequencePlayer
{
}; // Size: 0x8B0

class UTfbMovieSceneDialogueSection : public UMovieSceneAkAudioEventSection
{
    FDataTableRowHandle DialogueData;                                                 // 0x01F8 (size: 0x10)

}; // Size: 0x210

class UTfbMovieSceneDialogueTrack : public UMovieSceneAkTrack
{
    class UDataTable* DialogueTable;                                                  // 0x00D0 (size: 0x8)

}; // Size: 0xE0

#endif
