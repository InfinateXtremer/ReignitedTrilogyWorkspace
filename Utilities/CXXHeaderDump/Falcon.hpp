#ifndef UE4SS_SDK_Falcon_HPP
#define UE4SS_SDK_Falcon_HPP

#include "Falcon_enums.hpp"

struct F3DTextMeshTableRow : public FTableRowBase
{
    FString Char;                                                                     // 0x0008 (size: 0x10)
    class UStaticMesh* Mesh;                                                          // 0x0018 (size: 0x8)
    float CharWidthScalar;                                                            // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FActions
{
    class AActor* PlayerT;                                                            // 0x0000 (size: 0x8)
    float dist;                                                                       // 0x0008 (size: 0x4)
    float zDiff;                                                                      // 0x000C (size: 0x4)
    class AActor* CameraT;                                                            // 0x0010 (size: 0x8)
    class AActor* OptionalCamera;                                                     // 0x0018 (size: 0x8)
    float Speed;                                                                      // 0x0020 (size: 0x4)
    bool Teleport;                                                                    // 0x0024 (size: 0x1)
    bool doReset;                                                                     // 0x0025 (size: 0x1)

}; // Size: 0x28

struct FActionsList
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 Index;                                                                      // 0x0008 (size: 0x4)
    TArray<FActions> Actions;                                                         // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FAgent9TopDownRoom
{
    TArray<FAgent9TopDownSpawnPoint> SpawnPoints;                                     // 0x0000 (size: 0x10)
    class ATriggerBase* RoomTrigger;                                                  // 0x0010 (size: 0x8)
    class ATargetPoint* RoomCenterTargetPoint;                                        // 0x0018 (size: 0x8)
    class AActor* ExitGate;                                                           // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FAgent9TopDownSpawnPoint
{
    TSubclassOf<class AActor> EnemyClass;                                             // 0x0000 (size: 0x8)
    class ATargetPoint* TargetPoint;                                                  // 0x0008 (size: 0x8)
    bool Optional;                                                                    // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FAirshipFMV
{
    TSubclassOf<class UScriptedWorld> Destination;                                    // 0x0000 (size: 0x8)
    class UFileMediaSource* MediaSource;                                              // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FAnimNode_Locomotion : public FAnimNode_Base
{
    ELocomotionAxis RootTurnAxis;                                                     // 0x0030 (size: 0x1)
    ELocomotionAxis RootLeanAxis;                                                     // 0x0031 (size: 0x1)
    FBoneReference BoneSpine1;                                                        // 0x0038 (size: 0x18)
    FBoneReference BoneSpine2;                                                        // 0x0050 (size: 0x18)
    FBoneReference BoneSpine3;                                                        // 0x0068 (size: 0x18)
    float WeightSpine1;                                                               // 0x0080 (size: 0x4)
    float WeightSpine2;                                                               // 0x0084 (size: 0x4)
    float WeightSpine3;                                                               // 0x0088 (size: 0x4)
    FLocomotionLegIKRig LegIK_BL;                                                     // 0x0090 (size: 0x60)
    FLocomotionLegIKRig LegIK_BR;                                                     // 0x00F0 (size: 0x60)
    FLocomotionLegIKRig LegIK_FL;                                                     // 0x0150 (size: 0x60)
    FLocomotionLegIKRig LegIK_FR;                                                     // 0x01B0 (size: 0x60)
    float AnkleAngMax;                                                                // 0x0210 (size: 0x4)
    float BlendExp;                                                                   // 0x0214 (size: 0x4)
    float IKFootLock;                                                                 // 0x0218 (size: 0x4)
    float IKIdleSlope;                                                                // 0x021C (size: 0x4)
    FVector2D IKTime;                                                                 // 0x0220 (size: 0x8)
    bool MatchGround;                                                                 // 0x0228 (size: 0x1)
    float SlopeAdjRoot;                                                               // 0x022C (size: 0x4)

}; // Size: 0x7E0

struct FAnimNode_RK4Spring : public FAnimNode_SkeletalControlBase
{
    FBoneReference Bone;                                                              // 0x0070 (size: 0x18)
    ERK4SpringAxis TwistAxis;                                                         // 0x0088 (size: 0x1)
    ERK4SpringAxis UpAxis;                                                            // 0x0089 (size: 0x1)
    float Length;                                                                     // 0x008C (size: 0x4)
    FVector ParamsH;                                                                  // 0x0090 (size: 0xC)
    FVector ParamsV;                                                                  // 0x009C (size: 0xC)
    float Gravity;                                                                    // 0x00A8 (size: 0x4)
    bool DebugDraw;                                                                   // 0x00AC (size: 0x1)

}; // Size: 0xF0

struct FBatteringRamData
{
    float RammingSpeed;                                                               // 0x0000 (size: 0x4)
    float RammingRange;                                                               // 0x0004 (size: 0x4)
    float KnockbackDistance;                                                          // 0x0008 (size: 0x4)
    float ArcAngle;                                                                   // 0x000C (size: 0x4)
    FGameplayTagContainer DamageTags;                                                 // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FBindingNameAndScaleTuple
{
    FName BindingName;                                                                // 0x0000 (size: 0x8)
    float Scale;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FBuzzSawData
{
    float Duration;                                                                   // 0x0000 (size: 0x4)
    float Speed;                                                                      // 0x0004 (size: 0x4)
    FGameplayTagContainer DamageTags;                                                 // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FBuzzSkillSet
{
    bool bCustomBatteringRam;                                                         // 0x0000 (size: 0x1)
    FBatteringRamData BatteringRam;                                                   // 0x0008 (size: 0x30)
    bool bCustomKnockback;                                                            // 0x0038 (size: 0x1)
    FKnockbackResponse KnockbackResponse;                                             // 0x003C (size: 0x8)
    bool bCustomBuzzSaw;                                                              // 0x0044 (size: 0x1)
    FBuzzSawData BuzzSaw;                                                             // 0x0048 (size: 0x28)
    bool bCustomFireWall;                                                             // 0x0070 (size: 0x1)
    FFireWallData FireWall;                                                           // 0x0078 (size: 0x38)
    bool bCustomFireBreath;                                                           // 0x00B0 (size: 0x1)
    FFireBreathData FireBreath;                                                       // 0x00B8 (size: 0x38)

}; // Size: 0xF0

struct FColorSetting
{
    FLinearColor Color;                                                               // 0x0000 (size: 0x10)
    FLinearColor Tint;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FDecalData
{
    class UMaterial* DecalMaterial;                                                   // 0x0000 (size: 0x8)
    float DecalSize;                                                                  // 0x0008 (size: 0x4)
    float LifeSpan;                                                                   // 0x000C (size: 0x4)

}; // Size: 0x10

struct FDialogState
{
    FText Label;                                                                      // 0x0000 (size: 0x18)
    FName State;                                                                      // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FDialogText
{
    FText Greeting;                                                                   // 0x0000 (size: 0x18)
    TArray<FText> Bullets;                                                            // 0x0018 (size: 0x10)
    TArray<FDialogState> Options;                                                     // 0x0028 (size: 0x10)
    bool bIsSpyro;                                                                    // 0x0038 (size: 0x1)
    bool bShowGems;                                                                   // 0x0039 (size: 0x1)
    FName DialogEntry;                                                                // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FFalconGameStateType
{
    EFalconGameState Enum;                                                            // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FFalconInputData
{
    EPhasmidAction Action;                                                            // 0x0000 (size: 0x1)
    FText DisplayName;                                                                // 0x0008 (size: 0x18)
    FFalconKeyData EntryOneKeyData;                                                   // 0x0020 (size: 0x70)
    FFalconKeyData EntryTwoKeyData;                                                   // 0x0090 (size: 0x70)

}; // Size: 0x100

struct FFalconKeyData
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    FPhasmidIconReturnData IconData;                                                  // 0x0018 (size: 0x50)
    bool IsNone;                                                                      // 0x0068 (size: 0x1)

}; // Size: 0x70

struct FFalconLoadingStateCallbacks
{
    FFalconLoadingStateCallbacksOnStartCallback OnStartCallback;                      // 0x0000 (size: 0x10)
    void FalconLoadingScreenStateStart();
    FFalconLoadingStateCallbacksOnUpdateCallback OnUpdateCallback;                    // 0x0010 (size: 0x10)
    void FalconLoadingScreenStateUpdate(float DeltaTime);

}; // Size: 0x20

struct FFalconMenuItemStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;                                                      // 0x0008 (size: 0x78)
    FSlateBrush LeftArrowImage;                                                       // 0x0080 (size: 0x78)
    FSlateBrush RightArrowImage;                                                      // 0x00F8 (size: 0x78)

}; // Size: 0x170

struct FFalconMenuStyle : public FSlateWidgetStyle
{
    FSlateBrush HeaderBackgroundBrush;                                                // 0x0008 (size: 0x78)
    FSlateBrush LeftBackgroundBrush;                                                  // 0x0080 (size: 0x78)
    FSlateBrush RightBackgroundBrush;                                                 // 0x00F8 (size: 0x78)
    FSlateSound MenuEnterSound;                                                       // 0x0170 (size: 0x18)
    FSlateSound MenuBackSound;                                                        // 0x0188 (size: 0x18)
    FSlateSound OptionChangeSound;                                                    // 0x01A0 (size: 0x18)
    FSlateSound MenuItemChangeSound;                                                  // 0x01B8 (size: 0x18)

}; // Size: 0x1D0

struct FFalconScreenConfigData
{
    FString Context;                                                                  // 0x0000 (size: 0x10)
    float Value;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FFalconScreenDef : public FTableRowBase
{
    EFalconScreenType screenType;                                                     // 0x0008 (size: 0x1)
    EFalconScreenLayerType layerType;                                                 // 0x0009 (size: 0x1)
    int32 zValue;                                                                     // 0x000C (size: 0x4)
    bool isModal;                                                                     // 0x0010 (size: 0x1)
    TSubclassOf<class UFalconWidget> widgetClass;                                     // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FFalconStoredActionKeys
{
    EPhasmidAction Action;                                                            // 0x0000 (size: 0x1)
    FKey EntryOneKey;                                                                 // 0x0008 (size: 0x18)
    bool EntryOneIsEmpty;                                                             // 0x0020 (size: 0x1)
    FKey EntryTwoKey;                                                                 // 0x0028 (size: 0x18)
    bool EntryTwoIsEmpty;                                                             // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FFireBreathData
{
    float Duration;                                                                   // 0x0000 (size: 0x4)
    float MinRange;                                                                   // 0x0004 (size: 0x4)
    float MaxRange;                                                                   // 0x0008 (size: 0x4)
    float HalfAngle;                                                                  // 0x000C (size: 0x4)
    TSubclassOf<class AActor> ActorFX;                                                // 0x0010 (size: 0x8)
    FGameplayTagContainer DamageTags;                                                 // 0x0018 (size: 0x20)

}; // Size: 0x38

struct FFireWallData
{
    float Duration;                                                                   // 0x0000 (size: 0x4)
    float Radius;                                                                     // 0x0004 (size: 0x4)
    float Height;                                                                     // 0x0008 (size: 0x4)
    TSubclassOf<class AActor> ActorFX;                                                // 0x0010 (size: 0x8)
    FGameplayTagContainer DamageTags;                                                 // 0x0018 (size: 0x20)

}; // Size: 0x38

struct FFlameHitInfo
{
}; // Size: 0x24

struct FFlightLevelState
{
    TArray<FFlightObjectiveData> objectiveData;                                       // 0x0000 (size: 0x10)
    float bestTime;                                                                   // 0x0010 (size: 0x4)
    float currentTime;                                                                // 0x0014 (size: 0x4)
    EFlightLevelTargetType lastTargetCollected;                                       // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FFlightObjectUIData : public FTableRowBase
{
    EFlightLevelTargetType Target;                                                    // 0x0008 (size: 0x1)
    FText DisplayName;                                                                // 0x0010 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x0028 (size: 0x8)
    class UTexture2D* iconEmpty;                                                      // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FFlightObjective
{
    EFlightLevelTargetType Target;                                                    // 0x0000 (size: 0x1)
    EInventoryType treasureReward;                                                    // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FFlightObjectiveData
{
    FFlightObjective objective;                                                       // 0x0000 (size: 0x2)
    int32 collectedCount;                                                             // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FFlightResult
{
    EFlightLevelTargetType Target;                                                    // 0x0000 (size: 0x1)
    int32 Count;                                                                      // 0x0004 (size: 0x4)
    bool awardedPreviously;                                                           // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FFullbodyDataTable : public FTableRowBase
{
    FSoftObjectPath FullBodyAnim;                                                     // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FGreeting
{
    EAutoGreet Style;                                                                 // 0x0000 (size: 0x1)
    FName Montage;                                                                    // 0x0008 (size: 0x8)
    bool autoGreet;                                                                   // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FGreetingData
{
    EAutoGreet Style;                                                                 // 0x0000 (size: 0x1)
    FName Montage;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FHudHealthCountEvent
{
    int32 eventLifeCount;                                                             // 0x0000 (size: 0x4)
    int32 eventPartialLifeCount;                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FInputKeySequenceEntry
{
    FString _sequenceName;                                                            // 0x0000 (size: 0x10)
    TArray<EPhasmidAction> _keyList;                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FInputKeySequenceList
{
    TArray<FInputKeySequenceEntry> _sequences;                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FKeyColorSetting
{
    FColorSetting Key;                                                                // 0x0000 (size: 0x20)
    FColorSetting Pulse;                                                              // 0x0020 (size: 0x20)
    FColorSetting Sparkle;                                                            // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FKnockbackEvent : public FGameplayEffectContext
{
}; // Size: 0x88

struct FKnockbackResponse
{
    float Distance;                                                                   // 0x0000 (size: 0x4)
    float ArcAngle;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FLevelMapStruct : public FTableRowBase
{
    FString LevelPath;                                                                // 0x0008 (size: 0x10)
    FName homeLevel;                                                                  // 0x0018 (size: 0x8)
    FString DisplayName;                                                              // 0x0020 (size: 0x10)
    bool bossLevel;                                                                   // 0x0030 (size: 0x1)
    bool flightLevel;                                                                 // 0x0031 (size: 0x1)
    bool excludeFromGameProgressionCompletion;                                        // 0x0032 (size: 0x1)
    float excludeFromGameProgressionCompletionScalar;                                 // 0x0034 (size: 0x4)
    FLevelProgressionScalarMap progressionMap;                                        // 0x0038 (size: 0x50)

}; // Size: 0x88

struct FLevelPath_cpp : public FTableRowBase
{
    FName LevelMapPath;                                                               // 0x0008 (size: 0x8)
    class UDataTable* LevelMapNames;                                                  // 0x0010 (size: 0x8)
    bool IsHomeworld;                                                                 // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FLevelProgressionScalarMap
{
    TMap<EInventoryType, float> typeScalarMap;                                        // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FLevelTransportRecord
{
    TArray<class ULevelStreaming*> streamObjects;                                     // 0x0020 (size: 0x10)
    class APortal* sourcePortal;                                                      // 0x0030 (size: 0x8)
    class APortal* targetPortal;                                                      // 0x0038 (size: 0x8)
    class APawn* playerCharacter;                                                     // 0x0040 (size: 0x8)

}; // Size: 0x88

struct FLocomotionGear
{
    FVector2D Range;                                                                  // 0x0000 (size: 0x8)
    float IKWeight;                                                                   // 0x0008 (size: 0x4)
    TArray<class UAnimationAsset*> MoveAnims;                                         // 0x0010 (size: 0x10)
    TArray<class UAnimationAsset*> StopAnims;                                         // 0x0020 (size: 0x10)
    TArray<class UAnimationAsset*> StartAnims;                                        // 0x0030 (size: 0x10)
    TArray<class UAnimationAsset*> JumpAnims;                                         // 0x0040 (size: 0x10)
    TArray<class UAnimationAsset*> LandAnims;                                         // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FLocomotionInput
{
    bool m_enabled;                                                                   // 0x0000 (size: 0x1)
    bool m_noBlend;                                                                   // 0x0001 (size: 0x1)
    bool m_noFootIK;                                                                  // 0x0002 (size: 0x1)
    bool m_flipped;                                                                   // 0x0003 (size: 0x1)
    bool m_rotIK;                                                                     // 0x0004 (size: 0x1)
    int32 m_iSet;                                                                     // 0x0008 (size: 0x4)
    int32 m_iDir;                                                                     // 0x000C (size: 0x4)
    int32 m_iGear;                                                                    // 0x0010 (size: 0x4)
    float m_lean;                                                                     // 0x0014 (size: 0x4)
    FVector2D m_blendInput;                                                           // 0x0018 (size: 0x8)
    float m_rate;                                                                     // 0x0020 (size: 0x4)
    float m_ikScale;                                                                  // 0x0024 (size: 0x4)
    float m_startPos;                                                                 // 0x0028 (size: 0x4)
    FVector4 m_rootAngles;                                                            // 0x0030 (size: 0x10)
    FVector4 m_torsoAngles;                                                           // 0x0040 (size: 0x10)
    FVector m_normal;                                                                 // 0x0050 (size: 0xC)

}; // Size: 0x60

struct FLocomotionLegIKRig
{
    FBoneReference BoneUpper;                                                         // 0x0000 (size: 0x18)
    FBoneReference BoneLower;                                                         // 0x0018 (size: 0x18)
    FBoneReference BoneAnkle;                                                         // 0x0030 (size: 0x18)
    FBoneReference BoneToe;                                                           // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FLocomotionOutput
{
    float m_tCur;                                                                     // 0x0000 (size: 0x4)
    float m_tMax;                                                                     // 0x0004 (size: 0x4)
    bool m_animEnd;                                                                   // 0x0008 (size: 0x1)
    int32 m_footFlags;                                                                // 0x000C (size: 0x4)
    TArray<float> m_footAlphas;                                                       // 0x0010 (size: 0x10)
    TArray<FTransform> m_xFootWS;                                                     // 0x0020 (size: 0x10)
    TArray<int32> m_blendStates;                                                      // 0x0030 (size: 0x10)
    TArray<float> m_blendAlphas;                                                      // 0x0040 (size: 0x10)
    TArray<FString> m_blendNames;                                                     // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FLocomotionSet
{
    class UAnimationAsset* IdleAnim;                                                  // 0x0000 (size: 0x8)
    TArray<FLocomotionGear> Gears;                                                    // 0x0008 (size: 0x10)
    class UAnimationAsset* AirAnim;                                                   // 0x0018 (size: 0x8)
    class UAnimationAsset* IdleJump;                                                  // 0x0020 (size: 0x8)
    class UAnimationAsset* IdleLand;                                                  // 0x0028 (size: 0x8)
    FVector4 IdleCycle;                                                               // 0x0030 (size: 0x10)
    float BackCycle;                                                                  // 0x0040 (size: 0x4)

}; // Size: 0x50

struct FLocomotionTuning
{
    int32 m_iForceSet;                                                                // 0x0000 (size: 0x4)
    float m_predictTime;                                                              // 0x0004 (size: 0x4)
    FVector2D m_stopVelRange;                                                         // 0x0008 (size: 0x8)
    FVector2D m_startVelRange;                                                        // 0x0010 (size: 0x8)
    FVector m_angInterp;                                                              // 0x0018 (size: 0xC)
    float m_fwdBias;                                                                  // 0x0024 (size: 0x4)
    float m_dirHyst;                                                                  // 0x0028 (size: 0x4)
    float m_speedHyst;                                                                // 0x002C (size: 0x4)
    float m_blendDefault;                                                             // 0x0030 (size: 0x4)
    float m_blendSideBack;                                                            // 0x0034 (size: 0x4)
    float m_blendStartStop;                                                           // 0x0038 (size: 0x4)
    float m_blendJumpLand;                                                            // 0x003C (size: 0x4)
    FVector2D m_leanScalar;                                                           // 0x0040 (size: 0x8)
    FVector m_leanInterp;                                                             // 0x0048 (size: 0xC)
    FVector2D m_normalInterp;                                                         // 0x0054 (size: 0x8)
    bool m_rotIKAxes;                                                                 // 0x005C (size: 0x1)
    bool m_dbgDraw;                                                                   // 0x005D (size: 0x1)

}; // Size: 0x60

struct FMasterLevelData : public FTableRowBase
{
    FName LevelMapPath;                                                               // 0x0008 (size: 0x8)
    class UDataTable* SublevelNameTable;                                              // 0x0010 (size: 0x8)
    bool IsHomeworld;                                                                 // 0x0018 (size: 0x1)
    bool requiresPatch;                                                               // 0x0019 (size: 0x1)

}; // Size: 0x20

struct FMontageDesc
{
    class UAnimMontage* Montage;                                                      // 0x0000 (size: 0x8)
    FName Section;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMontageState
{
    FName stateName;                                                                  // 0x0000 (size: 0x8)
    class UAnimMontage* Montage;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNameTable
{
    TArray<FString> m_names;                                                          // 0x0000 (size: 0x10)
    TArray<int32> m_alpha;                                                            // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FPendingTrick
{
    FName TrickId;                                                                    // 0x0000 (size: 0x8)
    int32 AdjustedScore;                                                              // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FPlayerCharacterOverride
{
    TSubclassOf<class ACharacter> m_playerCharacterClass;                             // 0x0000 (size: 0x8)
    bool m_setOverride;                                                               // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FPlayerMoveModeType
{
    EPlayerMoveMode Enum;                                                             // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FPurchaseOption
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    int32 ID;                                                                         // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FQuestActionType
{
    EQuestAction Enum;                                                                // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FQuestBinding
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TSubclassOf<class AQuestController> ControllerType;                               // 0x0008 (size: 0x8)
    TSoftObjectPtr<AActor> Actor;                                                     // 0x0010 (size: 0x28)
    bool bBound;                                                                      // 0x0038 (size: 0x1)
    bool bUnscripted;                                                                 // 0x0039 (size: 0x1)
    FQuestBoundPoints StrikePoints;                                                   // 0x0040 (size: 0x10)
    FQuestMontages Montages;                                                          // 0x0050 (size: 0x10)
    FQuestBoundPoints FalconWaypoints;                                                // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FQuestBoundPoint
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TSoftObjectPtr<AActor> StrikePoint;                                               // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FQuestBoundPoints
{
    TArray<FQuestBoundPoint> Array;                                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FQuestBoundTrigger
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TSoftObjectPtr<AQuestTrigger> Trigger;                                            // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FQuestBoundTriggers
{
    TArray<FQuestBoundTrigger> Array;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FQuestControllerBindings
{
    TArray<FQuestBinding> Bindings;                                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FQuestMontage
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    class UAnimMontage* Montage;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FQuestMontages
{
    TArray<FQuestMontage> Array;                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FQuestNameTable
{
    FNameTable m_names;                                                               // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FQuestSavable
{
    int32 namePart;                                                                   // 0x0000 (size: 0x4)
    int32 valPart;                                                                    // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FQuestSaveData
{
    FQuestNameTable names;                                                            // 0x0000 (size: 0x20)
    TMap<class FQuestSavable, class FQuestSavedBoard> boards;                         // 0x0020 (size: 0x50)

}; // Size: 0x70

struct FQuestSavedBoard
{
    TMap<class FQuestSavable, class FQuestSavable> keyValues;                         // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FQuestTypeEntry
{
    FName ScriptClass;                                                                // 0x0000 (size: 0x8)
    TSubclassOf<class AQuestController> DefaultController;                            // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FQuestionConfigData : public FFalconScreenConfigData
{
    FText Title;                                                                      // 0x0018 (size: 0x18)
    FText question;                                                                   // 0x0030 (size: 0x18)
    FText answer1;                                                                    // 0x0048 (size: 0x18)
    FText answer2;                                                                    // 0x0060 (size: 0x18)
    bool firstSelectedByDefault;                                                      // 0x0078 (size: 0x1)
    class UObject* callbackObject;                                                    // 0x0080 (size: 0x8)

}; // Size: 0x88

struct FRevengeGemSet
{
    TSubclassOf<class ASpyroLoot> GemType;                                            // 0x0000 (size: 0x8)
    int32 GemCount;                                                                   // 0x0008 (size: 0x4)
    int32 GemValue;                                                                   // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRevengeGemSets
{
    float TimeBetweenGems;                                                            // 0x0000 (size: 0x4)
    TArray<FRevengeGemSet> GemSets;                                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSP3CharAbilParamsAirCarry
{
    float m_hilightDist;                                                              // 0x0000 (size: 0x4)
    float m_pickupDist;                                                               // 0x0004 (size: 0x4)
    float m_receiveDist;                                                              // 0x0008 (size: 0x4)
    float m_detachDelay;                                                              // 0x000C (size: 0x4)
    FName m_socket;                                                                   // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FSP3CharAbilParamsBomb
{
    FName m_socket;                                                                   // 0x0000 (size: 0x8)
    FVector m_throwOffset;                                                            // 0x0008 (size: 0xC)
    float m_gravity;                                                                  // 0x0014 (size: 0x4)
    FVector m_delay;                                                                  // 0x0018 (size: 0xC)
    FVector m_turnParams;                                                             // 0x0024 (size: 0xC)
    FVector2D m_speedRange;                                                           // 0x0030 (size: 0x8)
    FVector2D m_angleRange;                                                           // 0x0038 (size: 0x8)
    FVector4 m_powerParams;                                                           // 0x0040 (size: 0x10)
    TSubclassOf<class AActor> m_holdClass;                                            // 0x0050 (size: 0x8)
    TSubclassOf<class AActor> m_projClass;                                            // 0x0058 (size: 0x8)
    TSubclassOf<class AActor> m_arcClass;                                             // 0x0060 (size: 0x8)
    FVector m_ammoCounts;                                                             // 0x0068 (size: 0xC)
    TSubclassOf<class UHudCounterComponent> m_ammoUIClass;                            // 0x0078 (size: 0x8)
    FName m_ammoIconName;                                                             // 0x0080 (size: 0x8)
    bool m_centerCamera;                                                              // 0x0088 (size: 0x1)
    FVector2D m_camOffset;                                                            // 0x008C (size: 0x8)

}; // Size: 0xA0

struct FSP3CharAbilParamsBounceJump
{
    FVector2D m_time;                                                                 // 0x0000 (size: 0x8)
    float m_height;                                                                   // 0x0008 (size: 0x4)
    float m_moveScalar;                                                               // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSP3CharAbilParamsCharge
{
    float m_speed;                                                                    // 0x0000 (size: 0x4)
    FVector m_turnParams;                                                             // 0x0004 (size: 0xC)
    FVector2D m_camOffset;                                                            // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FSP3CharAbilParamsDive
{
    float m_speed;                                                                    // 0x0000 (size: 0x4)
    float m_angle;                                                                    // 0x0004 (size: 0x4)
    float m_friction;                                                                 // 0x0008 (size: 0x4)
    float m_gravity;                                                                  // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSP3CharAbilParamsDoubleJump
{
    float m_time;                                                                     // 0x0000 (size: 0x4)
    float m_height;                                                                   // 0x0004 (size: 0x4)
    float m_moveScalar;                                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSP3CharAbilParamsFlappyJump
{
    float m_gravity;                                                                  // 0x0000 (size: 0x4)
    FVector2D m_airFriction;                                                          // 0x0004 (size: 0x8)
    float m_height;                                                                   // 0x000C (size: 0x4)
    float m_rePressHeight;                                                            // 0x0010 (size: 0x4)
    float m_flapInterval;                                                             // 0x0014 (size: 0x4)
    float m_maxAirVelocity;                                                           // 0x0018 (size: 0x4)
    FVector m_turnParams;                                                             // 0x001C (size: 0xC)
    FVector m_thrustParams;                                                           // 0x0028 (size: 0xC)
    float m_moveScalar;                                                               // 0x0034 (size: 0x4)
    FVector m_camOffset;                                                              // 0x0038 (size: 0xC)
    FVector2D m_camParams;                                                            // 0x0044 (size: 0x8)
    FVector m_rotVInterpSettings;                                                     // 0x004C (size: 0xC)
    FVector4 m_camInterp;                                                             // 0x0060 (size: 0x10)
    FVector2D m_autoCtrInterp;                                                        // 0x0070 (size: 0x8)
    float m_rotSpeedV;                                                                // 0x0078 (size: 0x4)
    FVector m_rotLimitV;                                                              // 0x007C (size: 0xC)
    float m_fallVelocity;                                                             // 0x0088 (size: 0x4)
    FVector m_camVInterp;                                                             // 0x008C (size: 0xC)
    FVector2D m_camClampHard;                                                         // 0x0098 (size: 0x8)
    FVector2D m_camClampSoft;                                                         // 0x00A0 (size: 0x8)
    float m_sideInputMoveStrength;                                                    // 0x00A8 (size: 0x4)
    TSubclassOf<class ACameraActor> m_flyCamClass;                                    // 0x00B0 (size: 0x8)
    TSubclassOf<class ACameraActor> m_bombCamClass;                                   // 0x00B8 (size: 0x8)
    bool m_analogThrust;                                                              // 0x00C0 (size: 0x1)

}; // Size: 0xD0

struct FSP3CharAbilParamsFreeLook
{
    bool m_useSettings;                                                               // 0x0000 (size: 0x1)
    FVector m_tgtOffset;                                                              // 0x0004 (size: 0xC)
    FVector m_gmblOffset;                                                             // 0x0010 (size: 0xC)
    float m_gmblRadius;                                                               // 0x001C (size: 0x4)
    FVector m_rotLimitV;                                                              // 0x0020 (size: 0xC)
    FVector4 m_camInterp;                                                             // 0x0030 (size: 0x10)
    FVector m_zoomInterp;                                                             // 0x0040 (size: 0xC)
    FVector m_zoomLimit;                                                              // 0x004C (size: 0xC)
    float m_zoomInput;                                                                // 0x0058 (size: 0x4)
    FVector2D m_headInterp;                                                           // 0x005C (size: 0x8)

}; // Size: 0x70

struct FSP3CharAbilParamsGlide
{
    float m_glideDelayMin;                                                            // 0x0000 (size: 0x4)
    FVector m_glideTurnParams;                                                        // 0x0004 (size: 0xC)
    float m_glideFriction;                                                            // 0x0010 (size: 0x4)
    float m_glideGravity;                                                             // 0x0014 (size: 0x4)
    float m_glideBoost;                                                               // 0x0018 (size: 0x4)
    float m_hoverDelayMin;                                                            // 0x001C (size: 0x4)
    float m_hoverBoost;                                                               // 0x0020 (size: 0x4)
    FVector2D m_camOffset;                                                            // 0x0024 (size: 0x8)

}; // Size: 0x2C

struct FSP3CharAbilParamsGroundPound
{
    float m_delayMin;                                                                 // 0x0000 (size: 0x4)
    float m_windupTime;                                                               // 0x0004 (size: 0x4)
    FVector2D m_windupFriction;                                                       // 0x0008 (size: 0x8)
    float m_windupGravity;                                                            // 0x0010 (size: 0x4)
    float m_attackBoost;                                                              // 0x0014 (size: 0x4)
    float m_attackFrictionV;                                                          // 0x0018 (size: 0x4)
    float m_attackGravity;                                                            // 0x001C (size: 0x4)
    float m_landTime;                                                                 // 0x0020 (size: 0x4)
    FName m_socket;                                                                   // 0x0028 (size: 0x8)
    FVector2D m_size;                                                                 // 0x0030 (size: 0x8)
    float m_dmgAmount;                                                                // 0x0038 (size: 0x4)
    TSubclassOf<class UDamageType> m_dmgType;                                         // 0x0040 (size: 0x8)
    TSubclassOf<class UGameplayEffect> m_dmgEffect;                                   // 0x0048 (size: 0x8)
    FGameplayTagContainer m_dmgTags;                                                  // 0x0050 (size: 0x20)
    bool m_dbgDraw;                                                                   // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FSP3CharAbilParamsGun
{
    FComponentReference m_attach;                                                     // 0x0000 (size: 0x18)
    FName m_bone;                                                                     // 0x0018 (size: 0x8)
    TSubclassOf<class AActor> m_gunClass;                                             // 0x0020 (size: 0x8)
    FVector2D m_aimOffset;                                                            // 0x0028 (size: 0x8)
    FVector2D m_aimInterp;                                                            // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FSP3CharAbilParamsJump
{
    float m_heightMin;                                                                // 0x0000 (size: 0x4)
    FVector2D m_holdRange;                                                            // 0x0004 (size: 0x8)
    float m_holdForce;                                                                // 0x000C (size: 0x4)
    float m_lateTime;                                                                 // 0x0010 (size: 0x4)
    float m_moveScalar;                                                               // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FSP3CharAbilParamsMelee
{
    TArray<FSP3CharAbilParamsMeleeAttack> m_attacks;                                  // 0x0000 (size: 0x10)
    bool m_altInput;                                                                  // 0x0010 (size: 0x1)
    float m_tBuffer;                                                                  // 0x0014 (size: 0x4)
    bool m_dbgDraw;                                                                   // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FSP3CharAbilParamsMeleeAttack
{
    FName m_name;                                                                     // 0x0000 (size: 0x8)
    FVector4 m_timeMax;                                                               // 0x0010 (size: 0x10)
    float m_holdMax;                                                                  // 0x0020 (size: 0x4)
    FName m_colSocket;                                                                // 0x0028 (size: 0x8)
    FVector2D m_colSize;                                                              // 0x0030 (size: 0x8)
    float m_dmgAmount;                                                                // 0x0038 (size: 0x4)
    TSubclassOf<class UDamageType> m_dmgType;                                         // 0x0040 (size: 0x8)
    TSubclassOf<class UGameplayEffect> m_dmgEffect;                                   // 0x0048 (size: 0x8)
    FGameplayTagContainer m_dmgTags;                                                  // 0x0050 (size: 0x20)
    float m_moveScalar;                                                               // 0x0070 (size: 0x4)
    float m_turnScalar;                                                               // 0x0074 (size: 0x4)
    bool m_allowAir;                                                                  // 0x0078 (size: 0x1)
    bool m_allowTurn;                                                                 // 0x0079 (size: 0x1)
    bool m_deflectEnable;                                                             // 0x007A (size: 0x1)
    float m_jumpCancel;                                                               // 0x007C (size: 0x4)
    float m_meleeCancel;                                                              // 0x0080 (size: 0x4)
    int32 m_resumeMoveState;                                                          // 0x0084 (size: 0x4)
    FVector4 m_deflectParams;                                                         // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FSP3CharAbilParamsPush
{
    float m_joyMin;                                                                   // 0x0000 (size: 0x4)
    float m_attachTime;                                                               // 0x0004 (size: 0x4)
    TArray<class TSubclassOf<AActor>> m_blockClasses;                                 // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSP3CharAbilParamsRocket
{
    FName m_socketL;                                                                  // 0x0000 (size: 0x8)
    FName m_socketR;                                                                  // 0x0008 (size: 0x8)
    FVector m_delay;                                                                  // 0x0010 (size: 0xC)
    FVector2D m_rotAngle;                                                             // 0x001C (size: 0x8)
    FVector2D m_velAngle;                                                             // 0x0024 (size: 0x8)
    float m_speed;                                                                    // 0x002C (size: 0x4)
    float m_inheritVelH;                                                              // 0x0030 (size: 0x4)
    float m_inheritVelV;                                                              // 0x0034 (size: 0x4)
    bool m_inheritOnlyForward;                                                        // 0x0038 (size: 0x1)
    TSubclassOf<class AActor> m_holdClass;                                            // 0x0040 (size: 0x8)
    TSubclassOf<class AActor> m_projClass;                                            // 0x0048 (size: 0x8)
    bool m_rapidFire;                                                                 // 0x0050 (size: 0x1)
    FVector m_targeting;                                                              // 0x0054 (size: 0xC)
    bool m_relCam;                                                                    // 0x0060 (size: 0x1)

}; // Size: 0x68

struct FSP3CharAbilParamsSwim
{
    TSoftClassPtr<AActor> m_triggerClass;                                             // 0x0000 (size: 0x28)
    FVector m_buoyParams;                                                             // 0x0028 (size: 0xC)
    float m_buoyOffset;                                                               // 0x0034 (size: 0x4)
    float m_moveSpeed;                                                                // 0x0038 (size: 0x4)
    float m_jumpHeight;                                                               // 0x003C (size: 0x4)
    FVector2D m_jumpTime;                                                             // 0x0040 (size: 0x8)
    FVector2D m_dmgTime;                                                              // 0x0048 (size: 0x8)
    TSubclassOf<class UGameplayEffect> m_drownEffect;                                 // 0x0050 (size: 0x8)
    FGameplayTagContainer m_drownTags;                                                // 0x0058 (size: 0x20)

}; // Size: 0x78

struct FSP3CharAbilParamsVehicle
{
    float m_hilightDist;                                                              // 0x0000 (size: 0x4)
    float m_driveDist;                                                                // 0x0004 (size: 0x4)
    bool m_autoMount;                                                                 // 0x0008 (size: 0x1)
    bool m_noDismount;                                                                // 0x0009 (size: 0x1)
    float m_attachTime;                                                               // 0x000C (size: 0x4)
    float m_attachHeight;                                                             // 0x0010 (size: 0x4)
    FVector m_camOffset;                                                              // 0x0014 (size: 0xC)
    FVector2D m_camParams;                                                            // 0x0020 (size: 0x8)
    FVector m_camInterp;                                                              // 0x0028 (size: 0xC)

}; // Size: 0x34

struct FSP3CharAbilityInfo
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    bool Enabled;                                                                     // 0x0008 (size: 0x1)
    bool Active;                                                                      // 0x0009 (size: 0x1)
    bool Blocked;                                                                     // 0x000A (size: 0x1)

}; // Size: 0x10

struct FSP3CharAbilitySet
{
    TArray<FSP3CharAbilityInfo> m_abils;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSP3CharParamsAnim
{
    FVector4 m_tailParams;                                                            // 0x0000 (size: 0x10)
    FVector2D m_tailInterp;                                                           // 0x0010 (size: 0x8)
    FVector2D m_faceInterp;                                                           // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FSP3CharParamsCamera
{
    bool m_useFixedCamera;                                                            // 0x0000 (size: 0x1)
    FRotator m_rotation;                                                              // 0x0004 (size: 0xC)
    FVector m_offset;                                                                 // 0x0010 (size: 0xC)
    float m_FOV;                                                                      // 0x001C (size: 0x4)

}; // Size: 0x20

struct FSP3DragonEggBodyInfo
{
    class USkeletalMesh* m_mesh;                                                      // 0x0000 (size: 0x8)
    TArray<class UMaterialInterface*> m_mats;                                         // 0x0008 (size: 0x10)
    TArray<class UAnimSequence*> m_anims;                                             // 0x0018 (size: 0x10)
    TArray<class UStaticMesh*> m_accHorn;                                             // 0x0028 (size: 0x10)
    TArray<class UStaticMesh*> m_accTail;                                             // 0x0038 (size: 0x10)
    TArray<class UStaticMesh*> m_accHead;                                             // 0x0048 (size: 0x10)
    TArray<class UStaticMesh*> m_accGlasses;                                          // 0x0058 (size: 0x10)
    TArray<class UMaterialInterface*> m_accMats;                                      // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FSP3DragonEggTableRow : public FTableRowBase
{
    FName World;                                                                      // 0x0008 (size: 0x8)
    int32 EggMesh;                                                                    // 0x0010 (size: 0x4)
    int32 EggMat;                                                                     // 0x0014 (size: 0x4)
    int32 BodyMesh;                                                                   // 0x0018 (size: 0x4)
    int32 BodyMat;                                                                    // 0x001C (size: 0x4)
    int32 Anim;                                                                       // 0x0020 (size: 0x4)
    int32 Horn;                                                                       // 0x0024 (size: 0x4)
    int32 tail;                                                                       // 0x0028 (size: 0x4)
    int32 head;                                                                       // 0x002C (size: 0x4)
    int32 Glasses;                                                                    // 0x0030 (size: 0x4)
    int32 AccMat1;                                                                    // 0x0034 (size: 0x4)
    int32 AccMat2;                                                                    // 0x0038 (size: 0x4)
    int32 AccMat3;                                                                    // 0x003C (size: 0x4)
    FText DisplayName;                                                                // 0x0040 (size: 0x18)
    FText Description;                                                                // 0x0058 (size: 0x18)
    FSoftObjectPath PairedMesh;                                                       // 0x0070 (size: 0x18)
    FSoftObjectPath PairedAnim;                                                       // 0x0088 (size: 0x18)
    TSoftClassPtr<AActor> HatchVFX;                                                   // 0x00A0 (size: 0x28)

}; // Size: 0xC8

struct FSP3SparxAttack
{
    FComponentReference m_launcherComp;                                               // 0x0000 (size: 0x18)
    TArray<FSP3SparxAttackLevel> m_level;                                             // 0x0018 (size: 0x10)
    TSubclassOf<class UDamageType> m_dashDmgType;                                     // 0x0028 (size: 0x8)
    float m_dashDmgAmt;                                                               // 0x0030 (size: 0x4)
    FComponentReference m_shieldComp;                                                 // 0x0038 (size: 0x18)
    TSubclassOf<class UDamageType> m_shieldDmgType;                                   // 0x0050 (size: 0x8)
    float m_shieldDmgAmt;                                                             // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FSP3SparxAttackLevel
{
    TSubclassOf<class AActor> m_projClass;                                            // 0x0000 (size: 0x8)
    bool m_automatic;                                                                 // 0x0008 (size: 0x1)
    int32 m_ammoLimit;                                                                // 0x000C (size: 0x4)
    float m_chargeDelay;                                                              // 0x0010 (size: 0x4)
    float m_cycleDelay;                                                               // 0x0014 (size: 0x4)
    FRuntimeFloatCurve m_modulation;                                                  // 0x0018 (size: 0x78)
    FVector2D m_spread;                                                               // 0x0090 (size: 0x8)
    FVector2D m_velocity;                                                             // 0x0098 (size: 0x8)
    FVector m_targeting;                                                              // 0x00A0 (size: 0xC)
    FName m_iconName;                                                                 // 0x00B0 (size: 0x8)
    TSubclassOf<class UAmmoIconWidget> m_iconClass;                                   // 0x00B8 (size: 0x8)

}; // Size: 0xC0

struct FSP3SparxCamera
{
    FRotator m_rotation;                                                              // 0x0000 (size: 0xC)
    FVector m_offset;                                                                 // 0x000C (size: 0xC)
    float m_FOV;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FSP3SparxDamage
{
    float m_healthMax;                                                                // 0x0000 (size: 0x4)
    float m_damageTime;                                                               // 0x0004 (size: 0x4)
    TSubclassOf<class USparxHealthBarWidget> m_uiHealthClass;                         // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSP3SparxEnemyLoot
{
    TSubclassOf<class AActor> LootClass;                                              // 0x0000 (size: 0x8)
    class AActor* SpawnPoint;                                                         // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSP3SparxEnemySimpleMovement
{
    float m_moveSpeed;                                                                // 0x0000 (size: 0x4)
    FVector m_rotInterp;                                                              // 0x0004 (size: 0xC)
    float m_rotQuantize;                                                              // 0x0010 (size: 0x4)
    float m_rotCardRange;                                                             // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FSP3SparxEnemyStage
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FSP3SparxEnemyStageMovement Movement;                                             // 0x0008 (size: 0x38)
    FSP3SparxEnemyStageAttack Attack;                                                 // 0x0040 (size: 0x8)
    FSP3SparxEnemyStageDamage Damage;                                                 // 0x0048 (size: 0x38)
    class UAnimMontage* Animation;                                                    // 0x0080 (size: 0x8)
    TArray<FSP3SparxEnemyStageSequence> Sequence;                                     // 0x0088 (size: 0x10)

}; // Size: 0x98

struct FSP3SparxEnemyStageAttack
{
    int32 MaxShots;                                                                   // 0x0000 (size: 0x4)
    float FireDelay;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSP3SparxEnemyStageDamage
{
    TArray<FName> InvulnParts;                                                        // 0x0000 (size: 0x10)
    TArray<class TSubclassOf<UDamageType>> AcceptDmg;                                 // 0x0010 (size: 0x10)
    TArray<class TSubclassOf<UDamageType>> IgnoreDmg;                                 // 0x0020 (size: 0x10)
    ESP3_ProjColType ProjColType;                                                     // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FSP3SparxEnemyStageMovement
{
    ESP3SparxEnemyStageMoveType MoveType;                                             // 0x0000 (size: 0x1)
    float MoveSpeed;                                                                  // 0x0004 (size: 0x4)
    ESP3SparxEnemyStageRotType RotType;                                               // 0x0008 (size: 0x1)
    FVector RotInterp;                                                                // 0x000C (size: 0xC)
    float RotQuantize;                                                                // 0x0018 (size: 0x4)
    FVector MoveInput;                                                                // 0x001C (size: 0xC)
    float RotInput;                                                                   // 0x0028 (size: 0x4)
    class AActor* Spline;                                                             // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FSP3SparxEnemyStageSequence
{
    ESP3SparxEnemyStageSeqType Type;                                                  // 0x0000 (size: 0x1)
    float Value;                                                                      // 0x0004 (size: 0x4)
    FName NextStage;                                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSP3SparxMovement
{
    float m_moveSpeed;                                                                // 0x0000 (size: 0x4)
    FVector m_rotInterp;                                                              // 0x0004 (size: 0xC)
    float m_rotQuantize;                                                              // 0x0010 (size: 0x4)
    float m_dashSpeed;                                                                // 0x0014 (size: 0x4)
    float m_joyMin;                                                                   // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FSP3_BoxerAI
{
    FVector2D m_range;                                                                // 0x0000 (size: 0x8)
    FVector2D m_decision;                                                             // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSP3_BoxerAttack
{
    FName m_name;                                                                     // 0x0000 (size: 0x8)
    FVector m_timeMax;                                                                // 0x0008 (size: 0xC)
    class UAnimMontage* m_animation;                                                  // 0x0018 (size: 0x8)
    FComponentReference m_colComp;                                                    // 0x0020 (size: 0x18)
    FVector2D m_colSize;                                                              // 0x0038 (size: 0x8)
    float m_dmgAmount;                                                                // 0x0040 (size: 0x4)
    TSubclassOf<class USP3_BoxerDmgType> m_dmgType;                                   // 0x0048 (size: 0x8)

}; // Size: 0x50

struct FSP3_BoxerDamage
{
    float m_healthMax;                                                                // 0x0000 (size: 0x4)
    float m_damageTime;                                                               // 0x0004 (size: 0x4)
    float m_blockDelay;                                                               // 0x0008 (size: 0x4)
    float m_blockMin;                                                                 // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSP3_BoxerMovement
{
    float m_moveSpeed;                                                                // 0x0000 (size: 0x4)
    FVector m_rotInterp;                                                              // 0x0004 (size: 0xC)

}; // Size: 0x10

struct FSP3_CMSkateTuning
{
    float GroundSpeed;                                                                // 0x0000 (size: 0x4)
    float GroundAccel;                                                                // 0x0004 (size: 0x4)
    FVector RotInterpGround;                                                          // 0x0008 (size: 0xC)
    FVector RotInterpAir;                                                             // 0x0014 (size: 0xC)
    FVector BoardSize;                                                                // 0x0020 (size: 0xC)
    FVector BoardOffset;                                                              // 0x002C (size: 0xC)
    float WheelRadius;                                                                // 0x0038 (size: 0x4)
    float RollFriction;                                                               // 0x003C (size: 0x4)
    float RollAngMax;                                                                 // 0x0040 (size: 0x4)
    float RollGravScalar;                                                             // 0x0044 (size: 0x4)
    float RollStickScalar;                                                            // 0x0048 (size: 0x4)
    float JumpHeight;                                                                 // 0x004C (size: 0x4)
    float AirLevelInterp;                                                             // 0x0050 (size: 0x4)
    float AirGravScalar;                                                              // 0x0054 (size: 0x4)
    float AirVertAngle;                                                               // 0x0058 (size: 0x4)
    float LandAngMaxUp;                                                               // 0x005C (size: 0x4)
    float LandSideVelMax;                                                             // 0x0060 (size: 0x4)
    float LandSlopeMax;                                                               // 0x0064 (size: 0x4)
    float CrashTimeMax;                                                               // 0x0068 (size: 0x4)

}; // Size: 0x6C

struct FSkateTrick : public FTableRowBase
{
    FText TrickText;                                                                  // 0x0008 (size: 0x18)
    int32 MaxScore;                                                                   // 0x0020 (size: 0x4)
    int32 Erasure;                                                                    // 0x0024 (size: 0x4)
    FString MoveString;                                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FSkillPointStruct : public FTableRowBase
{
    ESkillPoint skill;                                                                // 0x0008 (size: 0x1)
    FText Name;                                                                       // 0x0010 (size: 0x18)
    FText Description;                                                                // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FSpawnDestination
{
    FComponentReference MoveOut;                                                      // 0x0000 (size: 0x18)
    class AActor* Spline;                                                             // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FSpawnOutlet
{
    class AActor* Outlet;                                                             // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FSpawnOutlets
{
    TArray<FSpawnOutlet> OutletList;                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSpawnTemplate
{
    FName ID;                                                                         // 0x0000 (size: 0x8)
    FName TargetID;                                                                   // 0x0008 (size: 0x8)
    bool IsFriendly;                                                                  // 0x0010 (size: 0x1)
    TSubclassOf<class ACharacter> SpawnType;                                          // 0x0018 (size: 0x8)
    class ATargetPoint* SpawnPt;                                                      // 0x0020 (size: 0x8)
    class ATargetPoint* ClimbPath;                                                    // 0x0028 (size: 0x8)
    class ATargetPoint* BridgePath;                                                   // 0x0030 (size: 0x8)
    class ATargetPoint* LookAt;                                                       // 0x0038 (size: 0x8)
    bool TriggeredSpawn;                                                              // 0x0040 (size: 0x1)
    bool TriggeredStart;                                                              // 0x0041 (size: 0x1)
    class ACharacter* spawnedChar;                                                    // 0x0048 (size: 0x8)

}; // Size: 0x58

struct FSpawnTemplateList
{
    TArray<class TSubclassOf<ACharacter>> SpawnCharacters;                            // 0x0000 (size: 0x10)
    ESpawnOrder SpawnOrderPolicy;                                                     // 0x0010 (size: 0x4)
    class UAnimMontage* DefaultExitMontage;                                           // 0x0018 (size: 0x8)
    TArray<class TSubclassOf<ACharacter>> SpawnTemplates;                             // 0x0020 (size: 0x10)

}; // Size: 0x38

struct FSublevelNameData : public FTableRowBase
{
    FName SublevelName;                                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FTargetFieldType
{
    ETargetField Enum;                                                                // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FTargetMetadata
{
    TArray<FName> Points;                                                             // 0x0000 (size: 0x10)
    TArray<FName> Montages;                                                           // 0x0010 (size: 0x10)
    TArray<FName> voices;                                                             // 0x0020 (size: 0x10)
    TArray<FName> states;                                                             // 0x0030 (size: 0x10)
    bool watchesPlayer;                                                               // 0x0040 (size: 0x1)
    FTargetReferences refs;                                                           // 0x0041 (size: 0x1)

}; // Size: 0x48

struct FTargetReference
{
}; // Size: 0x1

struct FTargetReferences
{
}; // Size: 0x1

struct FTrackedStatRecord
{
    FString Key;                                                                      // 0x0000 (size: 0x10)
    EInventoryType inventoryType;                                                     // 0x0010 (size: 0x1)
    int32 Count;                                                                      // 0x0014 (size: 0x4)

}; // Size: 0x18

class AAgent9TopDown : public AQuestController
{
    class AActor* EntryGate;                                                          // 0x03E8 (size: 0x8)
    class ATriggerBase* ExitTrigger;                                                  // 0x03F0 (size: 0x8)
    TArray<FAgent9TopDownRoom> Rooms;                                                 // 0x03F8 (size: 0x10)
    FName IconName;                                                                   // 0x0408 (size: 0x8)
    TSubclassOf<class UHudCounterComponent> ScoreUIClass;                             // 0x0410 (size: 0x8)
    EFalconHudWidgetPosition ScoreUIPosition;                                         // 0x0418 (size: 0x1)
    TArray<class AActor*> m_currentRoomEnemies;                                       // 0x04F0 (size: 0x10)
    TArray<class AActor*> m_optionalEnemies;                                          // 0x0500 (size: 0x10)

    void Ticking(class UQuestActionsComponent* Actions);
    void SpawnerReady(class AActor* spawner);
    void RegisterRoomTriggerOverlapBegin();
    void RegisterExitTriggerOverlapBegin();
    void PlayerFinishedWalking();
    void OnWalkPlayer(class APlayerController* plyrCtrl, class ATargetPoint* TargetPoint);
    void OnRoomTriggerOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnOpenGate(class AActor* gate);
    void OnExitTriggerOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnCloseGate(class AActor* gate);
    void OnCleanup();
    void Idle(class UQuestActionsComponent* Actions);
    void ForgetEnemy(class AActor* Enemy);
    void Completed(class UQuestActionsComponent* Actions);
}; // Size: 0x518

class AAirshipController : public AQuestController
{
    FAirshipControllerGoSpyroGo GoSpyroGo;                                            // 0x03E8 (size: 0x10)
    FAirshipFMV AirshipFMV;                                                           // 0x03F8 (size: 0x10)
    FDataTableRowHandle CurrentHub;                                                   // 0x0408 (size: 0x10)
    class AMasterLightingManager* LightingManager;                                    // 0x0418 (size: 0x8)
    TSubclassOf<class AActor> SpyroIgc;                                               // 0x0420 (size: 0x8)
    class USphereComponent* SphereComponent;                                          // 0x0428 (size: 0x8)
    TArray<class TSubclassOf<APortal>> AirshipList;                                   // 0x0430 (size: 0x10)
    int32 MinAirshipIndex;                                                            // 0x0440 (size: 0x4)
    class AActor* AirshipIGC;                                                         // 0x0448 (size: 0x8)
    bool IgnoreDesignerControl;                                                       // 0x0450 (size: 0x1)
    class APortal* m_airship;                                                         // 0x0458 (size: 0x8)

    void updateAirship();
    void Unlocked(class UQuestActionsComponent* Actions);
    void ReadyForNextRealm(class UQuestActionsComponent* Actions);
    void OutOfWorld(class UQuestActionsComponent* Actions);
    void onSphereOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Locked(class UQuestActionsComponent* Actions);
    bool IsDebugMode();
    void Hidden(class UQuestActionsComponent* Actions);
    void ForceBoarding(class UQuestActionsComponent* Actions);
}; // Size: 0x460

class AAreaExitController : public APortalController
{

    void onQuestAreaExitRequested(EFalconAreaExitTitle Title);
}; // Size: 0x420

class ABalloonistController : public AMobileDenizenController
{

    void Instructing(class UQuestActionsComponent* Actions);
    void Guiding(class UQuestActionsComponent* Actions);
    void Celebrating(class UQuestActionsComponent* Actions);
    void Ballooning(class UQuestActionsComponent* Actions);
}; // Size: 0x418

class ABattleTankMinigame : public AQuestController
{
    float fadeTime;                                                                   // 0x03E8 (size: 0x4)
    TSubclassOf<class AActor> EnemyClass;                                             // 0x03F0 (size: 0x8)
    TArray<TWeakObjectPtr<AActor>> Part1SpawnPoints;                                  // 0x03F8 (size: 0x10)
    TArray<TWeakObjectPtr<AActor>> Part2SpawnPoints;                                  // 0x0408 (size: 0x10)
    TSoftObjectPtr<AActor> PlayerStartTarget;                                         // 0x0418 (size: 0x28)
    TSoftObjectPtr<AActor> PlayerEndTarget;                                           // 0x0440 (size: 0x28)
    FName IconName;                                                                   // 0x0468 (size: 0x8)
    TSubclassOf<class UHudCounterComponent> ScoreUIClass;                             // 0x0470 (size: 0x8)
    EFalconHudWidgetPosition ScoreUIPosition;                                         // 0x0478 (size: 0x1)

    void Ticking(class UQuestActionsComponent* Actions);
    void StartPart2(class UQuestActionsComponent* Actions);
    void StartPart1(class UQuestActionsComponent* Actions);
    void StartFree(class UQuestActionsComponent* Actions);
    void Idle(class UQuestActionsComponent* Actions);
    void Completed(class UQuestActionsComponent* Actions);
    void BP_VictoryPhase1();
    void BP_StartDriveTank();
    void BP_OnStartFree();
    void BP_OnPhase2Start();
    void BP_EndDriveTank();
    void BP_CleanupBattleTank();
}; // Size: 0x568

class ABiancaController : public ASimpleDenizenController
{
    float FlyingDuration;                                                             // 0x0408 (size: 0x4)
    float SpeedUpTime;                                                                // 0x040C (size: 0x4)
    float SpeedUpPoint;                                                               // 0x0410 (size: 0x4)

    void StartRainbowTrail(class USplineComponent* Spline);
    void ReceiveRainbowDone();
    void ReceiveRainbowCanceled();
    void ReceiveFlyingUpdate(class USplineComponent* Spline, float splineTime);
}; // Size: 0x438

class ABlutoController : public APhasmidCharacter
{
    float turnSpeed;                                                                  // 0x0818 (size: 0x4)
    float MoveSpeed;                                                                  // 0x081C (size: 0x4)
    float missileCount;                                                               // 0x0820 (size: 0x4)

    void FireProjectile();
}; // Size: 0x8A0

class ABossCharacter : public ACharacter
{
    class USP3_BossCharacterComponent* BossComponent;                                 // 0x0720 (size: 0x8)
    class AActor* Battleground;                                                       // 0x0728 (size: 0x8)

}; // Size: 0x730

class ABoxingChallenge : public AQuestController
{
    class AActor* Opponent;                                                           // 0x03E8 (size: 0x8)
    class AActor* Coach;                                                              // 0x03F0 (size: 0x8)
    class ACameraActor* Camera;                                                       // 0x03F8 (size: 0x8)
    class AActor* CornerBlue;                                                         // 0x0400 (size: 0x8)
    class AActor* CornerRed;                                                          // 0x0408 (size: 0x8)
    class AActor* CoachCorner;                                                        // 0x0410 (size: 0x8)
    class AActor* CoachWatch;                                                         // 0x0418 (size: 0x8)
    int32 NumRounds;                                                                  // 0x0420 (size: 0x4)
    float RoundLength;                                                                // 0x0424 (size: 0x4)
    float PlyrHealth;                                                                 // 0x0428 (size: 0x4)
    float OppHealth;                                                                  // 0x042C (size: 0x4)
    float CornerHeal;                                                                 // 0x0430 (size: 0x4)
    FName HighScoreKey;                                                               // 0x0438 (size: 0x8)
    TArray<class ALevelSequenceActor*> RoundStartSeqs;                                // 0x0440 (size: 0x10)
    int32 BonusRoundNum;                                                              // 0x0450 (size: 0x4)
    ESkillPoint BonusSkillPoint;                                                      // 0x0454 (size: 0x1)
    float VictoryTime;                                                                // 0x0458 (size: 0x4)
    float RoundOverTime;                                                              // 0x045C (size: 0x4)
    float fadeTime;                                                                   // 0x0460 (size: 0x4)
    FName UIIconPlayer;                                                               // 0x0468 (size: 0x8)
    FName UIIconOpponent;                                                             // 0x0470 (size: 0x8)

    void Ticking(class UQuestActionsComponent* Actions);
    void RxLevelSeqFinished();
    void RxBoxerVFXEvent(class USP3_BoxerComponent* boxer, FName evtName, const FTransform& xfm, FName param0, float param1);
    void OnVFXEvent(FName evtName);
    void OnUpdateUI(class APlayerController* plyrCtrl, FName Type, class UWidget* Widget, FName param0, float param1);
    class UWidget* OnCreateUI(class APlayerController* plyrCtrl, FName Type, FName param0, float param1);
    void Idle(class UQuestActionsComponent* Actions);
    void Completed(class UQuestActionsComponent* Actions);
}; // Size: 0x570

class AButtonController : public AQuestController
{
    FGameplayTagContainer DamageTags;                                                 // 0x03E8 (size: 0x20)
    bool TriggersOnDamageTaken;                                                       // 0x0408 (size: 0x1)
    bool RequiresActivateSignal;                                                      // 0x0409 (size: 0x1)

    void Untriggerable(class UQuestActionsComponent* Actions);
    void Triggerable(class UQuestActionsComponent* Actions);
    int32 ToggleButton();
    void OnTakeDamage(class AActor* Actor, const FGameplayEventData Data);
    void OnButtonChanged(int32 State);
    void OnActorBeginOverlap(class AActor* MyOverlappedActor, class AActor* OtherActor);
}; // Size: 0x410

class ABuzzController : public AAIController
{
    TArray<FBuzzSkillSet> SkillSet;                                                   // 0x0438 (size: 0x10)
    float HopDuration;                                                                // 0x0448 (size: 0x4)
    float HopDistance;                                                                // 0x044C (size: 0x4)
    float FieldRadius;                                                                // 0x0450 (size: 0x4)
    class UBlackboardData* BlackboardAsset;                                           // 0x0458 (size: 0x8)
    class UBehaviorTree* BehaviorTreeAsset;                                           // 0x0460 (size: 0x8)
    FGameplayTagContainer SpyroLavaDamageTags;                                        // 0x0468 (size: 0x20)
    FGameplayTagContainer SpyroDamageMovementFilter;                                  // 0x0488 (size: 0x20)
    TSubclassOf<class UGameplayEffect> DamageEffectClass;                             // 0x04A8 (size: 0x8)

    void OnActorHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
}; // Size: 0x610

class ACameraController : public AQuestController
{
    class AActor* Opponent;                                                           // 0x03E8 (size: 0x8)
    float InterpTime;                                                                 // 0x03F0 (size: 0x4)
    bool UseSecTarget;                                                                // 0x03F4 (size: 0x1)
    FVector SecTargetOffset;                                                          // 0x03F8 (size: 0xC)
    class UCurveFloat* ReturnToTargetCurve;                                           // 0x0408 (size: 0x8)

    void Idle(class UQuestActionsComponent* Actions);
    void Active(class UQuestActionsComponent* Actions);
}; // Size: 0x410

class ACatHockeyChallenge : public AQuestController
{
    class AActor* EndGamePoint;                                                       // 0x03E8 (size: 0x8)
    class AActor* PlayerStartPoint;                                                   // 0x03F0 (size: 0x8)
    class AActor* EnemyStartPoint;                                                    // 0x03F8 (size: 0x8)
    class AActor* CatStartPoint;                                                      // 0x0400 (size: 0x8)
    class AActor* PlayerGoalPeg;                                                      // 0x0408 (size: 0x8)
    class AActor* EnemyGoalPeg;                                                       // 0x0410 (size: 0x8)
    class AActor* EnemyPawn;                                                          // 0x0418 (size: 0x8)
    TSubclassOf<class APawn> CatClass;                                                // 0x0420 (size: 0x8)
    int32 GoalsToScore;                                                               // 0x0428 (size: 0x4)
    int32 MaxCatsOnField;                                                             // 0x042C (size: 0x4)
    float CatSpawnDelay;                                                              // 0x0430 (size: 0x4)
    TSubclassOf<class UHudCounterComponent> ScoreUIClass;                             // 0x0438 (size: 0x8)
    FName PlayerIconName;                                                             // 0x0440 (size: 0x8)
    EFalconHudWidgetPosition PlayerScoreUIPosition;                                   // 0x0448 (size: 0x1)
    FName EnemyIconName;                                                              // 0x0450 (size: 0x8)
    EFalconHudWidgetPosition EnemyScoreUIPosition;                                    // 0x0458 (size: 0x1)
    float fadeTime;                                                                   // 0x045C (size: 0x4)

    void Ticking(class UQuestActionsComponent* Actions);
    void ScorePlayer(class AActor* Actor, bool IsPlayerGoal);
    void Idle(class UQuestActionsComponent* Actions);
    void Completed(class UQuestActionsComponent* Actions);
}; // Size: 0x578

class AChallengeController : public AQuestController
{
    FName IconName;                                                                   // 0x03E8 (size: 0x8)
    TSubclassOf<class UHudTimerComponent> TimerUIClass;                               // 0x03F0 (size: 0x8)
    TSubclassOf<class UHudCounterComponent> ScoreUIClass;                             // 0x03F8 (size: 0x8)
    EFalconHudWidgetPosition ScoreUIPosition;                                         // 0x0400 (size: 0x1)
    float AutoHideDelay;                                                              // 0x0404 (size: 0x4)
    bool DisplaysCounterOnChallengeStart;                                             // 0x0408 (size: 0x1)
    bool DisplaysScoreCounter;                                                        // 0x0409 (size: 0x1)
    TSubclassOf<class ACameraActor> CameraClass;                                      // 0x0410 (size: 0x8)
    float CameraInterpTime;                                                           // 0x0418 (size: 0x4)
    ESkillPoint AwardsSkillPoint;                                                     // 0x041C (size: 0x1)
    int32 Goal;                                                                       // 0x0420 (size: 0x4)
    FName Units;                                                                      // 0x0428 (size: 0x8)
    bool bInfiniteTimer;                                                              // 0x0430 (size: 0x1)
    bool bScored;                                                                     // 0x0431 (size: 0x1)
    FName HighScoreKey;                                                               // 0x0438 (size: 0x8)
    int32 HighScorePrev;                                                              // 0x0440 (size: 0x4)
    float TimerDuration;                                                              // 0x0444 (size: 0x4)
    class UQuestChallengeTask* ChallengeTimer;                                        // 0x0448 (size: 0x8)
    class UHudTimerComponent* TimerComponent;                                         // 0x0450 (size: 0x8)
    class UHudCounterComponent* ScoreComponent;                                       // 0x0458 (size: 0x8)
    TWeakObjectPtr<class ACameraActor> Camera;                                        // 0x0460 (size: 0x8)

    void TimerTick(float dt);
    void Ticking(class UQuestActionsComponent* Actions);
    void StartChallengeTimer(class UQuestActionsComponent* Actions);
    void Idle(class UQuestActionsComponent* Actions);
    void Expired(class UQuestActionsComponent* Actions);
    void Completed(class UQuestActionsComponent* Actions);
}; // Size: 0x470

class ACustomCamera_Skateboard : public AActor
{
    FVector m_tgtOffset;                                                              // 0x0318 (size: 0xC)
    FVector m_camOffset;                                                              // 0x0324 (size: 0xC)
    FVector m_vertOffset;                                                             // 0x0330 (size: 0xC)
    FVector2D m_posInterp;                                                            // 0x033C (size: 0x8)
    FVector2D m_clampZ;                                                               // 0x0344 (size: 0x8)
    float m_yShift;                                                                   // 0x034C (size: 0x4)
    float m_crashDist;                                                                // 0x0350 (size: 0x4)
    float m_tgtPitch;                                                                 // 0x0354 (size: 0x4)
    float m_maxPitchOffset;                                                           // 0x0358 (size: 0x4)
    float m_steadyTime;                                                               // 0x035C (size: 0x4)
    FVector2D m_pitchInterp;                                                          // 0x0360 (size: 0x8)

    void ForceCutCamera();
}; // Size: 0x3B8

class ACustomCamera_TopDown : public AActor
{
    float m_angle;                                                                    // 0x0318 (size: 0x4)
    float m_height;                                                                   // 0x031C (size: 0x4)

}; // Size: 0x320

class ACutsceneController : public AQuestController
{

    void ZapPlayer(const FName& Checkpoint, class UQuestActionsComponent* Actions);
    void Restoring(class UQuestActionsComponent* Actions);
    void Playing(class UQuestActionsComponent* Actions);
    void FadingOut(class UQuestActionsComponent* Actions);
}; // Size: 0x3F0

class ADEPRECATED_QuestGate : public AActor
{
    EGateState GateState;                                                             // 0x0318 (size: 0x1)

    void SetState(EGateState NewState);
    void Open();
    void Close();
}; // Size: 0x320

class ADestructibleController : public AQuestController
{

    void OnTakeDamage(class AActor* Actor, const FGameplayEventData Data);
}; // Size: 0x3E8

class AEggController : public AQuestController
{
    bool SkipZap;                                                                     // 0x03E8 (size: 0x1)

    void ZapPlayer(const FName& Checkpoint, class UQuestActionsComponent* Actions);
    void SetPosition(const FName& where, const FName& moveMode, class UQuestActionsComponent* Actions);
    void Revealed(class UQuestActionsComponent* Actions);
    void OutOfWorld(class UQuestActionsComponent* Actions);
    void Hidden(class UQuestActionsComponent* Actions);
    void GreetPlayer(const FGreeting& Greeting, class UQuestActionsComponent* Actions);
    void GiveEgg(const FName& egg, class UQuestActionsComponent* Actions);
    void EggUI(FString Name, bool alreadyCollected);
}; // Size: 0x3F0

class AEnemyGeneratorChallenge : public AChallengeController
{
    class AEnemySpawnPool* EnemySpawnPool;                                            // 0x0470 (size: 0x8)

}; // Size: 0x478

class AEnemySpawnPool : public AActor
{
    bool bEnabledByDefault;                                                           // 0x0470 (size: 0x1)
    TArray<class ATargetPoint*> SeedPoints;                                           // 0x0478 (size: 0x10)
    FSpawnTemplateList SpawnTemplates;                                                // 0x0488 (size: 0x38)
    ESpawnPointPolicy SelectionPolicy;                                                // 0x04C0 (size: 0x4)
    int32 MaxConcurrentSpawns;                                                        // 0x04C4 (size: 0x4)
    int32 ConcurrentOutletLimiter;                                                    // 0x04C8 (size: 0x4)
    bool IgnoreMaxSpawns;                                                             // 0x04CC (size: 0x1)
    int32 MaxTotalSpawns;                                                             // 0x04D0 (size: 0x4)
    bool SpawnOffscreen;                                                              // 0x04D4 (size: 0x1)
    bool UseSlowSpawn;                                                                // 0x04D5 (size: 0x1)
    float ActivateRange;                                                              // 0x04D8 (size: 0x4)
    float TimeBetweenSpawns;                                                          // 0x04DC (size: 0x4)
    FComponentReference DefaultLocation;                                              // 0x04E0 (size: 0x18)
    FSpawnDestination DestinationDefaults;                                            // 0x04F8 (size: 0x20)
    TArray<FSpawnDestination> DestinationsExclusive;                                  // 0x0518 (size: 0x10)
    class UAnimMontage* DefaultMontage;                                               // 0x0528 (size: 0x8)
    FSpawnOutlets SpawnOutlets;                                                       // 0x0530 (size: 0x10)
    ESpawnActorCollisionHandlingMethod SpawnCollisionMethod;                          // 0x0540 (size: 0x1)
    class UBillboardComponent* EditorSprite;                                          // 0x0548 (size: 0x8)
    class UQuestTask* m_slowSpawn;                                                    // 0x0550 (size: 0x8)
    TArray<class TSubclassOf<ACharacter>> SpawnCharacters;                            // 0x0558 (size: 0x10)
    ESpawnOrder SpawnOrderPolicy;                                                     // 0x0568 (size: 0x4)
    TArray<FComponentReference> ExclusiveDestinations;                                // 0x0570 (size: 0x10)
    FComponentReference DefaultDestination;                                           // 0x0580 (size: 0x18)

    void ShutdownSpawner();
    void ReceiveExhaustedSpawner();
    void ReceiveEnemySpawned(class AActor* Enemy);
    void ReceiveEnemyDefeated(class AActor* Enemy);
    void OnSP3DeathStart(class AActor* Actor);
    void OnSP3DeathEnd(class AActor* Actor);
    void OnDestroy(class AActor* Actor);
    void OnDeathState(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void DestroyAllEnemies();
}; // Size: 0x5D0

class AFalconGameModeBase : public APhasmidGameMode
{
    class UQuestLevelManager* Quests;                                                 // 0x03C8 (size: 0x8)

    class UQuestLevelManager* GetQuestLevelManager();
}; // Size: 0x3D0

class AFalconGameStateBase : public AGameStateBase
{
    FFalconGameStateBaseOnPlayerDied OnPlayerDied;                                    // 0x0368 (size: 0x10)
    FFalconGameStateBaseOnPlayerReady OnPlayerReady;                                  // 0x0378 (size: 0x10)
    FFalconGameStateBaseOnPlayerReadyS3 OnPlayerReadyS3;                              // 0x0388 (size: 0x10)
    FFalconGameStateBaseOnPlayerTeleportedS3 OnPlayerTeleportedS3;                    // 0x0398 (size: 0x10)
    FFalconGameStateBaseOnChangeSaveGame OnChangeSaveGame;                            // 0x03A8 (size: 0x10)
    FFalconGameStateBaseOnGameStateChanged OnGameStateChanged;                        // 0x03B8 (size: 0x10)
    FFalconGameStateBaseOnQuestAreaExitRequested onQuestAreaExitRequested;            // 0x03C8 (size: 0x10)
    FFalconGameStateBaseOnGameUnpaused OnGameUnpaused;                                // 0x03D8 (size: 0x10)
    class UAchievementComponent* AchievementComponent;                                // 0x03E8 (size: 0x8)
    class UFalconGameSaveComponent* FalconGameSaveComponent;                          // 0x03F0 (size: 0x8)
    class USkillPointComponent* SkillPointComponent;                                  // 0x03F8 (size: 0x8)
    class UFanfareComponent* FanfareComponent;                                        // 0x0400 (size: 0x8)
    FPhasmidObjectSaveDataList defaultFalconSaveDataList;                             // 0x0408 (size: 0x10)
    EFalconGameState theCurrentGameState;                                             // 0x0418 (size: 0x1)
    EFalconGameState thePreviousGameState;                                            // 0x0419 (size: 0x1)
    FFalconGameStateBaseOnUndeservedEggsChange OnUndeservedEggsChange;                // 0x0420 (size: 0x10)
    int32 levelStartingTreasure;                                                      // 0x0430 (size: 0x4)
    int32 levelStartingTreasureSpent;                                                 // 0x0434 (size: 0x4)
    FString enabledCheat;                                                             // 0x0438 (size: 0x10)
    TArray<class UDataTable*> _gameLevelMaps;                                         // 0x0448 (size: 0x10)
    class UDataTable* _levelStreamingTable;                                           // 0x0458 (size: 0x8)
    class UAkAudioEvent* PauseSoundsEvent;                                            // 0x0460 (size: 0x8)
    class UAkAudioEvent* UnpauseSoundsEvent;                                          // 0x0468 (size: 0x8)
    class UDataTable* _skillPointsTable;                                              // 0x0470 (size: 0x8)
    bool bPlayerReady;                                                                // 0x0478 (size: 0x1)
    class ATransportManager* transporter;                                             // 0x0490 (size: 0x8)

    void SystemStart();
    void SystemRestartAfterLogin(bool userAdded);
    void ShowLoadScreen(bool Show, float fadeTime, TEnumAsByte<EFalconLoadScreen::Type> screenType);
    void ShowInventoryUI();
    void SaveGame(EPhasmidSaveType saveType, FString LevelPath);
    void SaveFileCreated();
    void RespawningPlayer(FString Checkpoint);
    void PlayerDied(class AActor* Actor, const FGameplayEventData Payload);
    bool PauseGameState(bool Pause, bool ForceUnpause);
    void OnPlayerReadyCallback();
    void OnGameUnpaused__DelegateSignature();
    void OnGameLoadCompleteCallback();
    void LoadGameAsync(bool forceReload, bool skipRestore);
    void LoadGame(bool forceReload, bool skipRestore);
    bool IsDevelopmentBuild();
    void InvokeSystemLogin();
    float GetTimePlayedForGame();
    void ChangeTheStateOfTheGame(EFalconGameState newGameState);
    TEnumAsByte<EFalconLevelLoadable::Type> CanLoadLevel(FString LevelShortName);
    void BP_SetPlayerInventoryItemCount(EInventoryType ItemType, int32 Count, bool updateSettings);
    void BP_SaveProgression(const class AActor* playerStartActor);
    void BP_RespawnPlayer();
    void BP_LoadIntoLevel(FName PortalRow, FName PortalName, TEnumAsByte<EFalconLoadScreen::Type> screenType);
}; // Size: 0x4A8

class AFalconHud : public AHUD
{
    class UFalconRebindableInputSystem* RebindableInputSystem;                        // 0x0420 (size: 0x8)
    bool bIsStuckFixEnabled;                                                          // 0x0428 (size: 0x1)

    void UpdateMouseCursorVisibility(EInputSource Unused);
    void UnforceInputSource();
    void SetUseOldKeyboardMouseConfig(bool UseOldConfig);
    void SetUseMouseForFlying(bool UseMouse);
    void SetMouseYForFlyingInverted(bool isInverted);
    void SetInputToUIOnlyMode(class UWidget* WidgetToFocus, EMouseLockMode MouseLockMode);
    void SetInputToGameOnlyMode();
    void SetFlySensitivity(float FlyXAxis, float FlyYAxis);
    void SetChargeSensitivity(float Value);
    void SetChargeModifierToDefault();
    void SetChargeModifier(float Value);
    void SaveGameMaximize();
    void ResetMouseYForFlyingInverted();
    void ResetFlySensitivity();
    void ResetChargeSensitivity();
    void ResetAllKeybindsToDefault();
    void PrintAllKeybindings();
    void PrintAllChangedKeybindingsInSave();
    bool IsStuckFixEnabled();
    bool IsKeyValid(FKey InKey);
    bool IsKeyContainedInInputBindingsFromIni(const FName IniBinding, const FKeyEvent& KeyEvent);
    bool IsConsole();
    class UFalconRebindableInputSystem* GetRebindableInputSystem();
    class UDataTable* GetDebugButtonPanelTable();
    float GetChargeModifier();
    void ForceInputSource(int32 Source);
    void FlightSummaryShow();
    void FlightSummaryHide();
    void FlightSummaryConfigure(class UObject* aOwner, EInventoryType flightReward, const TArray<FFlightResult>& targetResults, EFlightLevelResult FlightResult, float Time, float bestTime, int32 place);
    void FlightScreenShow(UClass* flightScreenWidgetClass, float startingSeconds, bool orbChallenge, const TArray<EFlightLevelTargetType>& Targets);
    void FlightScreenHide(UClass* flightScreenWidgetClass);
    float FlightScreenGetTimeRemaining();
    float FlightScreenGetTimeElapsed();
    void FlightScreenCollect(UClass* flightScreenWidgetClass, EFlightLevelTargetType ItemType, float bonusSeconds);
    void EnableStuckFix();
    void DisableStuckFix();
    FKeyEvent CreateKeyEvent(FKey InKey);
    void ChangeKeyboardAxisKeybindingToKey(FName BindingName, FString KeyName, int32 Entry, float Scale);
    void ChangeKeyboardActionKeybindingToKey(FName BindingName, FString KeyName, int32 Entry);
    void BP_ShowTreasureCount(bool Show);
    void BP_ShowLevelInventory(bool Show, bool autohide);
    void BP_HudInventoryUpdated();
}; // Size: 0x430

class AFalconLoadingScreen : public AActor
{
    class USceneComponent* SceneComponent;                                            // 0x0318 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0320 (size: 0x8)
    class UStaticMeshComponent* StageMesh;                                            // 0x0328 (size: 0x8)
    class USkeletalMeshComponent* SpyroMesh;                                          // 0x0330 (size: 0x8)
    float ElapsedTime;                                                                // 0x0338 (size: 0x4)
    float CurrentFadeTime;                                                            // 0x033C (size: 0x4)
    int32 StateSelect;                                                                // 0x0340 (size: 0x4)
    int32 InitialState;                                                               // 0x0344 (size: 0x4)
    FVector SpyroMeshOffset;                                                          // 0x0348 (size: 0xC)
    FRotator SpyroMeshRotOffset;                                                      // 0x0354 (size: 0xC)
    TArray<FFalconLoadingStateCallbacks> states;                                      // 0x0360 (size: 0x10)

    void UpdateSpyroMeshPosition(class USplineComponent* Spline, float Time);
    void StopStateMachine();
    void StartState(int32 StateIndex);
    void ShowLoadScreen(TEnumAsByte<EFalconLoadScreen::Type> screenType, float fadeTime);
    int32 RegisterState(FRegisterStateStart Start, FRegisterStateUpdate Update);
    void HideLoadScreen(float fadeTime);
    void EndState(int32 NextStateIndex);
    void BP_OnShowLoadScreen(TEnumAsByte<EFalconLoadScreen::Type> screenType);
    void BP_OnHideLoadScreen();
}; // Size: 0x380

class AFalconScreenManager : public AActor
{
    class UDataTable* _widgetTable;                                                   // 0x0320 (size: 0x8)
    TMap<class EFalconScreenLayerType, class UFalconLayerWidget*> _layers;            // 0x0328 (size: 0x50)

    void SetActiveLayer(EFalconScreenLayerType inLayerType);
    void RemoveScreen(EFalconScreenType inScreen, bool inImmediate);
    class UFalconWidget* FindScreen(EFalconScreenType inScreen);
    void ClearAllWidgets();
    class UFalconWidget* AddScreen(EFalconScreenType inScreen);
}; // Size: 0x378

class AFalconWorldSettings : public AWorldSettings
{
}; // Size: 0x4D8

class AFlameBreathActor : public AActor
{
    TSubclassOf<class AActor> vfx;                                                    // 0x0318 (size: 0x8)
    FGameplayTagContainer DamageTags;                                                 // 0x0320 (size: 0x20)
    TSubclassOf<class UGameplayEffect> DamageEffectClass;                             // 0x0340 (size: 0x8)
    float Duration;                                                                   // 0x0348 (size: 0x4)
    class UProjectileMovementComponent* MovementComponent;                            // 0x0350 (size: 0x8)
    class UCapsuleComponent* CollisionComponent;                                      // 0x0358 (size: 0x8)

}; // Size: 0x368

class AFlameCircleActor : public AActor
{
    TSubclassOf<class AActor> vfx;                                                    // 0x0318 (size: 0x8)
    FGameplayTagContainer DamageTags;                                                 // 0x0320 (size: 0x20)
    TSubclassOf<class UGameplayEffect> DamageEffectClass;                             // 0x0340 (size: 0x8)
    float Duration;                                                                   // 0x0348 (size: 0x4)
    float Radius;                                                                     // 0x034C (size: 0x4)
    float Height;                                                                     // 0x0350 (size: 0x4)

}; // Size: 0x360

class AGateController : public AQuestController
{
    class UPortalRequirementsComponent* m_requirements;                               // 0x03E8 (size: 0x8)
    class UPortalBlockerComponent* m_blocker;                                         // 0x03F0 (size: 0x8)

    void Open(class UQuestActionsComponent* Actions);
    bool IsOpen();
    void GreetPlayer(const FGreeting& Greeting, class UQuestActionsComponent* Actions);
    void Closed(class UQuestActionsComponent* Actions);
}; // Size: 0x3F8

class AGemFinderRegion : public AVolume
{
    TArray<TSoftObjectPtr<AActor>> RegionLinks;                                       // 0x0350 (size: 0x10)

}; // Size: 0x360

class AKeyController : public AQuestController
{
    class UMaterialInterface* MaterialOverride;                                       // 0x03E8 (size: 0x8)

    void ZapPlayer(const FName& Checkpoint, class UQuestActionsComponent* Actions);
    void RxPickup(class AActor* Pickup, class AActor* receiver, FName Type);
    void OutOfWorld(class UQuestActionsComponent* Actions);
}; // Size: 0x3F0

class ALS319_WhaleController : public AMobileDenizenController
{
    class UAnimMontage* SpittingMontage;                                              // 0x0418 (size: 0x8)
    FName ExitNotify;                                                                 // 0x0420 (size: 0x8)
    FComponentReference SpyroExitDestination;                                         // 0x0428 (size: 0x18)
    float OpenMouthChompDistance;                                                     // 0x0440 (size: 0x4)

    void SpitOutSpyro(class UQuestActionsComponent* Actions);
    void EnteredChomp(bool Overlapping);
}; // Size: 0x460

class ALizardSkateboardChallenge : public AChallengeController
{
    TSubclassOf<class APhasmidCharacter> LizardClassFilter;                           // 0x0470 (size: 0x8)
    FGameplayTagContainer OnSkateboard;                                               // 0x0478 (size: 0x20)
    FGameplayTagContainer OffSkateboard;                                              // 0x0498 (size: 0x20)

}; // Size: 0x4C0

class ALocomotionCharacter : public ACharacter
{
    bool m_dbgNoBlend;                                                                // 0x0720 (size: 0x1)
    bool m_dbgNoFootIK;                                                               // 0x0721 (size: 0x1)
    bool m_dbgNoTransitions;                                                          // 0x0722 (size: 0x1)

}; // Size: 0x730

class AManagedExponentialHeightFog : public AInfo
{
    class UExponentialHeightFogComponent* Component;                                  // 0x0318 (size: 0x8)
    class UExponentialHeightFogScaleIntensityComponent* ExponentialHeightFogScaleIntensityComponent; // 0x0328 (size: 0x8)
    uint8 bEnabled;                                                                   // 0x0330 (size: 0x1)

    void OnRep_bEnabled();
}; // Size: 0x338

class AMasterLightingManager : public APhasmidLightingManager
{
    class APhasmidLightingManager* outgoing_lm;                                       // 0x0348 (size: 0x8)
    class APhasmidLightingManager* incoming_lm;                                       // 0x0350 (size: 0x8)
    class AActor* SkySphere;                                                          // 0x0390 (size: 0x8)
    int32 ShouldCapture;                                                              // 0x0398 (size: 0x4)
    class USkyLightComponent* MasterSkyLight;                                         // 0x03A8 (size: 0x8)
    class APhasmidLightingManager* CurrentLightingManager;                            // 0x03B0 (size: 0x8)

    void Tick(float DeltaTime);
    void SetLightingManager(const class UObject* WorldContextObject, class APhasmidLightingManager* OutgoingLightingManager, class APhasmidLightingManager* IncomingLightingManager, bool Delay);
    void SetCurrentLightsOn();
    void SetCurrentLightsOff();
    void CrossfadeLightingManagers_2(class APhasmidLightingManager* OutgoingLightingManager, class APhasmidLightingManager* IncomingLightingManager, float Alpha);
    void CrossfadeLightingManagers(const class UObject* WorldContextObject, float fadeTime, class APhasmidLightingManager* OutgoingLightingManager, class APhasmidLightingManager* IncomingLightingManager, FLatentActionInfo LatentInfo);
    void BeginPlay();
}; // Size: 0x3B8

class AMissionController : public AQuestController
{

    void StopMission(class UQuestActionsComponent* Actions);
    void StartMission(class UQuestActionsComponent* Actions);
}; // Size: 0x3F0

class AMobileDenizenController : public ASimpleDenizenController
{
    TArray<FMontageState> Montages;                                                   // 0x0408 (size: 0x10)

    void SetPosition(const FName& where, const FName& moveMode, class UQuestActionsComponent* Actions);
    void MoveTo(const FName& dest, class UQuestActionsComponent* Actions);
}; // Size: 0x418

class AMovableStrikePointController : public AQuestController
{

    void OnMove();
}; // Size: 0x3E8

class AMovieController : public AQuestController
{
    class UFileMediaSource* MovieFile;                                                // 0x03E8 (size: 0x8)
    float StartupDelay;                                                               // 0x03F0 (size: 0x4)

    void ZapPlayer(const FName& Checkpoint, class UQuestActionsComponent* Actions);
    void Playing(class UQuestActionsComponent* Actions);
}; // Size: 0x3F8

class ANewBuzzController : public AAIController
{
    float GameFloorTotalRadius;                                                       // 0x0410 (size: 0x4)
    float GameFloorInnerRadius;                                                       // 0x0414 (size: 0x4)
    FGameplayTagContainer SpyroDamageMovementFilter;                                  // 0x0418 (size: 0x20)
    FGameplayTagContainer BuzzFlattenDamageFilter;                                    // 0x0438 (size: 0x20)
    FGameplayTagContainer BuzzKnockbackDamageFilter;                                  // 0x0458 (size: 0x20)
    FGameplayTagContainer SpyroKnockbackFilter;                                       // 0x0478 (size: 0x20)
    TSubclassOf<class UGameplayEffect> DamageEffectClass;                             // 0x0498 (size: 0x8)
    TSubclassOf<class AActor> FlameCircleFX;                                          // 0x04A0 (size: 0x8)
    TSubclassOf<class AActor> FlameBreathFX;                                          // 0x04A8 (size: 0x8)
    class UAnimMontage* KnockbackMontage;                                             // 0x04B0 (size: 0x8)
    class UAnimMontage* BurningMontage;                                               // 0x04B8 (size: 0x8)
    class UAnimMontage* HopForwardMontage;                                            // 0x04C0 (size: 0x8)
    class UAnimMontage* HopLeftMontage;                                               // 0x04C8 (size: 0x8)
    class UAnimMontage* HopRightMontage;                                              // 0x04D0 (size: 0x8)
    class UAnimMontage* TauntMontage;                                                 // 0x04D8 (size: 0x8)
    class UAnimMontage* FlameBreathMontage;                                           // 0x04E0 (size: 0x8)

    void OnActorHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
}; // Size: 0x598

class AOverlapTriggerBase : public AQuestTrigger
{
    bool bWantPlayerWalking;                                                          // 0x0338 (size: 0x1)

}; // Size: 0x340

class APlanterEggController : public AEggController
{

    void PlaceEgg(class UQuestActionsComponent* Actions);
}; // Size: 0x3F0

class APlantercontroller : public APropController
{
    FGameplayTagContainer DamageTags;                                                 // 0x03E8 (size: 0x20)

    void OnTakeDamage(class AActor* Actor, const FGameplayEventData Data);
    void Destroyed();
}; // Size: 0x408

class APlayableController : public AQuestController
{
    bool bUseDamageSignals;                                                           // 0x03E8 (size: 0x1)
    class APhasmidPlayerController* m_pc;                                             // 0x03F0 (size: 0x8)

    void ZapPlayer(const FName& Checkpoint, class UQuestActionsComponent* Actions);
    void SetPosition(const FName& where, const FName& moveMode, class UQuestActionsComponent* Actions);
    void OnTakeDamage(class AActor* sender, const FGameplayEventData Payload);
    void onSkateEvent(EPCMSkateEventType evtType, FName Name);
    void OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    void OnDeath(class AActor* sender, const FGameplayEventData Payload);
    void MoveTo(const FName& where, class UQuestActionsComponent* Actions);
    void FadeOut(float Duration, class UQuestActionsComponent* Actions);
    void FadeIn(float Duration, class UQuestActionsComponent* Actions);
}; // Size: 0x408

class APlayerAwareCutsceneController : public ACutsceneController
{
}; // Size: 0x3F0

class APortal : public APhasmidPlayerStart
{
    bool PreloadActive;                                                               // 0x0350 (size: 0x1)
    FString PartnerPortalName;                                                        // 0x0358 (size: 0x10)
    FString PortalText;                                                               // 0x0368 (size: 0x10)
    FDataTableRowHandle PartnerPortalRow;                                             // 0x0378 (size: 0x10)
    class AMasterLightingManager* LightingManager;                                    // 0x0388 (size: 0x8)
    class UBoxComponent* TransitionTrigger;                                           // 0x0390 (size: 0x8)
    float HandlePlayerSpawnDelay;                                                     // 0x0398 (size: 0x4)
    bool rotationFixed;                                                               // 0x039C (size: 0x1)
    bool prepatchready;                                                               // 0x039D (size: 0x1)
    float AnimPlayRate;                                                               // 0x03A0 (size: 0x4)
    float SetLevelVisiblePercentage;                                                  // 0x03A4 (size: 0x4)
    class APortal* PartnerPortal;                                                     // 0x03A8 (size: 0x8)
    TArray<class AActor*> ChildActors;                                                // 0x03B0 (size: 0x10)
    class ACharacter* PlayerChar;                                                     // 0x03C0 (size: 0x8)
    class APlayerController* PlayerController;                                        // 0x03C8 (size: 0x8)
    bool EnableTransport;                                                             // 0x03D0 (size: 0x1)
    class ATransportManager* TransportManager;                                        // 0x03D8 (size: 0x8)
    bool CollectiblesEnabled;                                                         // 0x03E0 (size: 0x1)
    FRotator RotationSave;                                                            // 0x03E4 (size: 0xC)
    bool PreloadEnabled;                                                              // 0x03F0 (size: 0x1)
    bool ReadyToRemove;                                                               // 0x03F1 (size: 0x1)
    bool ShowDownloadMessage;                                                         // 0x03F2 (size: 0x1)
    bool DemoMode;                                                                    // 0x03F3 (size: 0x1)
    FString LevelName;                                                                // 0x03F8 (size: 0x10)

    void UnTriggerPreload();
    bool TriggerTransport(class ACharacter* playerCharacter);
    void TriggerPreload();
    void Tick(float DeltaSeconds);
    void SwitchBeforeTransport();
    void setPortalVisible(bool visible);
    void setPortalEnabled(bool Enabled);
    bool RemoveDownloadMessage();
    void ReceivePortalStart();
    void OnPartnerPortalFound(class APortal* FoundParter);
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void HandlePlayerSpawnAfterFade();
    void HandlePlayerSpawn(float delayDuration);
    FTransform GetSpawnTransform();
    void GetProgressionInfo(FString& NewCheckpointName, FString& NewLevelPath);
    void EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void EnablePortalCollectibles(bool Enabled);
    bool CheckForPatch();
    bool CanLoadLevel();
    void BeginPlay();
    void AddCamLocationSlave(FTransform slaveLocation, float Duration);
}; // Size: 0x418

class APortalController : public AQuestController
{
    class UAkAudioEvent* sfx;                                                         // 0x03E8 (size: 0x8)
    class UParticleSystem* vfx;                                                       // 0x03F0 (size: 0x8)
    class UPortalRequirementsComponent* m_requirements;                               // 0x0408 (size: 0x8)
    class UPortalBlockerComponent* m_blocker;                                         // 0x0410 (size: 0x8)

    void TimerForVFX();
    void Open(class UQuestActionsComponent* Actions);
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    bool ForceTransport(TEnumAsByte<EFalconLoadScreen::Type> Screen);
    void ForcePortalTransport(TEnumAsByte<EFalconLoadScreen::Type> Screen);
}; // Size: 0x418

class APortalTransporterTargetFade : public APortal
{
    float fadeTime;                                                                   // 0x0418 (size: 0x4)

    void Tick(float DeltaSeconds);
    void BeginPlay();
}; // Size: 0x420

class APressToTalkWidget : public ATextRenderActor
{

    void OnInput();
    void HandleNewVisibility(bool isShown);
}; // Size: 0x370

class APressurePlateController : public AButtonController
{
    TArray<TSoftClassPtr<AActor>> ValidActorTypes;                                    // 0x0410 (size: 0x10)

    void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x438

class APropController : public AQuestController
{

    void OutOfWorld(class UQuestActionsComponent* Actions);
    void Idle(class UQuestActionsComponent* Actions);
    void Hidden(class UQuestActionsComponent* Actions);
    void Defeated(class UQuestActionsComponent* Actions);
    void Deactivated(class UQuestActionsComponent* Actions);
    void Activated(class UQuestActionsComponent* Actions);
}; // Size: 0x3E8

class AQuestController : public AQuestMarker
{
    class UQuestActionsComponent* QuestActions;                                       // 0x0328 (size: 0x8)
    FName ScriptClass;                                                                // 0x0330 (size: 0x8)
    FName TargetName;                                                                 // 0x0338 (size: 0x8)
    FName CurrentState;                                                               // 0x0340 (size: 0x8)
    int32 EggRequirement;                                                             // 0x0348 (size: 0x4)
    int32 GemRequirement;                                                             // 0x034C (size: 0x4)
    bool bAllowNullActor;                                                             // 0x0350 (size: 0x1)
    class AQuestLevelActor* m_levelActor;                                             // 0x03D0 (size: 0x8)

    void SetControllerTickEnabled(bool Tick);
    bool SendSignal(const FName& Value);
    void ReceiveActorUnbound(class AActor* Actor);
    void ReceiveActorBound(class AActor* Actor);
    void OnSP3DeathStart(class AActor* Actor);
    void OnSP3DeathEnd(class AActor* Actor);
    void OnPlayerSeen(class UWatchPlayerComponent* Watcher, bool canSee);
    void OnDestroy(class AActor* Actor);
    void OnDeathState(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void HideOrDestroyActor();
    class AQuestLevelActor* GetLevelActor();
    class AActor* GetActorAbsolute();
    class AActor* GetActor();
    void CreatedController();
    bool ActorExists();
}; // Size: 0x3E8

class AQuestFlyingPoint : public AQuestSplinePointBase
{
    float DefaultHeight;                                                              // 0x0348 (size: 0x4)
    float DefaultInflection;                                                          // 0x034C (size: 0x4)
    bool bNavToFirstPoint;                                                            // 0x0350 (size: 0x1)

}; // Size: 0x358

class AQuestJumpPoint : public AQuestSplinePointBase
{
    float DefaultHeight;                                                              // 0x0348 (size: 0x4)
    float DefaultInflection;                                                          // 0x034C (size: 0x4)
    bool bNavToFirstPoint;                                                            // 0x0350 (size: 0x1)

}; // Size: 0x358

class AQuestLevelActor : public AActor
{
    TSubclassOf<class UScriptedWorld> Script;                                         // 0x0338 (size: 0x8)
    TArray<FName> TotalEggs;                                                          // 0x0340 (size: 0x10)
    class UDataTable* DialogTable;                                                    // 0x0350 (size: 0x8)
    class UDataTable* FullbodyTable;                                                  // 0x0358 (size: 0x8)
    class UDataTable* LevelStreamingTable;                                            // 0x0360 (size: 0x8)
    TSubclassOf<class ACharacter> PlayerCharacterClass;                               // 0x0368 (size: 0x8)
    class UAkAudioEvent* MusicEvent;                                                  // 0x0370 (size: 0x8)
    bool bDelayStart;                                                                 // 0x0378 (size: 0x1)
    FQuestControllerBindings ControllerBindings;                                      // 0x0380 (size: 0x10)
    FQuestBoundTriggers Triggers;                                                     // 0x0390 (size: 0x10)
    TArray<FQuestTypeEntry> DefaultControllers;                                       // 0x03A0 (size: 0x10)
    EIdWorld World;                                                                   // 0x03B0 (size: 0x4)
    TArray<FQuestBinding> Bindings;                                                   // 0x03B8 (size: 0x10)
    bool HasBindings;                                                                 // 0x03C8 (size: 0x1)
    class UQuestLevelManager* m_manager;                                              // 0x03D0 (size: 0x8)

    void ToggleInvulnerability(bool invuln);
    void ShowSparx();
    void ShowGemCounter(bool A);
    void SetDelayStart(bool Value);
    void SetBoardValue(FName Key, FName Value);
    void OnDeactivate();
    void OnActivate();
    bool IsActive();
    void HideSparx();
    bool GetDelayStart();
    class UCameraReadjust* GetCameraReadjust();
    FName GetBoardValueWithField(FName Key, ETargetField Field);
    FName GetBoardValue(FName Key);
    void ClearInput();
}; // Size: 0x3F8

class AQuestMarker : public AActor
{
    TSubclassOf<class AActor> ActorClass;                                             // 0x0318 (size: 0x8)

}; // Size: 0x320

class AQuestMinigameExample : public AQuestController
{
    class AActor* StartPoint;                                                         // 0x03E8 (size: 0x8)
    TSubclassOf<class APawn> EnemyClass;                                              // 0x03F0 (size: 0x8)
    TArray<TSoftObjectPtr<AActor>> EnemySpawnPoints;                                  // 0x03F8 (size: 0x10)
    TSubclassOf<class APawn> PlayerClass;                                             // 0x0408 (size: 0x8)
    TSubclassOf<class ASP3_VehicleBase> VehicleClass;                                 // 0x0410 (size: 0x8)
    TSubclassOf<class UMinigameCountWidget> CountWidgetClass;                         // 0x0418 (size: 0x8)
    float fadeTime;                                                                   // 0x0420 (size: 0x4)

    void Ticking(class UQuestActionsComponent* Actions);
    void Idle(class UQuestActionsComponent* Actions);
    void Completed(class UQuestActionsComponent* Actions);
    void BP_InitializeEnemy(int32 Index, class APawn* Pawn, class AActor* SpawnPoint);
}; // Size: 0x528

class AQuestMinigameMantaRayBattle : public AQuestController
{
    TSubclassOf<class APawn> EnemyClass;                                              // 0x03E8 (size: 0x8)
    TSubclassOf<class AActor> SeaweedClass;                                           // 0x03F0 (size: 0x8)
    TSubclassOf<class AActor> MantaRayClass;                                          // 0x03F8 (size: 0x8)
    TSubclassOf<class AActor> MantaRayIdleClass;                                      // 0x0400 (size: 0x8)
    TArray<TSoftObjectPtr<AActor>> EnemySpawnPoints;                                  // 0x0408 (size: 0x10)
    TArray<TSoftObjectPtr<AActor>> SeaweedSpawnPoints;                                // 0x0418 (size: 0x10)
    TSoftObjectPtr<AActor> ExitTrigger;                                               // 0x0428 (size: 0x28)
    TSoftObjectPtr<AActor> StartRideTarget;                                           // 0x0450 (size: 0x28)
    TSoftObjectPtr<AActor> EndGamePosition;                                           // 0x0478 (size: 0x28)
    float fadeTime;                                                                   // 0x04A0 (size: 0x4)
    FName IconName;                                                                   // 0x04A8 (size: 0x8)
    TSubclassOf<class UHudCounterComponent> ScoreUIClass;                             // 0x04B0 (size: 0x8)
    EFalconHudWidgetPosition ScoreUIPosition;                                         // 0x04B8 (size: 0x1)

    void Ticking(class UQuestActionsComponent* Actions);
    void OnGameStateChanged(EFalconGameState PrevState, EFalconGameState NextState);
    void OnExitTriggerHit(class AActor* HitActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void KnockedOffManta();
    void IdleFreeSwim(class UQuestActionsComponent* Actions);
    void Idle(class UQuestActionsComponent* Actions);
    class AActor* GetMantaRay();
    void FreeSwim(class UQuestActionsComponent* Actions);
    void Completed(class UQuestActionsComponent* Actions);
    void BP_StartRideMantaRay(class AActor* mantaRay);
    void BP_InitializeIdleMantaRayIdle(class AActor* Pawn, class AActor* SpawnPoint);
    void BP_InitializeEnemy(int32 Index, class APawn* Pawn, class AActor* SpawnPoint);
    void BP_GrantSeaweedSkillpoint();
    void BP_EndRideMantaRay(class AActor* mantaRay);
}; // Size: 0x5D0

class AQuestMinigameSaucerBattle : public AQuestController
{
    TSoftObjectPtr<AActor> Boss;                                                      // 0x03E8 (size: 0x28)
    TSoftObjectPtr<AActor> Vehicle;                                                   // 0x0410 (size: 0x28)
    TSoftObjectPtr<AActor> ExitBlock;                                                 // 0x0438 (size: 0x28)
    TSoftObjectPtr<AActor> BossEndSequenceMarker;                                     // 0x0460 (size: 0x28)
    TSoftObjectPtr<AActor> CollectEggLocation;                                        // 0x0488 (size: 0x28)
    float fadeTime;                                                                   // 0x04B0 (size: 0x4)
    float BlackScreenTime;                                                            // 0x04B4 (size: 0x4)
    FName BossName;                                                                   // 0x04B8 (size: 0x8)
    bool bLeftBossUI;                                                                 // 0x04C0 (size: 0x1)
    int32 BossHealth;                                                                 // 0x04C4 (size: 0x4)
    TSubclassOf<class USparxHealthBarWidget> HealthWidgetClass;                       // 0x04C8 (size: 0x8)

    void Ticking(class UQuestActionsComponent* Actions);
    void Restart(class UQuestActionsComponent* Actions);
    void OnBossDamaged();
    void Idle(class UQuestActionsComponent* Actions);
    class AActor* GetVehicle();
    void Completed(class UQuestActionsComponent* Actions);
    void BP_SaveProgress();
    void BP_OnVictory(class AActor* Enemy, const FTransform& Transform);
    bool BP_IsSaucerActivated();
    void BP_InitializeBoss(class AActor* Enemy);
    void BP_CleanupSaucerMinigame(class AActor* BossActor, class AActor* VehicleActor);
}; // Size: 0x5A8

class AQuestMinigameSplineBoat : public AQuestController
{
    class AActor* Spline;                                                             // 0x03E8 (size: 0x8)
    class AActor* StartPoint;                                                         // 0x03F0 (size: 0x8)
    float FollowDist;                                                                 // 0x03F8 (size: 0x4)
    FVector FollowInterp;                                                             // 0x03FC (size: 0xC)
    float GameTimeMax;                                                                // 0x0408 (size: 0x4)
    TArray<class AActor*> LogPoints;                                                  // 0x0410 (size: 0x10)
    TArray<class AActor*> RockPoints;                                                 // 0x0420 (size: 0x10)
    class ALevelSequenceActor* VictorySequence;                                       // 0x0430 (size: 0x8)
    class ALevelSequenceActor* DefeatSequence;                                        // 0x0438 (size: 0x8)
    class AActor* LevelSeqRoot;                                                       // 0x0440 (size: 0x8)
    TSubclassOf<class APawn> PlayerClass;                                             // 0x0448 (size: 0x8)
    TSubclassOf<class ASP3_VehicleSplineBoat> VehicleClass;                           // 0x0450 (size: 0x8)
    TSubclassOf<class AActor> EnemyClass;                                             // 0x0458 (size: 0x8)
    TSubclassOf<class AActor> LogClass;                                               // 0x0460 (size: 0x8)
    TSubclassOf<class AActor> RockClass;                                              // 0x0468 (size: 0x8)
    float fadeTime;                                                                   // 0x0470 (size: 0x4)

    void Ticking(class UQuestActionsComponent* Actions);
    void RxLevelSeqFinished();
    void Quit(class UQuestActionsComponent* Actions);
    void Idle(class UQuestActionsComponent* Actions);
    void Completed(class UQuestActionsComponent* Actions);
}; // Size: 0x590

class AQuestMinigameSubmarine : public AQuestController
{
    TSubclassOf<class AActor> SubmarineClass;                                         // 0x03E8 (size: 0x8)
    class AActor* StartPoint;                                                         // 0x03F0 (size: 0x8)
    class ATriggerVolume* ExitVolume;                                                 // 0x03F8 (size: 0x8)
    float fadeTime;                                                                   // 0x0400 (size: 0x4)
    bool ExitOnCompletion;                                                            // 0x0404 (size: 0x1)
    bool LetQuestFadeIn;                                                              // 0x0405 (size: 0x1)
    TSubclassOf<class AActor> EnemyClass;                                             // 0x0408 (size: 0x8)
    TArray<TWeakObjectPtr<AActor>> Part1SpawnPoints;                                  // 0x0410 (size: 0x10)
    TArray<TWeakObjectPtr<AActor>> Part2SpawnPoints;                                  // 0x0420 (size: 0x10)
    TWeakObjectPtr<class ALevelSequenceActor> MovieSequence;                          // 0x0430 (size: 0x8)
    TWeakObjectPtr<class AActor> SubmarineStandIn;                                    // 0x0438 (size: 0x8)
    FName IconName;                                                                   // 0x0440 (size: 0x8)
    TSubclassOf<class UHudCounterComponent> ScoreUIClass;                             // 0x0448 (size: 0x8)
    EFalconHudWidgetPosition ScoreUIPosition;                                         // 0x0450 (size: 0x1)

    void StartPart2(class UQuestActionsComponent* Actions);
    void StartPart1(class UQuestActionsComponent* Actions);
    void StartFree(class UQuestActionsComponent* Actions);
    void OnSequenceStopped();
    void onQuestAreaExitRequested(EFalconAreaExitTitle Title);
    void OnActorBeginOverlapExitVolume(class AActor* OverlappedActor, class AActor* OtherActor);
    void Idle(class UQuestActionsComponent* Actions);
    void Completed(class UQuestActionsComponent* Actions);
    void BP_InitializeEnemy(int32 Index, class AActor* Enemy, class AActor* SpawnPoint);
}; // Size: 0x5B0

class AQuestMinigameTemplate : public AQuestController
{

    void Ticking(class UQuestActionsComponent* Actions);
    void Idle(class UQuestActionsComponent* Actions);
    void Completed(class UQuestActionsComponent* Actions);
}; // Size: 0x3F8

class AQuestNavPoint : public AQuestSplinePointBase
{
    bool bUseDirectMove;                                                              // 0x0348 (size: 0x1)

    void MovedPoint();
}; // Size: 0x360

class AQuestSplinePointBase : public AQuestStrikePoint
{
    class USplineComponent* SplineComponent;                                          // 0x0338 (size: 0x8)
    uint8 bResetSpline;                                                               // 0x0340 (size: 0x1)

}; // Size: 0x348

class AQuestStrikePoint : public ATargetPoint
{
    FQuestStrikePointOnArrived OnArrived;                                             // 0x0318 (size: 0x10)
    bool bOrientTowardsNextPoint;                                                     // 0x0328 (size: 0x1)
    class AQuestStrikePoint* NextPoint;                                               // 0x0330 (size: 0x8)

    void OnArrivedSignature__DelegateSignature(class AQuestStrikePoint* Pos, class UQuestMoveTask* moveTask);
    void Arriving(class UQuestMoveTask* moveTask);
}; // Size: 0x338

class AQuestTrigger : public ATargetPoint
{
    FQuestTriggerOnVisited OnVisited;                                                 // 0x0318 (size: 0x10)
    class AQuestLevelActor* m_levelActor;                                             // 0x0328 (size: 0x8)

    void SetVisited(bool visited);
    void PlayerVisited(class APawn* thePlayer);
    void OnVisitedSignature__DelegateSignature(class AQuestTrigger* Trigger, class APawn* Player);
    FName GetTriggerName();
}; // Size: 0x338

class AQuestTriggerBox : public AOverlapTriggerBase
{
    class UBoxComponent* BoxComponent;                                                // 0x0340 (size: 0x8)

}; // Size: 0x348

class AQuestTriggerRange : public AOverlapTriggerBase
{
    class USphereComponent* SphereComponent;                                          // 0x0340 (size: 0x8)

}; // Size: 0x348

class AQuestTriggerZ : public AQuestTrigger
{
    float Tolerance;                                                                  // 0x0338 (size: 0x4)

}; // Size: 0x340

class AQuestWalkPoint : public AQuestStrikePoint
{
}; // Size: 0x338

class AQuestWheelPoint : public AQuestStrikePoint
{
    bool bWiddershins;                                                                // 0x0338 (size: 0x1)

}; // Size: 0x340

class ARailShooter : public AActor
{
    TArray<FSpawnTemplate> SpawnTemplates;                                            // 0x0318 (size: 0x10)
    ESpawnActorCollisionHandlingMethod SpawnCollisionMethod;                          // 0x0328 (size: 0x1)
    class AActor* proximityTarget;                                                    // 0x0330 (size: 0x8)
    FRailShooterOnFriendlyDied onFriendlyDied;                                        // 0x0338 (size: 0x10)
    FRailShooterOnEnemyDied OnEnemyDied;                                              // 0x0348 (size: 0x10)
    FRailShooterOnAllEnemiesDead onAllEnemiesDead;                                    // 0x0358 (size: 0x10)
    FRailShooterOnGameStarted onGameStarted;                                          // 0x0368 (size: 0x10)

    void StartGame();
    class ACharacter* SpawnByID(FName ID);
    void SetupGame();
    void ResetGame();
    void Reset();
    void OnSP3DeathStart(class AActor* Actor);
    void OnSP3DeathEnd(class AActor* Actor);
    void OnDestroy(class AActor* Actor);
    void OnDeathState(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    class ACharacter* FindSpawnedByID(FName ID);
    void EndGame();
    void DestroyAll();
}; // Size: 0x380

class ARailShooterController : public AQuestController
{

    void Victory(class UQuestActionsComponent* Actions);
    void onGameStarted();
    void onFriendlyDied(class ACharacter* which);
    void onAllEnemiesDead();
    void Idle(class UQuestActionsComponent* Actions);
    void Defeated(class UQuestActionsComponent* Actions);
    void Active(class UQuestActionsComponent* Actions);
}; // Size: 0x3F0

class ARailshooterDenizenController : public AMobileDenizenController
{

    void SaveResetState();
    void ResetState();
    void ResetActor(class UQuestActionsComponent* Actions);
}; // Size: 0x460

class ARevengeController : public AThiefController
{
    FRevengeGemSets RevengeGems;                                                      // 0x0418 (size: 0x18)

    void Exhausted(class UQuestActionsComponent* Actions);
    void Damaged();
}; // Size: 0x450

class ASP3_AirCarryObject : public AActor
{
    TArray<class TSubclassOf<APhasmidLevelActor>> m_destroyOnContactWith;             // 0x0318 (size: 0x10)
    float m_dropDamageAmount;                                                         // 0x0328 (size: 0x4)
    TSubclassOf<class UDamageType> m_dropDamageType;                                  // 0x0330 (size: 0x8)
    TSubclassOf<class UGameplayEffect> m_dropDamageEffect;                            // 0x0338 (size: 0x8)
    FGameplayTagContainer m_dropDamageTags;                                           // 0x0340 (size: 0x20)

    void OnObjectDestroyed(class AActor* destroyedBy);
    void OnCarryObjectHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void AttachToSocket(class USP3_CarrySocketComponent* socket);
}; // Size: 0x360

class ASP3_BossPickupBase : public APhasmidLevelActor
{
    class UPrimitiveComponent* CollisionComp;                                         // 0x03C8 (size: 0x8)
    class UMeshComponent* MeshComp;                                                   // 0x03D0 (size: 0x8)
    bool m_bFalling;                                                                  // 0x03D8 (size: 0x1)
    FGameplayTagContainer LandingDamageTypes;                                         // 0x03E0 (size: 0x20)
    float m_fMaxLandingAngle;                                                         // 0x0400 (size: 0x4)
    FSP3_BossPickupBaseOnPickupLandedEvent OnPickupLandedEvent;                       // 0x0408 (size: 0x10)
    FSP3_BossPickupBaseOnPickupActivatedEvent OnPickupActivatedEvent;                 // 0x0418 (size: 0x10)

    void SetFallingEnabled(bool bEnabled);
    void OnPickupLanded(const FHitResult& Hit);
    void OnPickupActivated(class AActor* Actor);
    void OnCollisionCompHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnActorBeginOverlapCallback(class AActor* OverlappedActor, class AActor* OtherActor);
    bool GetFallingEnabled();
}; // Size: 0x428

class ASP3_CamMgr : public APlayerCameraManager
{
    TSubclassOf<class ASP3_CameraBase> m_cameraClass;                                 // 0x1AD8 (size: 0x8)

}; // Size: 0x1AF0

class ASP3_CameraActor : public ASP3_CameraBase
{
    FVector m_tgtOffset;                                                              // 0x0898 (size: 0xC)
    FVector m_gmblOffset;                                                             // 0x08A4 (size: 0xC)
    float m_radDefault;                                                               // 0x08B0 (size: 0x4)
    float m_rotSpeedH;                                                                // 0x08B4 (size: 0x4)
    float m_rotSpeedV;                                                                // 0x08B8 (size: 0x4)
    FVector m_rotInterpH;                                                             // 0x08BC (size: 0xC)
    FVector m_rotInterpV;                                                             // 0x08C8 (size: 0xC)
    FVector m_rotLimitV;                                                              // 0x08D4 (size: 0xC)
    FVector2D m_clampZSoft;                                                           // 0x08E0 (size: 0x8)
    FVector2D m_clampZHard;                                                           // 0x08E8 (size: 0x8)
    FVector m_posZInterp;                                                             // 0x08F0 (size: 0xC)
    float m_colRadius;                                                                // 0x08FC (size: 0x4)
    float m_colClipMin;                                                               // 0x0900 (size: 0x4)
    FVector m_colInterpIn;                                                            // 0x0904 (size: 0xC)
    FVector m_colInterpOut;                                                           // 0x0910 (size: 0xC)
    float m_ctrInterp;                                                                // 0x091C (size: 0x4)
    FVector2D m_finalInterp;                                                          // 0x0920 (size: 0x8)

}; // Size: 0x990

class ASP3_CameraBase : public ACameraActor
{

    void SetTarget(class AActor* Target);
    void SetOpponent(class AActor* Opponent);
    class AActor* GetTarget();
    class AActor* GetOpponent();
}; // Size: 0x8A0

class ASP3_CameraBoxing : public ASP3_CameraBase
{
    float m_angle;                                                                    // 0x0898 (size: 0x4)
    FVector m_distParams;                                                             // 0x089C (size: 0xC)

}; // Size: 0x8B0

class ASP3_CameraFollowTarget : public ASP3_CameraBase
{
    class AActor* Target;                                                             // 0x08A0 (size: 0x8)
    float Duration;                                                                   // 0x08A8 (size: 0x4)
    float FadeDuration;                                                               // 0x08AC (size: 0x4)

}; // Size: 0x8B0

class ASP3_CameraJet : public ASP3_CameraBase
{
    FVector m_tgtInterpH;                                                             // 0x0898 (size: 0xC)
    FVector m_tgtOffset;                                                              // 0x08A4 (size: 0xC)
    FVector m_gmblOffset;                                                             // 0x08B0 (size: 0xC)
    float m_radius;                                                                   // 0x08BC (size: 0x4)
    FVector m_rotInterpH;                                                             // 0x08C0 (size: 0xC)
    FVector m_rotInterpV;                                                             // 0x08CC (size: 0xC)
    FVector m_rotLimitH;                                                              // 0x08D8 (size: 0xC)
    FVector m_rotLimitV;                                                              // 0x08E4 (size: 0xC)
    float m_colRadius;                                                                // 0x08F0 (size: 0x4)
    float m_colClipMin;                                                               // 0x08F4 (size: 0x4)

}; // Size: 0x920

class ASP3_CameraJetpack : public ASP3_CameraBase
{
    FVector m_tgtOffset;                                                              // 0x0898 (size: 0xC)
    FVector m_posOffset;                                                              // 0x08A4 (size: 0xC)

}; // Size: 0x8B0

class ASP3_CameraOrbitBoss : public ASP3_CameraBase
{
    FVector m_tgtOffset;                                                              // 0x0898 (size: 0xC)
    FVector m_camOffset;                                                              // 0x08A4 (size: 0xC)

}; // Size: 0x8C0

class ASP3_CameraSplineBoat : public ASP3_CameraBase
{
    FVector m_tgtOffset;                                                              // 0x0898 (size: 0xC)
    float m_splineDist;                                                               // 0x08A4 (size: 0x4)
    FVector m_posOffset;                                                              // 0x08A8 (size: 0xC)

}; // Size: 0x8C0

class ASP3_CameraVictoryOrbit : public ASP3_CameraBase
{
    class AActor* Target;                                                             // 0x08A0 (size: 0x8)
    float Duration;                                                                   // 0x08A8 (size: 0x4)
    float SecondsPerRotation;                                                         // 0x08AC (size: 0x4)

}; // Size: 0x8B0

class ASP3_Character : public ALocomotionCharacter
{
    class USP3_CharacterComponent* SP3CharComponent;                                  // 0x0728 (size: 0x8)

}; // Size: 0x730

class ASP3_CinematicsActor : public AActor
{
    class UFileMediaSource* MovieFile;                                                // 0x0318 (size: 0x8)
    float StartupDelay;                                                               // 0x0320 (size: 0x4)
    TSoftObjectPtr<AQuestLevelActor> QuestLevelActor;                                 // 0x0328 (size: 0x28)
    bool Finished;                                                                    // 0x0350 (size: 0x1)

    void StopMovie();
    void StartMovie();
    void OnSkip();
    bool IsFinished();
}; // Size: 0x360

class ASP3_Dispenser : public AActor
{
    TSubclassOf<class AActor> m_class;                                                // 0x0318 (size: 0x8)
    FComponentReference m_at;                                                         // 0x0320 (size: 0x18)
    float m_tDelay;                                                                   // 0x0338 (size: 0x4)
    float m_tSpawn;                                                                   // 0x033C (size: 0x4)
    TWeakObjectPtr<class AActor> m_spawned;                                           // 0x0340 (size: 0x8)

    void OnSpawn(class AActor* Actor);
    void OnPreSpawn();
}; // Size: 0x350

class ASP3_DragonEgg : public AActor
{
    TArray<class UStaticMesh*> m_eggMeshes;                                           // 0x0318 (size: 0x10)
    TArray<class UMaterialInterface*> m_eggMats;                                      // 0x0328 (size: 0x10)
    TArray<FSP3DragonEggBodyInfo> m_dragonTypes;                                      // 0x0338 (size: 0x10)
    float m_tReveal;                                                                  // 0x0348 (size: 0x4)
    float m_tRemove;                                                                  // 0x034C (size: 0x4)
    class UDataTable* m_dataTable;                                                    // 0x0350 (size: 0x8)
    FName m_dragonName;                                                               // 0x0358 (size: 0x8)
    bool m_autoShow;                                                                  // 0x0360 (size: 0x1)
    bool m_dmgHatch;                                                                  // 0x0361 (size: 0x1)
    class UCapsuleComponent* Collision;                                               // 0x0368 (size: 0x8)
    class UStaticMeshComponent* egg;                                                  // 0x0370 (size: 0x8)
    class USkeletalMeshComponent* Dragon;                                             // 0x0378 (size: 0x8)
    class UStaticMeshComponent* HornAcc;                                              // 0x0380 (size: 0x8)
    class UStaticMeshComponent* TailAcc;                                              // 0x0388 (size: 0x8)
    class UStaticMeshComponent* HeadAcc;                                              // 0x0390 (size: 0x8)
    class UStaticMeshComponent* GlassesAcc;                                           // 0x0398 (size: 0x8)
    class USkeletalMeshComponent* Paired;                                             // 0x03A0 (size: 0x8)
    class AActor* HatchVFX;                                                           // 0x03A8 (size: 0x8)
    bool m_reqHatch;                                                                  // 0x03BD (size: 0x1)
    bool m_hatchRev;                                                                  // 0x03BE (size: 0x1)
    FSoftObjectPath m_pairedMeshPath;                                                 // 0x0410 (size: 0x18)
    class USkeletalMesh* m_pairedMeshObj;                                             // 0x0428 (size: 0x8)
    FSoftObjectPath m_pairedAnimPath;                                                 // 0x0430 (size: 0x18)
    class UAnimSequence* m_pairedAnimObj;                                             // 0x0448 (size: 0x8)
    FSoftObjectPath m_hatchBPPath;                                                    // 0x0450 (size: 0x18)
    class UObject* m_hatchBPObj;                                                      // 0x0468 (size: 0x8)

    void OnVFXSetState(FName State);
}; // Size: 0x488

class ASP3_FloatingAmmoCrate : public ASP3_PickupBase
{
    float m_delayTime;                                                                // 0x0330 (size: 0x4)
    float m_thickness;                                                                // 0x0334 (size: 0x4)
    float m_gravity;                                                                  // 0x0338 (size: 0x4)
    FVector2D m_spinRange;                                                            // 0x033C (size: 0x8)
    float m_ascentAccel;                                                              // 0x0344 (size: 0x4)
    float m_ascentFriction;                                                           // 0x0348 (size: 0x4)
    bool m_resetAmmo;                                                                 // 0x034C (size: 0x1)
    bool m_tickWhenRendered;                                                          // 0x034D (size: 0x1)

    void OnVFXSetState(FName State);
}; // Size: 0x3B0

class ASP3_FodderAIController : public AAIController
{
    FVector2D m_zLimit;                                                               // 0x0410 (size: 0x8)
    float m_rMax;                                                                     // 0x0418 (size: 0x4)
    FVector2D m_rPlyr;                                                                // 0x041C (size: 0x8)
    float m_rDest;                                                                    // 0x0424 (size: 0x4)
    FVector m_rotInterp;                                                              // 0x0428 (size: 0xC)
    float m_angMove;                                                                  // 0x0434 (size: 0x4)
    int32 m_dbgFlags;                                                                 // 0x0438 (size: 0x4)

}; // Size: 0x490

class ASP3_GameMode : public AGameModeBase
{
}; // Size: 0x3B8

class ASP3_GameState : public AGameStateBase
{
    TArray<TSoftClassPtr<APawn>> m_charDefs;                                          // 0x0358 (size: 0x10)
    int32 m_dbgFlags;                                                                 // 0x0368 (size: 0x4)

}; // Size: 0x380

class ASP3_HUD : public AHUD
{
    class UFont* m_font;                                                              // 0x0408 (size: 0x8)
    float m_textScale;                                                                // 0x0410 (size: 0x4)
    FColor m_textColor;                                                               // 0x0414 (size: 0x4)
    float m_borderSize;                                                               // 0x0418 (size: 0x4)
    FColor m_borderColor;                                                             // 0x041C (size: 0x4)

}; // Size: 0x420

class ASP3_NPCAIController : public AAIController
{
}; // Size: 0x410

class ASP3_PLController : public APlayerController
{
}; // Size: 0x6D8

class ASP3_PickupBase : public AActor
{
    FName m_type;                                                                     // 0x0318 (size: 0x8)
    FSP3_PickupBaseOnPickup OnPickup;                                                 // 0x0320 (size: 0x10)

    bool Pickup(class AActor* sender);
    void OnVFXPickup(class AActor* sender);
    FName GetType();
    class ASP3_PickupBase* FindPickup(const class AActor* sender, const FVector& posSrcWS, float distMax, FName Type);
}; // Size: 0x330

class ASP3_PickupWeapon : public ASP3_PickupBase
{
    TSubclassOf<class AActor> WeaponClass;                                            // 0x0330 (size: 0x8)

}; // Size: 0x340

class ASP3_PortalString : public AActor
{
    class UDataTable* CharDataTable;                                                  // 0x0318 (size: 0x8)
    float CharWidth;                                                                  // 0x0320 (size: 0x4)
    FString String;                                                                   // 0x0328 (size: 0x10)
    class USplineComponent* Spline;                                                   // 0x0338 (size: 0x8)

}; // Size: 0x350

class ASP3_Projectile : public AActor
{
    bool m_topDown;                                                                   // 0x0320 (size: 0x1)
    float m_lifetime;                                                                 // 0x0324 (size: 0x4)
    bool m_explodeTimeout;                                                            // 0x0328 (size: 0x1)
    float m_explodeImpact;                                                            // 0x032C (size: 0x4)
    ESP3_ProjColType m_colType;                                                       // 0x0330 (size: 0x1)
    int32 m_nBounceMax;                                                               // 0x0334 (size: 0x4)
    float m_impactDmgAmt;                                                             // 0x0338 (size: 0x4)
    TSubclassOf<class UDamageType> m_impactDmgType;                                   // 0x0340 (size: 0x8)
    TSubclassOf<class UGameplayEffect> m_impactDmgEffect;                             // 0x0348 (size: 0x8)
    FGameplayTagContainer m_impactDmgTags;                                            // 0x0350 (size: 0x20)
    float m_blastRadius;                                                              // 0x0370 (size: 0x4)
    bool m_explodeOnOverlapTarget;                                                    // 0x0374 (size: 0x1)
    FName m_blastColName;                                                             // 0x0378 (size: 0x8)
    float m_blastDmgAmt;                                                              // 0x0380 (size: 0x4)
    TSubclassOf<class UDamageType> m_blastDmgType;                                    // 0x0388 (size: 0x8)
    TSubclassOf<class UGameplayEffect> m_blastDmgEffect;                              // 0x0390 (size: 0x8)
    FGameplayTagContainer m_blastDmgTags;                                             // 0x0398 (size: 0x20)
    class USP3_ProjectileMovementComponent* Movement;                                 // 0x03B8 (size: 0x8)

    void ResetLifetime();
    void OnVFXEvent(FName evtName, const FTransform& xfm, class USceneComponent* comp, FName param0, float param1);
    int32 GetNumBounces();
    void Explode();
}; // Size: 0x3D0

class ASP3_SparxEnemyBase : public ACharacter
{
    float m_floorZ;                                                                   // 0x0730 (size: 0x4)
    float m_healthMax;                                                                // 0x0734 (size: 0x4)
    bool m_waitChildren;                                                              // 0x0738 (size: 0x1)
    bool m_clearChildren;                                                             // 0x0739 (size: 0x1)
    TSubclassOf<class UDamageType> m_contactDmgType;                                  // 0x0740 (size: 0x8)
    float m_contactDmgAmt;                                                            // 0x0748 (size: 0x4)
    TSubclassOf<class USparxHealthBarWidget> m_uiHealthClass;                         // 0x0750 (size: 0x8)
    FName m_uiHealthIcon;                                                             // 0x0758 (size: 0x8)
    bool m_noFriendlyFire;                                                            // 0x0760 (size: 0x1)
    bool m_autoTarget;                                                                // 0x0761 (size: 0x1)
    class AActor* m_autoTgtPoint;                                                     // 0x0768 (size: 0x8)
    float m_autoTgtRange;                                                             // 0x0770 (size: 0x4)
    float m_autoTgtAngle;                                                             // 0x0774 (size: 0x4)
    TArray<FSP3SparxEnemyLoot> m_loot;                                                // 0x0778 (size: 0x10)
    bool m_dbgDraw;                                                                   // 0x0788 (size: 0x1)
    class USP3_HomingTargetComponent* HomingTarget;                                   // 0x0790 (size: 0x8)
    class UTextRenderComponent* DebugText;                                            // 0x0798 (size: 0x8)
    FSP3_SparxEnemyBaseOnDeathStart OnDeathStart;                                     // 0x07A0 (size: 0x10)
    FSP3_SparxEnemyBaseOnDeathEnd OnDeathEnd;                                         // 0x07B0 (size: 0x10)

    class AActor* SpawnProjectile(const class USceneComponent* Component, FName socket, TSubclassOf<class AActor> ProjClass, float Speed, float InheritVel, float aimAdjust);
    void SetTarget(class AActor* Target);
    void SetFacingDir(float angDegWS);
    void RxActorHit(class AActor* Self, class AActor* Other, FVector N, const FHitResult& Hit);
    void PlayMontage(class UAnimMontage* Montage, float Rate);
    void OnVFXEvent(FName evtName, const FTransform& xfm, FName param0, float param1);
    float GetTargetDistance();
    float GetTargetAngle();
    class AActor* GetTarget();
    ESP3_ProjColType GetProjColType(class AActor* proj, class APawn* sender, const FHitResult& Hit);
    int32 GetNumProjectiles();
    float GetFacingDir();
    void ClearProjectiles();
    void ApplyKnockback(const FVector& from, float Impulse, float Duration);
}; // Size: 0x870

class ASP3_SparxEnemyCentipede : public ASP3_SparxEnemyStaged
{
    int32 MaxNodes;                                                                   // 0x0998 (size: 0x4)
    float NodeSpacing;                                                                // 0x099C (size: 0x4)
    FVector2D NodeInterp;                                                             // 0x09A0 (size: 0x8)
    TSubclassOf<class ASP3_SparxEnemyBase> NodeClass;                                 // 0x09A8 (size: 0x8)
    float SplitHealth;                                                                // 0x09B0 (size: 0x4)
    TArray<class AActor*> SplitPaths;                                                 // 0x09B8 (size: 0x10)
    TSubclassOf<class ASP3_SparxEnemyCentipede> SplitClass;                           // 0x09C8 (size: 0x8)
    TWeakObjectPtr<class ASP3_SparxEnemyCentipede> m_childA;                          // 0x09E0 (size: 0x8)
    TWeakObjectPtr<class ASP3_SparxEnemyCentipede> m_childB;                          // 0x09E8 (size: 0x8)

}; // Size: 0xA00

class ASP3_SparxEnemyMantaRay : public ASP3_SparxEnemyStaged
{
    FName m_specialStage;                                                             // 0x0998 (size: 0x8)

}; // Size: 0x9A0

class ASP3_SparxEnemySimple : public ASP3_SparxEnemyBase
{
    FSP3SparxEnemySimpleMovement m_movement;                                          // 0x0870 (size: 0x18)
    float m_damageTime;                                                               // 0x0888 (size: 0x4)
    float m_deathTime;                                                                // 0x088C (size: 0x4)
    bool m_pivotOnly;                                                                 // 0x0890 (size: 0x1)

}; // Size: 0x960

class ASP3_SparxEnemyStaged : public ASP3_SparxEnemyBase
{
    FName m_curStageName;                                                             // 0x0870 (size: 0x8)
    TArray<FSP3SparxEnemyStage> m_stage;                                              // 0x0878 (size: 0x10)
    float m_damageTime;                                                               // 0x0888 (size: 0x4)
    float m_deathTime;                                                                // 0x088C (size: 0x4)

    void SetStageByName(FName Name);
    void OnStageSeqTest(FName stageCur, FName stageNext, bool& advanceOUT);
    void OnCalcMoveInput(FName stage, const FVector& moveIN, float rotIN, FVector& MoveOut, float& rotOUT);
    float GetStageTime();
    FName GetStageName();
}; // Size: 0x9A0

class ASP3_SparxGem : public ASP3_PickupBase
{
    int32 m_amount;                                                                   // 0x0330 (size: 0x4)

    void OnVFXSetState(FName State);
}; // Size: 0x338

class ASP3_SparxKey : public ASP3_PickupBase
{

    void OnVFXSetState(FName State);
}; // Size: 0x338

class ASP3_SparxPortal : public ASP3_PickupBase
{
    FDataTableRowHandle m_dataTable;                                                  // 0x0330 (size: 0x10)
    FName m_portalName;                                                               // 0x0340 (size: 0x8)
    float m_tTrigger;                                                                 // 0x0348 (size: 0x4)

    void OnVFXSetState(FName State);
}; // Size: 0x360

class ASP3_SparxPowerup : public ASP3_PickupBase
{
    int32 m_level;                                                                    // 0x0330 (size: 0x4)
    float m_health;                                                                   // 0x0334 (size: 0x4)
    float m_shield;                                                                   // 0x0338 (size: 0x4)
    float m_retSpeed;                                                                 // 0x033C (size: 0x4)
    float m_collectTime;                                                              // 0x0340 (size: 0x4)

    void SetStartTransform(const FTransform& xfmWS);
    void OnVFXSetState(FName State);
}; // Size: 0x3B0

class ASP3_SparxPropBase : public AActor
{
    float m_healthMax;                                                                // 0x0328 (size: 0x4)
    FSP3_SparxPropBaseOnDeathStart OnDeathStart;                                      // 0x0330 (size: 0x10)
    FSP3_SparxPropBaseOnDeathEnd OnDeathEnd;                                          // 0x0340 (size: 0x10)

    void RxActorHit(class AActor* Self, class AActor* Other, FVector N, const FHitResult& Hit);
    void PlayMontage(class UAnimMontage* Montage, float Rate);
    void OnVFXEvent(FName evtName, const FTransform& xfm, FName param0, float param1);
}; // Size: 0x358

class ASP3_VehicleBase : public AActor
{
    FComponentReference m_mesh;                                                       // 0x0320 (size: 0x18)
    FComponentReference m_driveComp;                                                  // 0x0338 (size: 0x18)
    FName m_driveSocket;                                                              // 0x0350 (size: 0x8)
    float m_hilightTime;                                                              // 0x0358 (size: 0x4)
    float m_releaseTime;                                                              // 0x035C (size: 0x4)
    TSubclassOf<class ACameraActor> m_camClass;                                       // 0x0360 (size: 0x8)
    float m_camInterp;                                                                // 0x0368 (size: 0x4)
    float m_healthMax;                                                                // 0x036C (size: 0x4)

    void OnVFXEvent(FName evtName, const FTransform& xfm, FName param0, float param1);
    class APawn* GetDriver();
    class ACameraActor* GetCamera();
}; // Size: 0x418

class ASP3_VehicleJet : public ASP3_VehicleBase
{
    FVector m_turnParams;                                                             // 0x0418 (size: 0xC)
    FVector4 m_pitchParams;                                                           // 0x0430 (size: 0x10)
    FVector4 m_thrustParams;                                                          // 0x0440 (size: 0x10)
    FVector m_friction;                                                               // 0x0450 (size: 0xC)
    FVector2D m_tilt;                                                                 // 0x045C (size: 0x8)
    float m_oobTurnTime;                                                              // 0x0464 (size: 0x4)
    TSubclassOf<class UGameplayEffect> m_dmgEffect;                                   // 0x0468 (size: 0x8)
    FGameplayTagContainer m_dmgTags;                                                  // 0x0470 (size: 0x20)
    float m_dmgImpact;                                                                // 0x0490 (size: 0x4)
    FVector2D m_heightRange;                                                          // 0x0494 (size: 0x8)
    FVector2D RootAngle;                                                              // 0x049C (size: 0x8)

    void RxOverlapEnd(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RxOverlapBegin(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    void RxActorHit(class AActor* Self, class AActor* Other, FVector N, const FHitResult& Hit);
    void OnVFXUpdate(float dt, class APawn* driver, float aThrust);
}; // Size: 0x500

class ASP3_VehicleSpeedBoat : public ASP3_VehicleBase
{
    FVector4 m_turnParams;                                                            // 0x0420 (size: 0x10)
    FVector m_thrustParams;                                                           // 0x0430 (size: 0xC)
    FVector m_friction;                                                               // 0x043C (size: 0xC)
    FVector m_tilt;                                                                   // 0x0448 (size: 0xC)
    FVector4 m_missileCount;                                                          // 0x0460 (size: 0x10)
    FVector2D m_missileDelay;                                                         // 0x0470 (size: 0x8)
    FComponentReference m_missileLauncher;                                            // 0x0478 (size: 0x18)
    FVector m_missileParams;                                                          // 0x0490 (size: 0xC)
    TSubclassOf<class AActor> m_missileClass;                                         // 0x04A0 (size: 0x8)
    TSoftClassPtr<ASP3_FloatingAmmoCrate> m_pickupClass;                              // 0x04A8 (size: 0x28)
    TSubclassOf<class UGameplayEffect> m_dmgEffect;                                   // 0x04D0 (size: 0x8)
    float m_dmgImpact;                                                                // 0x04D8 (size: 0x4)
    FName m_boneTurret;                                                               // 0x04E0 (size: 0x8)
    FName m_boneRocketL;                                                              // 0x04E8 (size: 0x8)
    FName m_boneRocketR;                                                              // 0x04F0 (size: 0x8)
    FName m_boneStick;                                                                // 0x04F8 (size: 0x8)
    bool m_rapidFire;                                                                 // 0x0500 (size: 0x1)
    bool m_infiniteAmmo;                                                              // 0x0501 (size: 0x1)
    TSubclassOf<class UHudCounterComponent> m_uiAmmoClass;                            // 0x0508 (size: 0x8)
    FName m_uiAmmoIcon;                                                               // 0x0510 (size: 0x8)

    void RxOverlapBegin(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    void RxActorHit(class AActor* Self, class AActor* Other, FVector N, const FHitResult& Hit);
    void OnVFXUpdate(float dt, class APawn* driver, float aThrust, float aTurn);
}; // Size: 0x860

class ASP3_VehicleSplineBoat : public ASP3_VehicleBase
{
    float m_offsetMax;                                                                // 0x0418 (size: 0x4)
    FVector4 m_velParamsH;                                                            // 0x0420 (size: 0x10)
    FVector4 m_velParamsF;                                                            // 0x0430 (size: 0x10)
    float m_gravity;                                                                  // 0x0440 (size: 0x4)
    FVector m_jumpParams;                                                             // 0x0444 (size: 0xC)
    FVector m_roll;                                                                   // 0x0450 (size: 0xC)
    FVector2D m_pitch;                                                                // 0x045C (size: 0x8)
    FVector2D m_rotParams;                                                            // 0x0464 (size: 0x8)
    TSubclassOf<class UDamageType> m_contactDmgType;                                  // 0x0470 (size: 0x8)
    float m_contactDmgAmt;                                                            // 0x0478 (size: 0x4)
    float m_tJumpMax;                                                                 // 0x047C (size: 0x4)
    class AActor* Spline;                                                             // 0x0480 (size: 0x8)
    FVector2D RootAngle;                                                              // 0x0488 (size: 0x8)

    void RxOverlapEnd(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RxOverlapBegin(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    void RxActorHit(class AActor* Self, class AActor* Other, FVector N, const FHitResult& Hit);
    void OnVFXUpdate(float dt, class APawn* driver, bool onGround, float Speed);
}; // Size: 0x540

class ASP3_VehicleSub : public ASP3_VehicleBase
{
    FVector m_turnParams;                                                             // 0x0418 (size: 0xC)
    FVector4 m_pitchParams;                                                           // 0x0430 (size: 0x10)
    FVector4 m_thrustParams;                                                          // 0x0440 (size: 0x10)
    float m_minThrust;                                                                // 0x0450 (size: 0x4)
    FVector m_friction;                                                               // 0x0454 (size: 0xC)
    FVector2D m_tilt;                                                                 // 0x0460 (size: 0x8)
    float m_oobTurnTime;                                                              // 0x0468 (size: 0x4)
    TSubclassOf<class UGameplayEffect> m_dmgEffect;                                   // 0x0470 (size: 0x8)
    float m_dmgImpact;                                                                // 0x0478 (size: 0x4)

    void RxOverlapEnd(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RxOverlapBegin(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    void RxActorHit(class AActor* Self, class AActor* Other, FVector N, const FHitResult& Hit);
    void OnVFXUpdate(float dt, class APawn* driver, float aThrust);
}; // Size: 0x4D0

class ASignpostController : public APropController
{
    TSubclassOf<class APressToTalkWidget> PressToTalk;                                // 0x03E8 (size: 0x8)

    void SayToPlayer(const FDialogText& Text, class UQuestActionsComponent* Actions);
    void Legible(class UQuestActionsComponent* Actions);
    void Illegible(class UQuestActionsComponent* Actions);
    void GreetPlayer(const FGreeting& Greeting, class UQuestActionsComponent* Actions);
}; // Size: 0x3F0

class ASimpleDenizenController : public AQuestController
{
    TSubclassOf<class APressToTalkWidget> PressToTalk;                                // 0x03E8 (size: 0x8)
    class UMontageTask* m_ambientMontage;                                             // 0x03F0 (size: 0x8)

    void ZapPlayer(const FName& Checkpoint, class UQuestActionsComponent* Actions);
    bool SyncFalconStates(FName QuestState);
    void SayToPlayer(const FDialogText& Text, class UQuestActionsComponent* Actions);
    void OutOfWorld(class UQuestActionsComponent* Actions);
    void Idle(class UQuestActionsComponent* Actions);
    void Hidden(class UQuestActionsComponent* Actions);
    void GreetPlayer(const FGreeting& G, class UQuestActionsComponent* Actions);
    void ChangeState(const FName& State, class UQuestActionsComponent* Actions);
    void Captured(class UQuestActionsComponent* Actions);
}; // Size: 0x408

class ASkateScoreChallenge : public AChallengeController
{
    class ALevelSequenceActor* OppSequence;                                           // 0x0470 (size: 0x8)
    TSubclassOf<class UTrickWidget> TrickUIClass;                                     // 0x0478 (size: 0x8)
    TSubclassOf<class USkateScoreWidget> HighScoreUIClass;                            // 0x0480 (size: 0x8)
    class UDataTable* SkateTable;                                                     // 0x0488 (size: 0x8)
    FLinearColor PendingColor;                                                        // 0x0490 (size: 0x10)
    FLinearColor LandingColor;                                                        // 0x04A0 (size: 0x10)
    FLinearColor FailureColor;                                                        // 0x04B0 (size: 0x10)
    float DisplayTime;                                                                // 0x04C0 (size: 0x4)
    float PointsPerSecond;                                                            // 0x04C4 (size: 0x4)

    void StartVert();
    void StartLaunch();
    void ShowHighScore(class UQuestActionsComponent* Actions);
    void RxSkateEvent(EPCMSkateEventType evtType, FName Name);
    void OnScoreStart();
    void OnScoreEnd();
    void onQuestAreaExitRequested(EFalconAreaExitTitle Title);
    void HalfPipeLeap();
    void EndLand();
    void AddSpinR();
    void AddSpinL();
    void AddSpinF();
    void AddSpinB();
    void AddPlayer_LS312_TripleTower();
    void AddPlayer_LS312_HalfPipeLeap();
}; // Size: 0x6E8

class ASkateboardRaceChallenge : public AQuestController
{
    TArray<class AActor*> Opponents;                                                  // 0x03E8 (size: 0x10)
    TArray<class ATriggerBase*> Checkpoints;                                          // 0x03F8 (size: 0x10)
    int32 NumLaps;                                                                    // 0x0408 (size: 0x4)
    class APhasmidPatrolPath* RacePath;                                               // 0x0410 (size: 0x8)
    class UDataTable* SkateTable;                                                     // 0x0418 (size: 0x8)
    float fadeTime;                                                                   // 0x0420 (size: 0x4)
    ESkateBoardRaceType CurRaceType;                                                  // 0x0424 (size: 0x1)
    float MaxRaceTime;                                                                // 0x0428 (size: 0x4)
    ESkillPoint ChallengeSkillPoint;                                                  // 0x042C (size: 0x1)
    int32 ChallengeBestTimeMS;                                                        // 0x0430 (size: 0x4)
    TSubclassOf<class USkateScoreWidget> CourseRecordUIClass;                         // 0x0438 (size: 0x8)
    FName BestTimeMSKey;                                                              // 0x0440 (size: 0x8)

    void StartRaceTimed(class UQuestActionsComponent* Actions);
    void StartRaceRhynocs(class UQuestActionsComponent* Actions);
    void StartRaceCrabs(class UQuestActionsComponent* Actions);
    void OnRaceUpdate(int32 curLap, float curTime, int32 curPlace, float curTurboPercent);
    void OnRaceStart();
    void OnRaceEnd();
    void onQuestAreaExitRequested(EFalconAreaExitTitle Title);
    void OnCloseHighScoreMenu(FName ignore);
    void OnAreaLeft();
    void Idle(class UQuestActionsComponent* Actions);
    void Completed(class UQuestActionsComponent* Actions);
    void ClearTrickInput();
    void CheckpointOverlapBegin(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    void CBSkateEvent(EPCMSkateEventType evtType, FName Name);
    void CalcPlayerRaceInfo(int32& retPlacement, int32& retCurLap, int32& retCurCheckPt, float& retCurRaceDist);
    void AllCrabsKilled();
}; // Size: 0x5F8

class ASocketController : public AQuestController
{

    void OnHandleAttached(class USP3_CarrySocketComponent* socket, class AActor* carryObj);
}; // Size: 0x3E8

class ASparxController : public APlayableController
{
    TSubclassOf<class UHudTimerBarComponent> TimerBarClass;                           // 0x0408 (size: 0x8)
    TSubclassOf<class UAmmoGaugeWidget> AmmoGaugeClass;                               // 0x0410 (size: 0x8)
    TSubclassOf<class UHealthBarWidget> HealthBarClass;                               // 0x0418 (size: 0x8)
    TSubclassOf<class USparxKeyWidget> SparxKeyClass;                                 // 0x0420 (size: 0x8)
    bool bIsTutorial;                                                                 // 0x0428 (size: 0x1)
    class USP3_SparxComponent* m_sparx;                                               // 0x0430 (size: 0x8)
    class USparxKeyWidget* m_sparxKey;                                                // 0x0438 (size: 0x8)

    void OnVFXEvent(FName evtName, const FTransform& xfm, FName param0, float param1);
    void Completed(class UQuestActionsComponent* Actions);
}; // Size: 0x458

class ASparxEnemyController : public AMobileDenizenController
{
    float DefeatDelay;                                                                // 0x0418 (size: 0x4)

    void Defeated(class UQuestActionsComponent* Actions);
}; // Size: 0x420

class ASparxThiefController : public AThiefController
{
}; // Size: 0x428

class ASpawnController : public AQuestController
{

    void Idle(class UQuestActionsComponent* Actions);
    void Generating(class UQuestActionsComponent* Actions);
    void Defeated(class UQuestActionsComponent* Actions);
    void Active(class UQuestActionsComponent* Actions);
}; // Size: 0x3F0

class ASpyroCullTriggerOverlapActor : public AActor
{
    bool bCheckOnStartOnly;                                                           // 0x0318 (size: 0x1)
    bool bUseStartTimer;                                                              // 0x0319 (size: 0x1)
    float StartTimer;                                                                 // 0x031C (size: 0x4)
    TArray<class APhasmidCullVolumeActor*> TriggerOnOverlap;                          // 0x0320 (size: 0x10)
    TArray<class APhasmidCullVolumeActor*> DisableOnOverlap;                          // 0x0330 (size: 0x10)
    class UBoxComponent* TriggerVolume;                                               // 0x0340 (size: 0x8)

}; // Size: 0x350

class ASpyroFlameBreathActor : public APhasmidBeamDamage
{
    TArray<FName> ParticleParameters;                                                 // 0x03F8 (size: 0x10)
    class UParticleSystem* FlameEmitterTemplate;                                      // 0x0408 (size: 0x8)
    class UParticleSystem* FlameMuzzleTemplate;                                       // 0x0410 (size: 0x8)
    class UParticleSystem* ImpactEmitterTemplate;                                     // 0x0418 (size: 0x8)
    class UParticleSystem* FlameDamageEmitterTemplate;                                // 0x0420 (size: 0x8)
    float ImpactOffsetX;                                                              // 0x0428 (size: 0x4)
    float ImpactOffsetZ;                                                              // 0x042C (size: 0x4)
    float HideFlameEmitterThreshold;                                                  // 0x0430 (size: 0x4)
    float MuzzleThreshold;                                                            // 0x0434 (size: 0x4)
    float MinParticleParameterVal;                                                    // 0x0438 (size: 0x4)
    float HitTimeOffset;                                                              // 0x043C (size: 0x4)
    float MuzzleHitTimeOffset;                                                        // 0x0440 (size: 0x4)
    bool bMuzzleEnabled;                                                              // 0x0444 (size: 0x1)
    float EndMuzzleTime;                                                              // 0x0448 (size: 0x4)
    float FlameImpactDelay;                                                           // 0x044C (size: 0x4)
    bool bFlameImpactAttached;                                                        // 0x0450 (size: 0x1)
    float SplitImpactsTime;                                                           // 0x0454 (size: 0x4)
    float MinImpactDelay;                                                             // 0x0458 (size: 0x4)
    float EndImpactsTime;                                                             // 0x045C (size: 0x4)
    float AttackLifetime;                                                             // 0x0460 (size: 0x4)
    float FullLifetime;                                                               // 0x0464 (size: 0x4)
    float SpotLightPeakIntensity;                                                     // 0x0468 (size: 0x4)
    float PointLightPeakIntensity;                                                    // 0x046C (size: 0x4)
    float MinDistanceIntensityScale;                                                  // 0x0470 (size: 0x4)
    class UCurveFloat* IntensityCurve;                                                // 0x0478 (size: 0x8)
    class UMaterialInterface* SpotLightFunction;                                      // 0x0480 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0490 (size: 0x8)
    class UPointLightComponent* PointLightComp;                                       // 0x0498 (size: 0x8)
    class UParticleSystemComponent* FlameEmitter;                                     // 0x04A0 (size: 0x8)
    class UParticleSystemComponent* FlameMuzzle;                                      // 0x04A8 (size: 0x8)
    class UParticleSystemComponent* LeftImpactEmitter;                                // 0x04B0 (size: 0x8)
    class UParticleSystemComponent* RightImpactEmitter;                               // 0x04B8 (size: 0x8)
    class UMaterialInstanceDynamic* SpotLightFunctionDynamic;                         // 0x04C0 (size: 0x8)

}; // Size: 0x4E0

class ASpyroLoot : public APhasmidLevelActor
{
    FString LevelKeyForSave;                                                          // 0x03C8 (size: 0x10)
    float SparxCollectionDuration;                                                    // 0x03D8 (size: 0x4)
    float MovingPositionLerpDuration;                                                 // 0x03DC (size: 0x4)
    float RotationSpeed;                                                              // 0x03E0 (size: 0x4)
    FVector PlayerOffset;                                                             // 0x03E4 (size: 0xC)
    class UCurveFloat* SparxCollectionHeightCurve;                                    // 0x03F0 (size: 0x8)
    class ACharacter* playerCharacter;                                                // 0x03F8 (size: 0x8)
    ECollectionSequenceState CollectionSequenceState;                                 // 0x0400 (size: 0x1)
    uint8 bManualLootRotation;                                                        // 0x0404 (size: 0x1)
    FRotator ManualCollectionRotation;                                                // 0x0408 (size: 0xC)

    void StartSparxCollection(class ACharacter* CollectingCharacter);
    void StartContactCollection(class ACharacter* CollectingCharacter);
    void StartChargeCollection(class ACharacter* CollectingCharacter);
    void SparxLootSlurp(float DeltaTime);
    void CollectionCompleted();
    void ChargeLootSlurp(float DeltaTime);
    void BP_SetGemAutoCollect();
}; // Size: 0x438

class ASpyroPlayerController : public APhasmidPlayerController
{
    class UFalconCharacterInputComponent* CurrentCharacterInputComponentRef;          // 0x0798 (size: 0x8)
    TArray<FActiveForceFeedbackEffect> ImmediateForceFeedbackEvents;                  // 0x07B8 (size: 0x10)

    void SetUnderDesignerControl(bool bValue, bool bClearStack);
    bool IsPointToTreasureKeyPressed(EInputSource RestrictToType);
    bool IsLeftTriggerKeyPressed(EInputSource RestrictToType);
    bool IsChargeKeyPressed(EInputSource RestrictToType);
    void IncreaseMaxHealth();
    bool GetUnderDesignerControl();
    int32 GetSkipButtonMask();
    void ClientStopForceFeedbackImmediate(class UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);
    void ClientPlayForceFeedbackImmediate(class UForceFeedbackEffect* ForceFeedbackEffect, bool bIgnoreTimeDilation, FName Tag);
}; // Size: 0x830

class ASuperBonusThiefController : public AMobileDenizenController
{
}; // Size: 0x4C0

class ASuperBonusTreasureController : public APropController
{

    void GiveGems(class UQuestActionsComponent* Actions);
}; // Size: 0x490

class ASwitchPawnController : public APlayableController
{
    TSubclassOf<class APawn> PrimaryClass;                                            // 0x0408 (size: 0x8)
    TSubclassOf<class APawn> AlternateClass;                                          // 0x0410 (size: 0x8)
    TSubclassOf<class ACameraActor> AlternateCamera;                                  // 0x0418 (size: 0x8)
    TSubclassOf<class AActor> AlternateVehicle;                                       // 0x0420 (size: 0x8)
    float fadeTime;                                                                   // 0x0428 (size: 0x4)
    class AActor* PrimaryPoint;                                                       // 0x0430 (size: 0x8)
    class AActor* AlternatePoint;                                                     // 0x0438 (size: 0x8)
    class AActor* AlternateSpline;                                                    // 0x0440 (size: 0x8)

    void IdleNoFade(class UQuestActionsComponent* Actions);
    void Idle(class UQuestActionsComponent* Actions);
    void AlternateNoFade(class UQuestActionsComponent* Actions);
    void Alternate(class UQuestActionsComponent* Actions);
}; // Size: 0x470

class ATeleporter : public AActor
{
    bool longFade;                                                                    // 0x0318 (size: 0x1)
    FText TeleporterText;                                                             // 0x0320 (size: 0x18)
    class ATeleporter* PartnerTeleporter;                                             // 0x0338 (size: 0x8)
    class UBoxComponent* TeleportTrigger;                                             // 0x0340 (size: 0x8)
    class UArrowComponent* LandingPoint;                                              // 0x0348 (size: 0x8)
    TSoftObjectPtr<AQuestLevelActor> QuestsToActivate;                                // 0x0350 (size: 0x28)
    TSubclassOf<class ACharacter> PlayerClassOverride;                                // 0x0378 (size: 0x8)
    class UAkAudioEvent* MusicOnTeleport;                                             // 0x0380 (size: 0x8)
    EPlayerMoveMode MovementMode;                                                     // 0x0388 (size: 0x1)
    class UStaticMeshComponent* OpenMesh;                                             // 0x0390 (size: 0x8)
    class UStaticMeshComponent* ClosedMesh;                                           // 0x0398 (size: 0x8)
    class UParticleSystemComponent* vfx;                                              // 0x03A0 (size: 0x8)
    class UParticleSystemComponent* StartVFX;                                         // 0x03A8 (size: 0x8)
    class UGemFinderLinkComponent* GemFinderLink;                                     // 0x03B0 (size: 0x8)
    bool Enabled;                                                                     // 0x03B8 (size: 0x1)
    class UTextRenderComponent* TextRender;                                           // 0x03C0 (size: 0x8)
    class UPlayerTeleportTask* PlayerTeleportTask;                                    // 0x03C8 (size: 0x8)

    void SetActorHiddenInGame(bool bNewHidden);
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnDeactivateSFX();
    void OnActivateSFX();
}; // Size: 0x3D0

class AThiefController : public AMobileDenizenController
{

    void Evading(class UQuestActionsComponent* Actions);
}; // Size: 0x418

class ATransportManager : public AActor
{
    float FadeInOutTime;                                                              // 0x0318 (size: 0x4)
    float LevelOffset;                                                                // 0x031C (size: 0x4)
    FVector BaseLevelPosition;                                                        // 0x0320 (size: 0xC)
    FTransportManagerLoadCompleted LoadCompleted;                                     // 0x0330 (size: 0x10)
    FTransportManagerLevelActivated LevelActivated;                                   // 0x0340 (size: 0x10)
    FTransportManagerLevelDeactivated LevelDeactivated;                               // 0x0350 (size: 0x10)
    FTransportManagerLevelVisibilityEvent LevelVisibilityEvent;                       // 0x0360 (size: 0x10)
    TWeakObjectPtr<class APhasmidLightingManager> GlobalLightingManager;              // 0x0370 (size: 0x8)
    TArray<FLevelTransportRecord> records;                                            // 0x0378 (size: 0x10)
    TArray<class AActor*> PhasmidActorsToTick;                                        // 0x0388 (size: 0x10)
    class APhasmidLightingManager* IncomingLightingManager;                           // 0x0418 (size: 0x8)

    TEnumAsByte<EManagerState> WaitForAddToWorld();
    void UnloadTransportLevelsExcept(FMasterLevelData SavedRecord, bool unloadActiveTransportLevel);
    void UnloadTransportLevels(bool unloadActiveTransportLevel);
    void TurnLightingManagerOn();
    void TurnLightingManagerOff();
    TEnumAsByte<EManagerState> TickUnloadingLevels();
    TEnumAsByte<EManagerState> TickNotifyDelay();
    TEnumAsByte<EManagerState> TickLoadingLevels();
    TEnumAsByte<EManagerState> TickIdle();
    void Tick(float DeltaTime);
    void SubLevelUnloadCompleted();
    void StartAtLevel(const class UObject* WorldContextObject, const FName& LevelPath, const TArray<FName> sublevelNames, bool isRestart, TEnumAsByte<EFalconLoadScreen::Type> loadScreenType, FString Checkpoint, FLatentActionInfo LatentInfo);
    void ShowInventoryUI();
    void SetIncomingLighting();
    void SetActiveLevelVisibility(bool bIsVisible);
    void QueueTransport(const class UObject* WorldContextObject, const FName& LevelPath, const TArray<FName> sublevelNames, TEnumAsByte<ELevelTransportType> transportType, TEnumAsByte<ELevelRecordType> recordType, bool bMakeVisibleAfterLoad, FString Checkpoint, FLatentActionInfo LatentInfo, bool completeLoad, class APortal* iSourcePortal, class APortal* iTargetPortal);
    TEnumAsByte<EManagerState> Notify();
    class ULevel* GetCurrentSublevelWithString(FString substring);
    class AActor* FindPlayerStartActor(const class UObject* WorldContextObject, FString ActorName, FString LevelName);
    class APortal* FindPlayerSpawnTransform(const class UObject* WorldContextObject, FString ActorName, FTransform& outSpawnTransform, FString LevelName);
    void CallOnPlayerReadyS3();
    void CallOnPlayerReady();
    void BeginDelayedStart();
}; // Size: 0x428

class AWaterProcessVolumeController : public AActor
{
    class APostProcessVolume* WaterVolume;                                            // 0x0318 (size: 0x8)
    float BaseValue;                                                                  // 0x0320 (size: 0x4)
    FVector2D FadeValues;                                                             // 0x0324 (size: 0x8)
    float currentFadeValue;                                                           // 0x032C (size: 0x4)
    class APlayerCameraManager* CameraManager;                                        // 0x0330 (size: 0x8)
    float CurrentFadeTime;                                                            // 0x0338 (size: 0x4)

    void Tick(float DeltaSeconds);
    float GetCurrentFadeValue();
    void BeginPlay();
}; // Size: 0x340

class AZoeController : public ASimpleDenizenController
{
    float IdleAppearDistance;                                                         // 0x0408 (size: 0x4)
    float IdleDisappearDistance;                                                      // 0x040C (size: 0x4)
    FVector AutosaveOffset;                                                           // 0x0410 (size: 0xC)
    class UZoeActions* m_zoeActions;                                                  // 0x0420 (size: 0x8)

    void ZapPlayer(const FName& Checkpoint, class UQuestActionsComponent* Actions);
    void Teaching(class UQuestActionsComponent* Actions);
    void Cooldown(class UQuestActionsComponent* Actions);
    void Autosaving(class UQuestActionsComponent* Actions);
}; // Size: 0x448

class AskTfbToChangeTheirInterface : public AActor
{
    class UQuestDialogTask* Parent;                                                   // 0x0320 (size: 0x8)

    void HudDialogOptionSelected(int32 selectedIndex);
}; // Size: 0x328

class IAgent9Spawner : public IInterface
{

    void OnMinigameStart(class AActor* minigame);
    class AActor* OnMinigameSpawn();
}; // Size: 0x28

class IAirshipInterface : public IInterface
{

    void SetMediaSource(class UFileMediaSource* MediaSource);
}; // Size: 0x28

class IBatteringRamInterface : public IInterface
{
}; // Size: 0x28

class IBreatheFireInterface : public IInterface
{
}; // Size: 0x28

class IBuzzHopInterface : public IInterface
{
}; // Size: 0x28

class IBuzzSawInterface : public IInterface
{
}; // Size: 0x28

class ICameraTaskInterface : public IInterface
{
}; // Size: 0x28

class IFalconGameInstanceInterface : public IInterface
{

    void GetUserProfileName(FString& ProfileName);
    bool GetSkipFrontEnd();
    class AFalconScreenManager* GetFalconScreenManager();
    bool GetDemoMode();
    void closeProfileChangedDialog();
}; // Size: 0x28

class IFalconGameStateBaseInterface : public IInterface
{

    void SetCheatEnabled(FString Name);
    bool NeedsPatch(FString LevelShortName);
    bool IsFlightLevel(FString LevelPath);
    bool IsBossLevel(FString LevelPath);
    int32 GetTreasureSpentAtLevelStart();
    int32 GetTreasureAtLevelStart();
    bool GetQuestActivated();
    bool GetPatchApplied();
    EFalconAreaExitTitle GetExitAreaTitle();
    bool GetCheatEnabled(FString Name);
}; // Size: 0x28

class IFalconGameStateOnlineInterface : public IInterface
{

    void ReturnToTitle(bool reloadSave);
    void InvokeSystemLogin();
}; // Size: 0x28

class IFalconGameStateSaveInterface : public IInterface
{

    void ShowSavingUI(bool inShow);
    void GetCurrentLevelNameForActor(class AActor* Actor, FString& LevelName);
}; // Size: 0x28

class IFireWallInterface : public IInterface
{
}; // Size: 0x28

class IGemFinderTargetInterface : public IInterface
{

    bool ForceHasGem(bool& bHasGem);
}; // Size: 0x28

class IHudFlightScreenInterface : public IInterface
{

    void FlightScreenShow(UClass* flightScreenWidgetClass, float startingSeconds, bool orbChallenge, const TArray<EFlightLevelTargetType>& Targets);
    void FlightScreenHide(UClass* flightScreenWidgetClass);
    float FlightScreenGetTimeRemaining();
    float FlightScreenGetTimeElapsed();
    void FlightScreenCollect(UClass* flightScreenWidgetClass, EFlightLevelTargetType ItemType, float bonusSeconds);
}; // Size: 0x28

class IHudFlightSummaryCallbackInterface : public IInterface
{

    void FlightSummaryReply(int32 selected);
}; // Size: 0x28

class IHudFlightSummaryInterface : public IInterface
{

    void FlightSummaryShow();
    void FlightSummaryHide();
    void FlightSummaryConfigure(class UObject* aOwner, EInventoryType flightReward, const TArray<FFlightResult>& targetResults, EFlightLevelResult FlightResult, float Time, float bestTime, int32 place);
}; // Size: 0x28

class IHudScreenInterface : public IInterface
{

    void ShowTitle();
    void ShowTalkModeUI(bool inShow);
    void ShowSpitModeUI(bool inShow);
    void ShowSpiritOrbCount();
    void ShowProfileChangedScreen(bool inShow);
    void ShowMovieTheaterScreen(bool inShow);
    void ShowLookModeUI(bool inShow);
    void ShowFanfare(EFanfareType MessageType, FString optionalName);
    void ShowEggCollected(int32 eggCount, int32 eggTotal);
    void ShowDifficultyScreen(bool inShow);
    void ShowControllerErrorScreen(bool inShow);
    void SetMiniMapVisibility(bool InVisible);
    void MiniMapAddTalismanMarker(const class UObject* talisman);
    void MiniMapAddGreenOrbMarkers();
    void AddInteractiveWidget(class UUserWidget* UserWidget, int32 ZOrder);
    void AddGameplayWidget(class UUserWidget* UserWidget, int32 ZOrder);
}; // Size: 0x28

class IQuestPrototype : public IInterface
{

    void ZapPlayer(const FName& Checkpoint, class UQuestActionsComponent* Actions);
    void StartChallengeTimer(class UQuestActionsComponent* Actions);
    void SetPosition(const FName& where, const FName& moveMode, class UQuestActionsComponent* Actions);
    void SayToPlayer(const FDialogText& Text, class UQuestActionsComponent* Actions);
    void MoveTo(const FName& where, class UQuestActionsComponent* Actions);
    void GreetPlayer(const FGreeting& Greeting, class UQuestActionsComponent* Actions);
    void GiveInventory(const FName& Item, class UQuestActionsComponent* Actions);
    void GiveEgg(const FName& egg, class UQuestActionsComponent* Actions);
    void GiveAchievement(const uint8& Number, class UQuestActionsComponent* Actions);
    void FadeOut(float Duration, class UQuestActionsComponent* Actions);
    void FadeIn(float Duration, class UQuestActionsComponent* Actions);
    void ChangeState(const FName& State, class UQuestActionsComponent* Actions);
}; // Size: 0x28

class IQuestionScreenCallbackInterface : public IInterface
{

    void QuestionScreenOptionSelected(int32 selectedIndex);
}; // Size: 0x28

class ISP3_AnimInterface : public IInterface
{

    FName GetAnimState(FName Layer, FVector4& Input, float& Alpha, FName& SubState);
}; // Size: 0x28

class ISP3_DamageInterface : public IInterface
{

    bool IsDead();
    float GetHealthMax();
    float GetHealth();
}; // Size: 0x28

class ITransportInterface : public IInterface
{

    void TI_TurnOnOrbs();
    void TI_TriggerPreload();
    void TI_TransitionTriggerDetectedTarget();
    void TI_TransitionTriggerDetectedSource();
    void TI_TransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void TI_TransitionCompleteSource();
    void TI_TransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void TI_TransitionBeginSource();
    void TI_ReturnHomeMenu();
    void TI_LoadNextHomeworld();
    void TI_LevelEndItemCollected();
    void SavePortalRotation(FRotator CurrentRotation);
}; // Size: 0x28

class UAchievementComponent : public UActorComponent
{
    FString achievementPrefix;                                                        // 0x00F0 (size: 0x10)
    TArray<FTrackedStatRecord> trackedStats;                                          // 0x0100 (size: 0x10)

    void SetPresence(EPresence presence);
    void SetAchievementCompletion(EAchievement achievement, float completionAmount);
    void OnStoreSaveData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap);
    void OnSetCurrentUser();
    void OnChangeSaveGame(class UFalconSaveGame* incomingSaveGame);
    EPresence GetPresence();
}; // Size: 0x210

class UAmmoGaugeWidget : public UUserWidget
{
    int32 AmmoCount;                                                                  // 0x0208 (size: 0x4)

    void SetAmmoWidget(class UWidget* Content);
}; // Size: 0x218

class UAmmoIconWidget : public USP3_UserWidgetBase
{
}; // Size: 0x210

class UAtmosphericFogScaleIntensityComponent : public UScaleIntensityComponent
{
}; // Size: 0xF8

class UBatteringCharge : public UBTTask_MoveTo
{
}; // Size: 0xB0

class UBatteringChargeTask : public UAITask_MoveTo
{
}; // Size: 0x118

class UBatteringRam : public USkillNode
{
}; // Size: 0x78

class UBossWorld : public UScriptedWorld
{
}; // Size: 0x50

class UBreatheFire : public USkillNode
{
}; // Size: 0x78

class UBreatheFireTask : public UAITask
{
    class AActor* m_fx;                                                               // 0x0070 (size: 0x8)

}; // Size: 0xA8

class UBuzzHop : public USkillNode
{
    FBlackboardKeySelector TargetPoint;                                               // 0x0078 (size: 0x28)

}; // Size: 0xA0

class UBuzzHopTask : public UAITask
{

    void OnLanded(const FHitResult& Hit);
}; // Size: 0x70

class UBuzzLevelSync : public UBTService
{
    FBlackboardKeySelector PlayerTarget;                                              // 0x0070 (size: 0x28)

}; // Size: 0x98

class UBuzzSaw : public UBTTask_MoveTo
{
}; // Size: 0xB0

class UBuzzSawTask : public UAITask_MoveTo
{
    class AActor* m_proxy;                                                            // 0x0140 (size: 0x8)

}; // Size: 0x148

class UBuzzSawUpdateTarget : public UBTService
{
    FBlackboardKeySelector BuzzSawTarget;                                             // 0x0070 (size: 0x28)
    FBlackboardKeySelector BuzzSawDestination;                                        // 0x0098 (size: 0x28)
    FBlackboardKeySelector Battleground;                                              // 0x00C0 (size: 0x28)

}; // Size: 0xE8

class UCameraFollowTask : public UQuestLatentTask
{
}; // Size: 0x80

class UCameraReadjust : public UActorComponent
{
    bool Resetting;                                                                   // 0x00F0 (size: 0x1)
    TSubclassOf<class UGameplayEffect> CameraCenter;                                  // 0x00F8 (size: 0x8)

    void SetCameraLookAtTarget(class AActor* Target);
    void HardCancel();
    void CameraReset(float Timer);
    void CameraReadjust(class AActor* Destination, bool Teleport, float Speed, bool Custom);
    void CameraAutoadjust(class AActor* talker);
}; // Size: 0x1D0

class UCameraVictoryOrbitTask : public UQuestLatentTask
{
}; // Size: 0x70

class UCooldownTask : public UQuestTask
{
}; // Size: 0x28

class UDirectionalLightScaleIntensityComponent : public UScaleIntensityComponent
{
}; // Size: 0xF8

class UDragonSineMovementComponent : public UActorComponent
{
    class AActor* PrevActor;                                                          // 0x0108 (size: 0x8)
    bool bAlive;                                                                      // 0x0110 (size: 0x1)
    float RotationZDelta;                                                             // 0x0114 (size: 0x4)
    float SinePhase;                                                                  // 0x0118 (size: 0x4)
    float SineAmplitude;                                                              // 0x011C (size: 0x4)
    float SineFrequency;                                                              // 0x0120 (size: 0x4)

    void MoveUpdate(float DeltaTime, class AActor* Previous);
}; // Size: 0x130

class UDragonWorlds : public UScriptedRealm
{
}; // Size: 0x30

class UEveningLake : public UScriptedRealm
{
}; // Size: 0x30

class UExponentialHeightFogScaleIntensityComponent : public UScaleIntensityComponent
{
}; // Size: 0xF8

class UFalconCharacterInputComponent : public UActorComponent
{
    FGameplayTag DisableInputTag;                                                     // 0x00F0 (size: 0x8)
    bool bRetroControls;                                                              // 0x00F8 (size: 0x1)
    class APawn* ControlledPawn;                                                      // 0x0100 (size: 0x8)
    class ASpyroPlayerController* PlayerController;                                   // 0x0108 (size: 0x8)
    float DeltaSeconds;                                                               // 0x0110 (size: 0x4)
    float RotationMult_GroundMovement;                                                // 0x0114 (size: 0x4)
    float RotationMult_SideRoll;                                                      // 0x0118 (size: 0x4)
    float RotationMult_CameraRightStick;                                              // 0x011C (size: 0x4)
    float RotationMult_FreeLook;                                                      // 0x0120 (size: 0x4)

    void UpdateReferences();
    void SetPlayerCharacterContext(const FSpyroCharacterInitialData& InitialData);
    void PlayerControllerTick(float newDeltaSeconds);
    bool IsControllable(FGameplayTag DisablingTag);
    void InputAxis_TriggerRight(float AxisValue);
    void InputAxis_TriggerLeft(float AxisValue);
    void InputAxis_RightStick_Y(float AxisValue);
    void InputAxis_RightStick_X(float AxisValue);
    void InputAxis_LeftStick_Y(float AxisValue);
    void InputAxis_LeftStick_X(float AxisValue);
    void InputAction_TriggerRight(bool Pressed);
    void InputAction_TriggerLeft(bool Pressed);
    void InputAction_ShoulderRight(bool Pressed);
    void InputAction_ShoulderLeft(bool Pressed);
    void InputAction_RightThumbstickButton(bool Pressed);
    void InputAction_LeftThumbstickButton(bool Pressed);
    void InputAction_FaceTop(bool Pressed);
    void InputAction_FaceRight(bool Pressed);
    void InputAction_FaceLeft(bool Pressed);
    void InputAction_FaceBottom(bool Pressed);
}; // Size: 0x128

class UFalconCharacterInputComponent_Spyro : public UFalconCharacterInputComponent
{
    class ASpyroCharacter* Spyro;                                                     // 0x0128 (size: 0x8)

}; // Size: 0x130

class UFalconCharacterPushComponent : public UActorComponent
{
    float PushStrength;                                                               // 0x00F0 (size: 0x4)
    float PushTick;                                                                   // 0x00F4 (size: 0x4)

    void PushAllCharacters();
    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x110

class UFalconCheatManager : public UCheatManager
{
}; // Size: 0x78

class UFalconGameInstance : public UGameInstance
{
    TSoftObjectPtr<UDataTable> _widgetTable;                                          // 0x0108 (size: 0x28)
    TArray<FPurchaseOption> PurchasedOptions;                                         // 0x0130 (size: 0x10)
    class AFalconScreenManager* _screenManager;                                       // 0x0160 (size: 0x8)
    FString WelcomeScreenMap;                                                         // 0x0168 (size: 0x10)
    FString MainMenuMap;                                                              // 0x0178 (size: 0x10)

    void ShowExternalLoginUI();
    void SetUpdateMouseCursorInCutscene(bool Value);
    void SetBypassSettingInputModeForCutsceneMouseCursor(bool DoBypass);
    void QuestionScreenOptionSelected(int32 selectedIndex);
    bool PrimaryControllerDetected();
    void OnInputSourceChanged(EInputSource NewInputSource);
    void OnHideMouseCursorTimer();
    bool IsReady();
    void HandleLevelStreamingComplete();
    void HandleGameStateChangedForCutscenes(EFalconGameState aOldState, EFalconGameState aNewState);
    void HandleGameStateChanged(EFalconGameState aOldState, EFalconGameState aNewState);
    class APlayerController* GetPrimaryController();
    int32 GetMaximumNumberOfControllers();
    bool GameSavingEnabled();
    void DetectPrimaryController(FDetectPrimaryControllerOnPrimaryControllerDetected OnPrimaryControllerDetected);
}; // Size: 0x2D0

class UFalconGameSaveComponent : public UActorComponent
{
    bool _saveInProgress;                                                             // 0x01B0 (size: 0x1)
    class UFalconModuleSaveGame* _falconSaveGame;                                     // 0x01B8 (size: 0x8)
    class UFalconModuleSaveGame* _shadowFalconSaveGame;                               // 0x01C0 (size: 0x8)
    class USaveGame* _tempSaveGameData;                                               // 0x01C8 (size: 0x8)
    FFalconGameSaveComponentOnLoadGameAsyncComplete OnLoadGameAsyncComplete;          // 0x01D8 (size: 0x10)
    FString _saveSlotName;                                                            // 0x01E8 (size: 0x10)
    FString _saveSlotNameOld;                                                         // 0x01F8 (size: 0x10)
    bool _doDebugPrint;                                                               // 0x0208 (size: 0x1)
    float _minSaveWait;                                                               // 0x020C (size: 0x4)

    bool SetGlobalFloatValue(FString Key, float Value);
    bool SetChangedKeybindValue(FString Key, FKey Value);
    void SetActiveSaveSlot(int32 Slot);
    void SetActiveGame(int32 Game);
    void SaveGame(EPhasmidSaveType saveType, FString LevelPath);
    void RestoreObjects();
    void restoreObjectDataFromSave(class AActor* Actor);
    bool RemoveChangedKeybindValue(FString Key);
    void objectStoreSerializedDataByName(FString objName, const FPhasmidObjectSaveDataList& dataList);
    void objectStoreSerializedData(class AActor* Actor, const FPhasmidObjectSaveDataList& dataList);
    void objectStoreCheckpointDataByName(FString objName, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpointReached);
    void objectStoreCheckpointData(class AActor* Actor, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpointReached);
    void objectSaveDataUpdated(class AActor* Actor);
    void LoadGameAsync(bool forceReload, bool skipRestore);
    void LoadGame(bool forceReload, bool skipRestore);
    bool IsSavingDisabled();
    float GetTimePlayedForSlot(int32 slotIndex);
    void GetSaveDataObjectListForType(FString LevelName, bool allLevels, EInventoryType inventoryType, TArray<FPhasmidGameSaveObjectData>& objectDataList);
    void GetSaveDataObjectListForLevel(FString LevelName, TArray<FPhasmidGameSaveObjectData>& objectDataList);
    bool getSaveDataForActorByName(FString ActorName, FString LevelName, FPhasmidObjectSaveDataList& dataList);
    bool getSaveDataForActor(class AActor* Actor, FString LevelName, FPhasmidObjectSaveDataList& dataList);
    bool GetGlobalFloatValue(FString Key, float& Value);
    class UFalconSaveGame* GetFalconSaveGameObject();
    int32 GetFalconInventoryCollectedCount(EInventoryType inventoryType, FString LevelName, bool CurrentLevel);
    bool getCheckpointDataForActorByName(FString ActorName, FPhasmidObjectSaveDataList& dataList);
    bool GetChangedKeybindValue(FString Key, FKey& Value);
    void DeleteSave();
}; // Size: 0x370

class UFalconGameViewportClient : public UGameViewportClient
{
}; // Size: 0x660

class UFalconGameplayStatics : public UBlueprintFunctionLibrary
{

    bool UnpauseGame(const class UObject* WorldContextObject);
    void StopTimePlayedClock(const class UObject* WorldContextObject);
    void StartTimePlayedClock(const class UObject* WorldContextObject);
    class AActor* SpawnGemWithName(const class UObject* InSpawner, const TSubclassOf<class AActor>& InClass, FString InName, const FTransform& InTransform, ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride);
    bool ShouldShowBossLoadScreen(const class UObject* WorldContextObject, FString LevelPath);
    void SetSlotDifficulty(const class UObject* WorldContextObject, int32 slotIndex, int32 difficulty);
    void SetSaveSlotIndex(const class UObject* WorldContextObject, int32 Index);
    void SetSaveSlotActivated(const class UObject* WorldContextObject, int32 Index, bool Activated);
    void SetS2SuperflameUnlockForAllSlots(const class UObject* WorldContextObject, bool Unlocked);
    void SetNightmareDifficultyUnlocked(const class UObject* WorldContextObject);
    void SetGlobalFloatData(const class UObject* WorldContextObject, FString Key, float Value);
    void SetGameIndex(const class UObject* WorldContextObject, int32 Index);
    void SetCutsceneSubtitlesEnabled(const class UObject* WorldContextObject, bool subtitlesOn);
    void SetCreditsUnlocked(const class UObject* WorldContextObject);
    void SetArtGalleryUnlocked(const class UObject* WorldContextObject);
    void SetActiveSaveSlotIndex(const class UObject* WorldContextObject, int32 Index);
    void SetActiveGameIndex(const class UObject* WorldContextObject, int32 Index);
    void SetActiveCameraMode(const class UObject* WorldContextObject, bool activeModeOn);
    void SerializeSaveDataForActorByName(const class UObject* WorldContextObject, FString Name, const FPhasmidObjectSaveDataList& saveData);
    bool PauseGame(const class UObject* WorldContextObject, bool bPauseAudio);
    void objectStoreCheckpointData(const class UObject* WorldContextObject, class AActor* Actor, const FPhasmidObjectSaveDataList& objectDataList, bool delayStoringUntilCheckpoint);
    void objectSaveDataUpdated(const class UObject* WorldContextObject, class AActor* Object);
    bool IsMenuCancelKey(const FKey& Key);
    bool IsMenuActivateKey(const FKey& Key);
    bool IsDesktopBuild();
    float GetTimePlayedForSlot(const class UObject* WorldContextObject, int32 slotIndex);
    float GetTimePlayedForGame(const class UObject* WorldContextObject);
    void GetTextSize(const class UObject* WorldContextObject, FString InText, const FSlateFontInfo& InFontInfo, FVector2D& OutSize);
    int32 GetSlotDifficulty(const class UObject* WorldContextObject, int32 slotIndex);
    bool GetShippingBuild();
    int32 GetSaveSlotIndex(const class UObject* WorldContextObject);
    bool getSaveDataForActorByName(const class UObject* WorldContextObject, FString Name, FString Level, FPhasmidObjectSaveDataList& saveData);
    bool GetS3EggCollectedByName(const class UObject* WorldContextObject, FString eggName);
    bool GetS2SuperflameUnlockForAllSlots(const class UObject* WorldContextObject);
    bool GetPortalExitActivated(const class UObject* WorldContextObject, FString Level);
    float GetPlatformTimeInSeconds();
    void GetNonGPLLevelInfo(const class UObject* WorldContextObject, int32& gameNum, int32& levelIndex, FString& LevelName);
    bool GetNightmareDifficultyUnlocked(const class UObject* WorldContextObject);
    void GetListOfLevelsForGame(const class UObject* WorldContextObject, int32 gameIndex, TArray<FString>& Levels);
    int32 GetLevelInventoryTotalForType(const class UObject* WorldContextObject, EInventoryType inventoryType, FString Level);
    bool GetIsSaveSlotActivated(const class UObject* WorldContextObject, int32 slotIndex);
    int32 GetInventoryRawTotalCountForLevel(const class UObject* WorldContextObject, FString Level);
    int32 GetInventoryCollectedCountForType(const class UObject* WorldContextObject, EInventoryType Type, FString Level);
    bool GetGlobalFloatData(const class UObject* WorldContextObject, FString Key, float& Value);
    void GetGameSaveDataObjectList(const class UObject* WorldContextObject, FString Level, EInventoryType Type, TArray<FPhasmidGameSaveObjectData>& objectDataList);
    int32 GetGameInventoryTotalForType(const class UObject* WorldContextObject, int32 gameIndex, EInventoryType inventoryType);
    int32 GetGameIndex(const class UObject* WorldContextObject);
    class APlayerController* GetFirstLocalPlayerController(const class UObject* WorldContextObject);
    class UFalconGameSaveComponent* GetFalconSaveComponent(const class UObject* WorldContextObject);
    class AGameStateBase* GetFalconGameState(const class UObject* WorldContextObject);
    bool GetEggCollectedByName(const class UObject* WorldContextObject, FString eggName);
    bool GetDragonCollected(const class UObject* WorldContextObject, FString Level, FString dragonName);
    void GetDebugSaveParams(const class UObject* WorldContextObject, TArray<FPhasmidSaveParam>& saveParams);
    bool GetCutsceneSubtitlesEnabled(const class UObject* WorldContextObject);
    void GetCurrentLevelName(const class UObject* WorldContextObject, FString& LevelName);
    bool GetCreditsUnlocked(const class UObject* WorldContextObject);
    bool GetCompletionPctForSlot(const class UObject* WorldContextObject, int32 saveSlotIndex, float& pctGame1, float& pctGame2, float& pctGame3);
    float GetCompletionPctForLevel(const class UObject* WorldContextObject, FString Level);
    float GetCompletionPctForGame(const class UObject* WorldContextObject, int32 slotIndex, int32 gameIndex);
    void GetAspectAdjustedUIPosition(FVector WorldSpacePosition, class APlayerController* PlayerController, FVector2D& OutScreenSpace);
    bool GetArtGalleryUnlocked(const class UObject* WorldContextObject);
    int32 GetActiveSaveSlotIndex(const class UObject* WorldContextObject);
    int32 GetActiveGameIndex(const class UObject* WorldContextObject);
    bool GetActiveCameraMode(const class UObject* WorldContextObject);
    void ForceUnpause(const class UObject* WorldContextObject);
    bool FindObjectSaveDataByTypeAndParamKey(const class UObject* WorldContextObject, FString Level, EInventoryType Type, FString paramName);
    class AActor* FindClosestActorWithGem(class AActor* Target, TArray<class TSubclassOf<AActor>> ActorClasses, UClass* LootClass);
    FText DurationToText(float Duration);
    void DisableWorldRendering(const class UObject* WorldContextObject, bool Disable);
    void DebugSetArtGalleryUnlocked(const class UObject* WorldContextObject);
    void ConvertColorToHexString(const FColor& inColor, FString& outString);
    bool AwardSkillPoint(const class UObject* WorldContextObject, ESkillPoint pt);
}; // Size: 0x28

class UFalconGraphicsOptionStatics : public UBlueprintFunctionLibrary
{

    void SetVsync(const class UObject* WorldContextObject, bool isOn);
    void SetVignette(const class UObject* WorldContextObject, bool isOn);
    void SetViewDistanceQuality(const class UObject* WorldContextObject, EGraphicsQuality setting);
    void SetTextureQuality(const class UObject* WorldContextObject, EGraphicsQuality setting);
    void SetSSR(const class UObject* WorldContextObject, EGraphicsQuality setting);
    void SetShadowQuality(const class UObject* WorldContextObject, EGraphicsQuality setting);
    void SetResolution(const class UObject* WorldContextObject, int32 setting, bool ApplySettings);
    void SetPreset(const class UObject* WorldContextObject, EGraphicsOptionPreset Preset);
    void SetMotionBlur(const class UObject* WorldContextObject, bool isOn);
    void SetMaxFPS(const class UObject* WorldContextObject, int32 setting);
    void SetFoliageQuality(const class UObject* WorldContextObject, EGraphicsQuality setting);
    void SetDisplayMode(const class UObject* WorldContextObject, TEnumAsByte<EWindowMode::Type> setting, bool ApplySettings);
    void SetDepthOfField(const class UObject* WorldContextObject, EGraphicsQuality setting);
    void SetBloom(const class UObject* WorldContextObject, EGraphicsQuality setting);
    void SetAntiAliasing(const class UObject* WorldContextObject, EGraphicsQuality setting);
    void SetAmbientOcclusion(const class UObject* WorldContextObject, EGraphicsQuality setting);
    void ResetToDefaultSettings(const class UObject* WorldContextObject);
    void PopulateDisplaySettings(const class UObject* WorldContextObject);
    bool GetVsync();
    bool GetVignette();
    EGraphicsQuality GetViewDistanceQuality();
    EGraphicsQuality GetTextureQuality();
    EGraphicsQuality GetSSR();
    EGraphicsQuality GetShadowQuality();
    TArray<FString> GetResolutionList();
    int32 GetResolution();
    EGraphicsOptionPreset GetPreset();
    bool GetMotionBlur();
    TArray<FText> GetMaxFPSList();
    int32 GetMaxFPS();
    EGraphicsQuality GetFoliageQuality();
    TEnumAsByte<EWindowMode::Type> GetDisplayMode();
    EGraphicsQuality GetDepthOfField();
    EGraphicsOptionPreset GetDefaultPreset();
    EGraphicsQuality GetBloom();
    EGraphicsQuality GetAntiAliasing();
    EGraphicsQuality GetAmbientOcclusion();
}; // Size: 0x28

class UFalconKeySequenceComponent : public UActorComponent
{

    void DebugPrintCodes();
    void ClearInput();
    bool AddKeyAndCheckForMatch(const FKey& InKey, FString& sequenceName);
}; // Size: 0x118

class UFalconLayerWidget : public UFalconWidget
{
    float currentViewportScale;                                                       // 0x0210 (size: 0x4)

    void ViewportScaleUpdated();
    void RemoveScreen(UClass* inScreenClass, bool immediate);
    class UUserWidget* FindScreen(UClass* inScreenClass);
    void AddScreen(class UFalconWidget* inScreen, int32 ZOrder);
}; // Size: 0x218

class UFalconLootComponent : public UActorComponent
{
    TArray<class TSubclassOf<APhasmidLevelActor>> CollectibleTypes;                   // 0x00F0 (size: 0x10)

    void SpawnLoot();
    bool IsAllLootCollected();
    int32 getObjectSaveData(FPhasmidObjectSaveDataList& saveData);
    bool DropsLootOfType(UClass* LootClass, bool filterCollected);
}; // Size: 0x100

class UFalconMenuItemWidgetStyle : public USlateWidgetStyleContainerBase
{
    FFalconMenuItemStyle MenuItemStyle;                                               // 0x0030 (size: 0x170)

}; // Size: 0x1A0

class UFalconMenuWidgetStyle : public USlateWidgetStyleContainerBase
{
    FFalconMenuStyle MenuStyle;                                                       // 0x0030 (size: 0x1D0)

}; // Size: 0x200

class UFalconModuleSaveGame : public UFalconSaveGame
{
    FQuestSaveData QuestSaveData;                                                     // 0x0150 (size: 0x70)

}; // Size: 0x1C0

class UFalconMultiLineEditableTextBox : public UMultiLineEditableTextBox
{
    FFalconMultiLineEditableTextBoxOnVScrollBarScrolled OnVScrollBarScrolled;         // 0x0B20 (size: 0x10)

    void ScrollPage(bool inFwd, float& scrollPct);
}; // Size: 0xB30

class UFalconOnline : public UObject
{

    void ShowLoginUI(FShowLoginUIOnLoginUIComplete OnLoginUIComplete);
}; // Size: 0x28

class UFalconRebindableInputSystem : public UActorComponent
{

    void StoreCurrentActionBindings();
    void SetupLoadGlobalKeybindingChanges();
    void SetMouseSensitivity(float NewSensitivity);
    void SetKeyboardPhasmidActionBinding(EPhasmidAction Action, FKey NewKey, EKeybindingEntry KeybindingEntry, bool RemoveKeybindsThatAreTheSame);
    void SetKeyboardBindingForListOfKeybindings(TArray<FPhasmidKeybindData> Bindings, FKey NewKey, EKeybindingEntry KeybindingEntry);
    void SetKeyboardAxisBinding(FName BindingName, FKey NewKey, EKeybindingEntry KeybindingEntry, float Scale, bool SaveBindings);
    void SetKeyboardActionBinding(FName BindingName, FKey NewKey, EKeybindingEntry KeybindingEntry, bool SaveBindings);
    void SetAllBindingsBackToDefault();
    void RevertToStoredActionBindings();
    void RemoveBindingForAction(EPhasmidAction Action, EKeybindingEntry KeybindingEntry);
    void LoadGlobalKeybindingChanges();
    bool IsKeyAlreadyBoundToAction(EPhasmidAction Action, FKey Key);
    bool IsKeyAlreadyBound(FKey Key, TArray<EPhasmidAction> ExcludeActionsFromSearch);
    void InvertAxis(FName AxisName);
    void Initialize();
    TArray<EPhasmidAction> GetNamesOfUnboundedPrimaryActions();
    TArray<FName> GetNamesOfBindingsContainingKey(FKey Key, TArray<FName> ExcludeBindingsFromSearch);
    TArray<EPhasmidAction> GetNamesOfActionsContainingKey(FKey Key, TArray<EPhasmidAction> ExcludeActionsFromSearch);
    TArray<FPhasmidKeyData> GetKeyboardKeysForAction(EPhasmidAction Action);
    TArray<FPhasmidKeyData> GetGamepadKeysForAction(EPhasmidAction Action);
    FText GetDisplayNameForAction(EPhasmidAction Action);
    float GetAxisScale(FName AxisName);
    TArray<FFalconInputData> GetAllInputBindingData();
    void Debug_PrintAllCurrentKeybindings();
    void Debug_PrintAllChangedKeybindingsInSaveData();
}; // Size: 0x110

class UFalconScreenConfigDefault : public UFalconScreenConfigObject
{
    FFalconScreenConfigData configData;                                               // 0x0028 (size: 0x18)

}; // Size: 0x40

class UFalconScreenConfigObject : public UObject
{
}; // Size: 0x28

class UFalconTimeBarWidget : public UFalconWidget
{
    EFalconTimeBarPlacement _placementType;                                           // 0x0210 (size: 0x1)

    void UpdateTimeBar();
    void ShowTimeBar(float inDuration, EFalconTimeBarType inType, EFalconTimeBarPlacement inPlacement);
    void SetTimeScale(float inTimeScale);
    void HideTimeBar();
    EFalconTimeBarPlacement GetPlacementType(int32 inType);
    void Close();
}; // Size: 0x218

class UFalconUITimerLibrary : public UBlueprintFunctionLibrary
{

    void K2_UnpauseFalconUITimer(FTimerHandle Handle);
    FTimerHandle K2_SetFalconUITimer(FK2_SetFalconUITimerDelegate Delegate, float Time, bool bLooping);
    void K2_PauseFalconUITimer(FTimerHandle Handle);
    bool K2_IsFalconUITimerPaused(FTimerHandle Handle);
    bool K2_IsFalconUITimerActive(FTimerHandle Handle);
    float K2_GetFalconUITimeRemaining(FTimerHandle Handle);
    float K2_GetFalconUITimeElapsed(FTimerHandle Handle);
    bool K2_DoesFalconUITimerExist(FTimerHandle Handle);
    void K2_ClearFalconUITimer(FTimerHandle Handle);
    void K2_ClearAndInvalidateFalconUITimer(FTimerHandle& Handle);
}; // Size: 0x28

class UFalconWidget : public UUserWidget
{
    bool ListenForGameInstanceKeyDown;                                                // 0x0208 (size: 0x1)

    void ShowScreen();
    FFalconScreenConfigData QueryScreen(const FFalconScreenConfigData configData);
    void OnMouseButtonUpFromGameInstance(const FKey& MouseKey, bool& Handled);
    void OnMouseButtonDownFromGameInstance(const FKey& MouseKey, bool& Handled);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void HideScreen(bool immediate);
    void ConfigureScreen(const FFalconScreenConfigData& configData);
    void ConfigScreen(const class UFalconScreenConfigObject* configData);
}; // Size: 0x210

class UFanfareComponent : public UActorComponent
{

    void OnStoreSaveData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap);
    void OnChangeSaveGame(class UFalconSaveGame* incomingSaveGame);
}; // Size: 0xF0

class UFireWall : public USkillNode
{
    FBlackboardKeySelector TargetPoint;                                               // 0x0078 (size: 0x28)

}; // Size: 0xA0

class UFireWallTask : public UAITask
{
    class AActor* m_fx;                                                               // 0x0070 (size: 0x8)

}; // Size: 0x98

class UFlightLevelDataComponent : public UPhasmidObjectSaveComponent
{
    TArray<FFlightObjective> objectiveConfig;                                         // 0x0100 (size: 0x10)

    void SetTargetCollected(const EFlightLevelTargetType targetType);
    void SetBestTime(float bestTime);
    void SetBestRaceTime(float bestRaceTime);
    bool GetTargetCollected(const EFlightLevelTargetType targetType);
    bool GetBestTimeFromSaveData(const FPhasmidObjectSaveDataList& saveData, float& aBestTime);
    float GetBestTime();
    float GetBestRaceTime();
}; // Size: 0x110

class UFlightRaceWidget : public UUserWidget
{

    void Show();
    void SetPlace(int32 place);
    void SetLap(int32 Count, int32 Total);
    void Hide();
    void Close();
}; // Size: 0x208

class UGemFinderAsyncNode : public UBlueprintAsyncActionBase
{
    FGemFinderAsyncNodeSuccess Success;                                               // 0x0028 (size: 0x10)
    FGemFinderAsyncNodeFailed Failed;                                                 // 0x0038 (size: 0x10)

    void UpdateSearch();
    void BuildGraph();
    void BuildGemHeap();
    class UGemFinderAsyncNode* BP_FindClosestActorWithGemAsync(const class UObject* WorldContextObject, class AActor* Target, TArray<class TSubclassOf<AActor>> ActorClasses, UClass* GemClass, int32 MaxDiscoveryCount, int32 MaxCheckCount);
}; // Size: 0x198

class UGemFinderLinkComponent : public UActorComponent
{
    TSoftObjectPtr<AGemFinderRegion> LinkedRegion;                                    // 0x00F0 (size: 0x28)

    class AGemFinderRegion* GetLinkedRegion();
}; // Size: 0x118

class UHealthBarWidget : public USP3_UserWidgetBase
{
    class UTexture2D* CharacterIcon;                                                  // 0x0210 (size: 0x8)
    float CharacterHealth;                                                            // 0x0218 (size: 0x4)

}; // Size: 0x220

class UHighScoreTask : public UQuestTask
{
    class USkateScoreWidget* m_screen;                                                // 0x0028 (size: 0x8)

    void OnClose(FName ignore);
}; // Size: 0x40

class UHudCarriedKeyComponent : public UActorComponent
{
    TMap<class FName, class FKeyColorSetting> ColorSettings;                          // 0x00F0 (size: 0x50)

    void ShowCarriedKey(FName Name, EFalconHudWidgetPosition Position);
}; // Size: 0x140

class UHudCounterComponent : public UActorComponent
{
    float AutoHideDelay;                                                              // 0x00F0 (size: 0x4)

    void ShowCounter(int32 TotalCount, int32 StartCount, FName CounterName, EFalconHudWidgetPosition Position);
    void SetCounter(int32 Count);
    void HideCounter();
}; // Size: 0xF8

class UHudDownloadMessageComponent : public UActorComponent
{

    void ShowDownloadMessage();
    void HideDownloadMessage();
}; // Size: 0xF0

class UHudGemCountWidget : public UFalconWidget
{
    EHudGemCountDisplayState uiState;                                                 // 0x0210 (size: 0x1)
    bool countUpdated;                                                                // 0x0211 (size: 0x1)
    float countUpdateSecs;                                                            // 0x0214 (size: 0x4)
    float countUpdateWait;                                                            // 0x0218 (size: 0x4)
    class UFalconSaveGame* SaveGame;                                                  // 0x0220 (size: 0x8)

    void UpdateDisplay();
    void UnRegisterSave();
    void RegisterSave();
    void OnStoreSaveData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap);
    void OnChangeSaveGame(class UFalconSaveGame* incomingSaveGame);
}; // Size: 0x228

class UHudHealthCountWidget : public UFalconWidget
{
    TArray<FHudHealthCountEvent> pendingUpdateEvents;                                 // 0x0210 (size: 0x10)
    FHudHealthCountEvent currentUpdateEvent;                                          // 0x0220 (size: 0x8)
    EHudHealthCountState uiState;                                                     // 0x0228 (size: 0x1)
    int32 lifeCount;                                                                  // 0x022C (size: 0x4)
    int32 partialLifeCount;                                                           // 0x0230 (size: 0x4)

    void HealthCountUpdated();
}; // Size: 0x238

class UHudInventoryCountWidget : public UFalconWidget
{
    TArray<EInventoryType> inventoryCountTypes;                                       // 0x0210 (size: 0x10)
    class UFalconSaveGame* SaveGame;                                                  // 0x0220 (size: 0x8)

    void UnRegisterSave();
    void RegisterSave();
    void OnStoreSaveData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap);
    void OnChangeSaveGame(class UFalconSaveGame* incomingSaveGame);
    void InventoryCountUpdated();
}; // Size: 0x228

class UHudTimerBarComponent : public UActorComponent
{

    void ShowTimerBar(float Duration, TEnumAsByte<ETimerBarType> Timer);
    void Hide();
}; // Size: 0xF0

class UHudTimerComponent : public UActorComponent
{

    void ShowTimer();
    void SetRemainingSeconds(float Seconds);
    void HideTimer();
}; // Size: 0xF0

class UKnockback : public UAbilityTask
{

    void OnLanded(const FHitResult& Hit);
}; // Size: 0x90

class UKnockbackAbility : public UGameplayAbility
{
}; // Size: 0x600

class UL311_icy_peak : public UScriptedWorld
{
}; // Size: 0x50

class UL312_enchanted_towers : public UScriptedWorld
{
}; // Size: 0x50

class UL313_spooky_swamp : public UScriptedWorld
{
}; // Size: 0x50

class UL313_spooky_swamp_sheila : public UScriptedWorld
{
}; // Size: 0x50

class UL313_spooky_swamp_sheila_start : public UScriptedWorld
{
}; // Size: 0x50

class UL313_spooky_swamp_sleepy : public UScriptedWorld
{
}; // Size: 0x50

class UL314_bamboo_terrace : public UScriptedWorld
{
}; // Size: 0x50

class UL314_bamboo_terrace_bentley_room : public UScriptedWorld
{
}; // Size: 0x50

class UL314_bamboo_terrace_railshooter : public UScriptedWorld
{
}; // Size: 0x50

class UL314_bamboo_terrace_yeti : public UScriptedWorld
{
}; // Size: 0x50

class UL316_country_speedway : public UScriptedWorld
{
}; // Size: 0x50

class UL318_spider_town : public UScriptedWorld
{
}; // Size: 0x50

class UL31X_hunters_tussels : public UScriptedWorld
{
}; // Size: 0x50

class UL327_starfish_reef : public UScriptedWorld
{
}; // Size: 0x50

class UL336_bugbot_factory : public UScriptedWorld
{
}; // Size: 0x50

class ULS301_SunriseSpringHome : public UScriptedWorld
{
}; // Size: 0x50

class ULS302_SunnyVilla : public UScriptedWorld
{
}; // Size: 0x50

class ULS302_SunnyVilla_Rink : public UScriptedWorld
{
}; // Size: 0x50

class ULS302_SunnyVilla_Tower : public UScriptedWorld
{
}; // Size: 0x50

class ULS302_SunnyVilla_TowerEntrance : public UScriptedWorld
{
}; // Size: 0x50

class ULS303_CloudSpires : public UScriptedWorld
{
}; // Size: 0x50

class ULS303_CloudSpires_BellTowers : public UScriptedWorld
{
}; // Size: 0x50

class ULS303_CloudSpires_SunSeeds : public UScriptedWorld
{
}; // Size: 0x50

class ULS304_MoltenCrater : public UScriptedWorld
{
}; // Size: 0x50

class ULS304_MoltenCrater_SgtByrd : public UScriptedWorld
{
}; // Size: 0x50

class ULS304_MoltenCrater_ThiefRace : public UScriptedWorld
{
}; // Size: 0x50

class ULS305_SeashellShore : public UScriptedWorld
{
}; // Size: 0x50

class ULS305_SeashellShore_Boat : public UScriptedWorld
{
}; // Size: 0x50

class ULS305_SeashellShore_Boat2 : public UScriptedWorld
{
}; // Size: 0x50

class ULS305_SeashellShore_Sheila : public UScriptedWorld
{
}; // Size: 0x50

class ULS305_SeashellShore_Sheila_Start : public UScriptedWorld
{
}; // Size: 0x50

class ULS305_SeashellShore_Tunnel : public UScriptedWorld
{
}; // Size: 0x50

class ULS306_SheilasAlp_Exit : public UScriptedWorld
{
}; // Size: 0x50

class ULS306_SheilasAlp_Main : public UScriptedWorld
{
}; // Size: 0x50

class ULS306_SheilasAlp_Start : public UScriptedWorld
{
}; // Size: 0x50

class ULS306_SheilasAlp_Test : public ULS306_SheilasAlp_Main
{
}; // Size: 0x50

class ULS307_MushroomSpeedway : public UScriptedWorld
{
}; // Size: 0x50

class ULS308_BuzzsDungeon : public UBossWorld
{
}; // Size: 0x50

class ULS309_CrawdadFarm_Main : public UScriptedWorld
{
}; // Size: 0x50

class ULS309_CrawdadFarm_Tutorial : public UScriptedWorld
{
}; // Size: 0x50

class ULS310_MiddayGardenHome : public UScriptedWorld
{
}; // Size: 0x50

class ULS311_IcyPeak_IceSkate : public UScriptedWorld
{
}; // Size: 0x50

class ULS311_IcyPeak_ThiefRace : public UScriptedWorld
{
}; // Size: 0x50

class ULS312_EnchantedTowers_Farley : public UScriptedWorld
{
}; // Size: 0x50

class ULS312_EnchantedTowers_Hunter : public UScriptedWorld
{
}; // Size: 0x50

class ULS312_EnchantedTowers_SgtByrd_Start : public UScriptedWorld
{
}; // Size: 0x50

class ULS313CheckFade : public UActorComponent
{

    bool IsFading();
}; // Size: 0xF0

class ULS315_SgtByrdsBase_Exit : public UScriptedWorld
{
}; // Size: 0x50

class ULS315_SgtByrdsBase_Main : public UScriptedWorld
{
}; // Size: 0x50

class ULS315_SgtByrdsBase_Start : public UScriptedWorld
{
}; // Size: 0x50

class ULS317_SpikesArena : public UBossWorld
{
}; // Size: 0x50

class ULS319_EveningLakeHome : public UScriptedWorld
{
}; // Size: 0x50

class ULS320_LostFleet : public UScriptedWorld
{
}; // Size: 0x50

class ULS320_LostFleet_Skateboard_Race : public UScriptedWorld
{
}; // Size: 0x50

class ULS320_LostFleet_Submarine : public UScriptedWorld
{
}; // Size: 0x50

class ULS321_FrozenAltars : public UScriptedWorld
{
}; // Size: 0x50

class ULS321_FrozenAltars_Boxing : public UScriptedWorld
{
}; // Size: 0x50

class ULS321_FrozenAltars_BoxingEntrance : public UScriptedWorld
{
}; // Size: 0x50

class ULS321_FrozenAltars_CatHockey : public UScriptedWorld
{
}; // Size: 0x50

class ULS322_FireworksFactory : public UScriptedWorld
{
}; // Size: 0x50

class ULS322_FireworksFactory_Agent9 : public UScriptedWorld
{
}; // Size: 0x50

class ULS322_FireworksFactory_Agent9Start : public UScriptedWorld
{
}; // Size: 0x50

class ULS322_FireworksFactory_Challenge_Loop : public UScriptedWorld
{
}; // Size: 0x50

class ULS322_FireworksFactory_Dragon_Boss : public UScriptedWorld
{
}; // Size: 0x50

class ULS323_CharmedRidge : public UScriptedWorld
{
}; // Size: 0x50

class ULS323_CharmedRidge_JackTower : public UScriptedWorld
{
}; // Size: 0x50

class ULS323_CharmedRidge_SgtByrd : public UScriptedWorld
{
}; // Size: 0x50

class ULS323_CharmedRidge_SgtByrdCloset : public UScriptedWorld
{
}; // Size: 0x50

class ULS324_BentleysOutpost : public UScriptedWorld
{
}; // Size: 0x50

class ULS324_BentleysOutpost_Exit : public UScriptedWorld
{
}; // Size: 0x50

class ULS324_BentleysOutpost_Start : public UScriptedWorld
{
}; // Size: 0x50

class ULS325_HoneySpeedway : public UScriptedWorld
{
}; // Size: 0x50

class ULS326_ScorchsPit : public UBossWorld
{
}; // Size: 0x50

class ULS328_MidnightMountainHome : public UScriptedWorld
{
}; // Size: 0x50

class ULS329_CrystalIslands : public UScriptedWorld
{
}; // Size: 0x50

class ULS329_CrystalIslands_SlipNSlide : public UScriptedWorld
{
}; // Size: 0x50

class ULS329_CrystalIslands_WhackAMole : public UScriptedWorld
{
}; // Size: 0x50

class ULS329_CrystalIslands_WhackAMoleCloset : public UScriptedWorld
{
}; // Size: 0x50

class ULS330_DesertRuins : public UScriptedWorld
{
}; // Size: 0x50

class ULS330_DesertRuins_MantaRay : public UScriptedWorld
{
}; // Size: 0x50

class ULS330_DesertRuins_SheilaRetro_Main : public UScriptedWorld
{
}; // Size: 0x50

class ULS330_DesertRuins_SheilaRetro_Start : public UScriptedWorld
{
}; // Size: 0x50

class ULS331_HauntedTomb : public UScriptedWorld
{
}; // Size: 0x50

class ULS331_HauntedTomb_Agent9Trials : public UScriptedWorld
{
}; // Size: 0x50

class ULS331_HauntedTomb_Agent9Trials_Start : public UScriptedWorld
{
}; // Size: 0x50

class ULS331_HauntedTomb_DemolitionDerby : public UScriptedWorld
{
}; // Size: 0x50

class ULS332_DinoMines : public UScriptedWorld
{
}; // Size: 0x50

class ULS332_DinoMines_Agent9_Main : public UScriptedWorld
{
}; // Size: 0x50

class ULS332_DinoMines_Agent9_Start : public UScriptedWorld
{
}; // Size: 0x50

class ULS332_DinoMines_Holiday_Main : public UScriptedWorld
{
}; // Size: 0x50

class ULS333_Agent9sLab : public UScriptedWorld
{
}; // Size: 0x50

class ULS333_Agent9sLab_Exit : public UScriptedWorld
{
}; // Size: 0x50

class ULS333_Agent9sLab_Start : public UScriptedWorld
{
}; // Size: 0x50

class ULS334_HarborSpeedway : public UScriptedWorld
{
}; // Size: 0x50

class ULS335_SorceressLair : public UBossWorld
{
}; // Size: 0x50

class ULS337_SuperBonusRound : public UScriptedWorld
{
}; // Size: 0x50

class ULS337_SuperBonusRound_Boss : public UScriptedWorld
{
}; // Size: 0x50

class ULS337_SuperBonusRound_Skate : public UScriptedWorld
{
}; // Size: 0x50

class ULS337_SuperBonusRound_Subs : public UScriptedWorld
{
}; // Size: 0x50

class ULocomotionAnimInstance : public UAnimInstance
{
    FLocomotionTuning LocTuning;                                                      // 0x03B8 (size: 0x60)
    TArray<FLocomotionSet> LocSets;                                                   // 0x0418 (size: 0x10)
    FLocomotionInput LocInput;                                                        // 0x0430 (size: 0x60)
    FLocomotionOutput LocOutput;                                                      // 0x0490 (size: 0x60)

    bool GetLocEnabled();
    class UAnimationAsset* GetLocAnim(int32 iSet, int32 iDir, int32 iGear, bool& Looping, float& tBlendIn, float& tBlendOut);
}; // Size: 0x610

class UMiddayGarden : public UScriptedRealm
{
}; // Size: 0x30

class UMidnightMountain : public UScriptedRealm
{
}; // Size: 0x30

class UMinigameCountWidget : public UUserWidget
{

    void BP_UpdateCount(int32 NewCount);
    void BP_SetCountTotal(int32 newTotal);
}; // Size: 0x208

class UMissionComponent : public UActorComponent
{

    void StopChallenge();
    void StartChallenge();
}; // Size: 0xF0

class UMontageTask : public UQuestTask
{
    TArray<FMontageDesc> m_montages;                                                  // 0x0030 (size: 0x10)

}; // Size: 0x58

class UMoveAtSpeed : public UBTTask_MoveTo
{
    FBlackboardKeySelector MoveSpeed;                                                 // 0x00B0 (size: 0x28)

}; // Size: 0xD8

class UMovieWidget : public UUserWidget
{
    class UCanvasPanel* Canvas;                                                       // 0x0208 (size: 0x8)
    class UImage* Image;                                                              // 0x0210 (size: 0x8)
    class UMaterial* Material;                                                        // 0x0218 (size: 0x8)

}; // Size: 0x220

class UPPVScaleIntensityComponent : public UScaleIntensityComponent
{
}; // Size: 0xF8

class UPlayerInRange : public UBTDecorator
{
    float AcceptableDistance;                                                         // 0x0068 (size: 0x4)

}; // Size: 0x70

class UPlayerRespawnComponent : public UArrowComponent
{
}; // Size: 0x690

class UPlayerSwitcher : public UActorComponent
{
    TSubclassOf<class ACharacter> SwapToCharacter;                                    // 0x00F0 (size: 0x8)
    bool ToggleMode;                                                                  // 0x00F8 (size: 0x1)
    TSubclassOf<class ACharacter> SpawnCharacterClass;                                // 0x0100 (size: 0x8)

    void Trigger(const FTransform& Location);
    void BeginPlay();
}; // Size: 0x108

class UPlayerTeleportTask : public USequenceTask
{
}; // Size: 0x120

class UPortalBlockerComponent : public UStaticMeshComponent
{
    class AStaticMeshActor* m_geo;                                                    // 0x0700 (size: 0x8)

}; // Size: 0x710

class UPortalItemsComponentBase : public USceneComponent
{
    class APortal* Owner;                                                             // 0x02A0 (size: 0x8)
    FDataTableRowHandle PartnerPortalRow;                                             // 0x02A8 (size: 0x10)

    void BeginPlay();
}; // Size: 0x2C0

class UPortalRequirementsComponent : public USceneComponent
{
    class AActor* m_eggs;                                                             // 0x02A0 (size: 0x8)
    class AActor* m_gems;                                                             // 0x02A8 (size: 0x8)

    void CreateGems(int32 NumGems, int32 NumDigits, class AActor*& OutGemsDisplay);
    void CreateEggs(int32 NumEggs, int32 NumDigits, class AActor*& OutEggDisplay);
}; // Size: 0x2B0

class UQuestActionsComponent : public UActorComponent
{
    class UQuestTask* m_pendingTask;                                                  // 0x0110 (size: 0x8)

    bool IsBound();
    void EndAction();
}; // Size: 0x1C8

class UQuestChainTask : public UQuestTask
{
    class UQuestTask* m_other;                                                        // 0x0080 (size: 0x8)

}; // Size: 0x90

class UQuestChallengeTask : public UQuestTask
{

    float RemainingSeconds();
    bool IsTicking();
    int32 GetCurrentScore();
    void EndTheTimer();
    float ElapsedSeconds();
}; // Size: 0x48

class UQuestCustomAdjust : public UActorComponent
{
    TArray<FActionsList> Adjusts;                                                     // 0x00F0 (size: 0x10)

    void SetIndex(int32 adjustIndex, int32 actionIndex);
}; // Size: 0x100

class UQuestCutsceneTask : public UQuestTask
{

    void RxSequenceFinished();
}; // Size: 0x38

class UQuestDialogTask : public UQuestTask
{
    class AskTfbToChangeTheirInterface* m_cb;                                         // 0x0028 (size: 0x8)
    class USpyroReadjust* m_sreadjust;                                                // 0x0030 (size: 0x8)
    class UCameraReadjust* m_creadjust;                                               // 0x0038 (size: 0x8)
    FSoftObjectPath AudioEventPath;                                                   // 0x0040 (size: 0x18)
    class UAkAudioEvent* AudioEvent;                                                  // 0x0058 (size: 0x8)
    FSoftObjectPath VOAnimPath;                                                       // 0x0060 (size: 0x18)
    class UAnimSequenceBase* VOAnimPtr;                                               // 0x0078 (size: 0x8)
    TArray<class AChallengeController*> m_pausedTimers;                               // 0x0080 (size: 0x10)

}; // Size: 0x150

class UQuestEggTask : public UQuestTask
{
    class ASP3_DragonEgg* egg;                                                        // 0x0038 (size: 0x8)
    class AQuestLevelActor* Qla;                                                      // 0x0040 (size: 0x8)

}; // Size: 0x48

class UQuestFadeTask : public UQuestTask
{
    class APlayerCameraManager* m_cam;                                                // 0x0028 (size: 0x8)

}; // Size: 0x30

class UQuestFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool SpawnSaveFairyDynamic(class AQuestController* ctrl, const FName& Checkpoint);
    bool SaveCheckpoint(class AQuestController* ctrl, const FName& Checkpoint);
    bool MoveToPoint(class AQuestController* ctrl, const FName& Name);
    bool GreetPlayer(class AQuestController* ctrl, bool autoGreet, TSubclassOf<class APressToTalkWidget> PressToTalk);
}; // Size: 0x28

class UQuestJumpTask : public UQuestMoveTask
{

    void OnStuckSpline();
    void OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
}; // Size: 0x48

class UQuestLatentTask : public UQuestTask
{
}; // Size: 0x30

class UQuestLevelManager : public UActorComponent
{
    class AActor* m_forceCheckpoint;                                                  // 0x0150 (size: 0x8)
    class UPlayerTeleportTask* m_customTeleport;                                      // 0x01A8 (size: 0x8)

    void OnUndeservedEggsChange(int32 extraEggs);
    void OnStoreSaveData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap);
    void OnPlayerReady();
    void OnPlayerDied(class AActor* Actor, const FGameplayEventData Payload);
    void OnGameStateChanged(EFalconGameState PrevState, EFalconGameState NextState);
    class AQuestLevelActor* GetQuestLevelByName(FString Level);
    class AQuestLevelActor* GetActiveQuestLevel();
}; // Size: 0x1B0

class UQuestMoveTask : public UQuestTask
{
    class AQuestStrikePoint* m_strike;                                                // 0x0028 (size: 0x8)

    class AQuestStrikePoint* StrikePoint();
    void OnActorHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    class APawn* Mover();
    void DelayArrival();
    void Arrived();
}; // Size: 0x40

class UQuestMovieTask : public UQuestTask
{
}; // Size: 0x28

class UQuestNavTask : public UQuestMoveTask
{
}; // Size: 0xD0

class UQuestOverlapTask : public UQuestTask
{
    class AActor* m_overlapSource;                                                    // 0x0028 (size: 0x8)

    void Waited(class AActor* OverlappedActor, class AActor* OtherActor);
}; // Size: 0x30

class UQuestSplineCompTask : public UQuestTask
{
}; // Size: 0x38

class UQuestSplineTask : public UQuestMoveTask
{
}; // Size: 0x50

class UQuestTask : public UObject
{
}; // Size: 0x28

class UQuestWalkTask : public UQuestMoveTask
{
}; // Size: 0x68

class UQuestWheelTask : public UQuestMoveTask
{
}; // Size: 0x48

class UQuestZTestTask : public UQuestTask
{
}; // Size: 0x30

class UQuestionScreenConfig : public UFalconScreenConfigObject
{
    FQuestionConfigData configData;                                                   // 0x0028 (size: 0x88)

}; // Size: 0xB0

class US3_BlutoNotify : public UAnimNotifyState
{
}; // Size: 0x40

class USP3_AirCarryUICounterComponent : public USceneComponent
{
    TSubclassOf<class UHudCounterComponent> m_carryCounterClass;                      // 0x02A0 (size: 0x8)
    FName m_carryCounterIconName;                                                     // 0x02A8 (size: 0x8)
    EFalconHudWidgetPosition m_hudPosition;                                           // 0x02B0 (size: 0x1)
    class UHudCounterComponent* m_carryCounter;                                       // 0x02B8 (size: 0x8)

    void OnCarryCountChanged(int32 Count);
}; // Size: 0x2D0

class USP3_AnimInstance : public ULocomotionAnimInstance
{
    bool AllowStrafe;                                                                 // 0x0610 (size: 0x1)
    int32 AnimSetIndex;                                                               // 0x0614 (size: 0x4)
    float VOStartPos;                                                                 // 0x0618 (size: 0x4)
    FName QuestState;                                                                 // 0x0620 (size: 0x8)
    FName BaseState;                                                                  // 0x0628 (size: 0x8)
    FVector4 BaseInput;                                                               // 0x0630 (size: 0x10)
    FName BaseSubState;                                                               // 0x0640 (size: 0x8)
    float TailAlpha;                                                                  // 0x0648 (size: 0x4)
    FName UpperState;                                                                 // 0x0650 (size: 0x8)
    FVector4 UpperInput;                                                              // 0x0660 (size: 0x10)
    float UpperAlpha;                                                                 // 0x0670 (size: 0x4)
    FName UpperSubState;                                                              // 0x0678 (size: 0x8)
    FName FaceState;                                                                  // 0x0680 (size: 0x8)
    FVector4 FaceInput;                                                               // 0x0690 (size: 0x10)
    float FaceAlpha;                                                                  // 0x06A0 (size: 0x4)
    FName FaceSubState;                                                               // 0x06A8 (size: 0x8)
    class UAnimSequenceBase* VOAnim;                                                  // 0x06B0 (size: 0x8)

}; // Size: 0x6C0

class USP3_BPUtils : public UBlueprintFunctionLibrary
{

    float GetDistanceAlongSplineForWorldLocation(const class USplineComponent* SplineComponent, const FVector& Location);
    void BroadcastSignal(class AActor* SenderActor, FGameplayTag TargetActorsTag, float BroadcastRadius, FGameplayTagContainer Signals, TSubclassOf<class AActor> FilterClass);
}; // Size: 0x28

class USP3_BossCharacterComponent : public USP3_CharacterComponent
{

    FName GetAnimState(FName Layer, FVector4& Input, float& Alpha, FName& SubState);
}; // Size: 0x1070

class USP3_BoxerComponent : public USP3_ControllableComponent
{
    FSP3_BoxerAI m_ai;                                                                // 0x01A8 (size: 0x10)
    FSP3_BoxerMovement m_movement;                                                    // 0x01B8 (size: 0x10)
    FSP3_BoxerDamage m_damage;                                                        // 0x01C8 (size: 0x10)
    TArray<FSP3_BoxerAttack> m_attack;                                                // 0x01D8 (size: 0x10)
    class UAnimMontage* m_animBlockHigh;                                              // 0x01E8 (size: 0x8)
    class UAnimMontage* m_animTaunt;                                                  // 0x01F0 (size: 0x8)
    class UAnimMontage* m_animCelebrate;                                              // 0x01F8 (size: 0x8)
    float m_tQueue;                                                                   // 0x0200 (size: 0x4)
    bool m_blockInterrupt;                                                            // 0x0204 (size: 0x1)
    bool m_dbgDraw;                                                                   // 0x0205 (size: 0x1)
    FSP3_BoxerComponentOnVFXEvent OnVFXEvent;                                         // 0x0208 (size: 0x10)
    FSP3_BoxerComponentOnDeathStart OnDeathStart;                                     // 0x0218 (size: 0x10)
    FSP3_BoxerComponentOnDeathEnd OnDeathEnd;                                         // 0x0228 (size: 0x10)

    void RxTakeAnyDamage(class AActor* Target, float dmgAmount, const class UDamageType* dmgType, class AController* Instigator, class AActor* causer);
    void RxOverlapEnd(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RxOverlapBegin(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    void RxActorHit(class AActor* Self, class AActor* Other, FVector N, const FHitResult& Hit);
}; // Size: 0x430

class USP3_BoxerDmgType : public UDamageType
{
    FName m_name;                                                                     // 0x0040 (size: 0x8)

}; // Size: 0x48

class USP3_CarryHandleComponent : public USceneComponent
{
    float m_hilightTime;                                                              // 0x02A0 (size: 0x4)
    float m_releaseTime;                                                              // 0x02A4 (size: 0x4)
    FVector2D m_rotInterp;                                                            // 0x02A8 (size: 0x8)
    FVector2D m_posInterp;                                                            // 0x02B0 (size: 0x8)
    FComponentReference m_base;                                                       // 0x02B8 (size: 0x18)
    FVector m_colSize;                                                                // 0x02D0 (size: 0xC)
    TArray<class TSubclassOf<AActor>> m_proj;                                         // 0x02E0 (size: 0x10)
    FComponentReference m_launcher;                                                   // 0x02F0 (size: 0x18)
    FVector2D m_inheritVel;                                                           // 0x0308 (size: 0x8)
    FSP3_CarryHandleComponentOnVFXSetState OnVFXSetState;                             // 0x0310 (size: 0x10)
    FSP3_CarryHandleComponentOnProjCountChanged OnProjCountChanged;                   // 0x0320 (size: 0x10)

}; // Size: 0x380

class USP3_CarrySocketComponent : public USceneComponent
{
    TArray<TSoftClassPtr<AActor>> m_acceptClasses;                                    // 0x02A0 (size: 0x10)
    float m_hilightTime;                                                              // 0x02B0 (size: 0x4)
    FSP3_CarrySocketComponentOnVFXSetState OnVFXSetState;                             // 0x02B8 (size: 0x10)
    FSP3_CarrySocketComponentOnAttach OnAttach;                                       // 0x02C8 (size: 0x10)

}; // Size: 0x2E0

class USP3_CharacterComponent : public USP3_ControllableComponent
{
    bool m_isNPC;                                                                     // 0x01A0 (size: 0x1)
    bool m_isFPS;                                                                     // 0x01A1 (size: 0x1)
    bool m_autoStrafe;                                                                // 0x01A2 (size: 0x1)
    FSP3CharAbilitySet m_abilSet;                                                     // 0x01A8 (size: 0x10)
    FVector m_interpRot;                                                              // 0x01B8 (size: 0xC)
    float m_walkSpeed;                                                                // 0x01C4 (size: 0x4)
    float m_walkAngle;                                                                // 0x01C8 (size: 0x4)
    float m_gravityScalar;                                                            // 0x01CC (size: 0x4)
    float m_fallFriction;                                                             // 0x01D0 (size: 0x4)
    float m_landTime;                                                                 // 0x01D4 (size: 0x4)
    float m_damageTime;                                                               // 0x01D8 (size: 0x4)
    float m_idleTime;                                                                 // 0x01DC (size: 0x4)
    FSP3CharAbilParamsJump m_jump;                                                    // 0x01E0 (size: 0x18)
    FSP3CharAbilParamsMelee m_melee;                                                  // 0x01F8 (size: 0x20)
    FSP3CharAbilParamsGroundPound m_groundPound;                                      // 0x0218 (size: 0x78)
    FSP3CharAbilParamsFreeLook m_freeLook;                                            // 0x0290 (size: 0x70)
    FSP3CharAbilParamsGlide m_glide;                                                  // 0x0300 (size: 0x2C)
    FSP3CharAbilParamsDive m_dive;                                                    // 0x032C (size: 0x10)
    FSP3CharAbilParamsCharge m_charge;                                                // 0x033C (size: 0x18)
    FSP3CharAbilParamsSwim m_swim;                                                    // 0x0358 (size: 0x78)
    FSP3CharAbilParamsDoubleJump m_doubleJump;                                        // 0x03D0 (size: 0xC)
    FSP3CharAbilParamsBounceJump m_bounceJump;                                        // 0x03DC (size: 0x10)
    FSP3CharAbilParamsGun m_gun;                                                      // 0x03F0 (size: 0x38)
    FSP3CharAbilParamsBomb m_bomb;                                                    // 0x0430 (size: 0xA0)
    FSP3CharAbilParamsRocket m_rocket;                                                // 0x04D0 (size: 0x68)
    FSP3CharAbilParamsAirCarry m_airCarry;                                            // 0x0538 (size: 0x18)
    FSP3CharAbilParamsFlappyJump m_flappyJump;                                        // 0x0550 (size: 0xD0)
    FSP3CharAbilParamsVehicle m_vehicle;                                              // 0x0620 (size: 0x34)
    FSP3CharAbilParamsPush m_push;                                                    // 0x0658 (size: 0x18)
    FSP3CharParamsAnim m_anim;                                                        // 0x0670 (size: 0x20)
    FSP3CharParamsCamera m_fixedCamera;                                               // 0x0690 (size: 0x20)
    FSP3_CharacterComponentOnL2CenterCam OnL2CenterCam;                               // 0x06B0 (size: 0x10)
    FSP3_CharacterComponentOnFreeLook OnFreeLook;                                     // 0x06C0 (size: 0x10)
    FSP3_CharacterComponentOnGemFind OnGemFind;                                       // 0x06D0 (size: 0x10)
    FSP3_CharacterComponentOnVFXEvent OnVFXEvent;                                     // 0x06E0 (size: 0x10)
    FSP3_CharacterComponentOnBombThrowStartedEvent OnBombThrowStartedEvent;           // 0x06F0 (size: 0x10)
    FSP3_CharacterComponentOnBombThrowEndedEvent OnBombThrowEndedEvent;               // 0x0700 (size: 0x10)
    class UUserWidget* m_uiReticle;                                                   // 0x0FC8 (size: 0x8)

    void UnblockAbility(ESP3CharAbility iAbil);
    void StopVOEvent();
    void SetAbilityBlocked(ESP3CharAbility iAbil, bool Blocked);
    void RxTakeDamage(class AActor* sender, const FGameplayEventData Payload);
    void RxOverlapEnd(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RxOverlapBegin(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    void RxDeath(class AActor* sender, const FGameplayEventData Payload);
    void RxActorHit(class AActor* Self, class AActor* Other, FVector N, const FHitResult& Hit);
    void PlayVOEvent(FName evtName, class UAnimSequenceBase* Anim, float Duration, bool fullBody);
    class UAnimSequenceBase* GetVOAnim();
    bool GetAbilityBlocked(ESP3CharAbility iAbil);
    bool GetAbilActive(ESP3CharAbility iAbil);
    void BlockAbility(ESP3CharAbility iAbil);
}; // Size: 0x1060

class USP3_CharacterMovementComponent : public UCharacterMovementComponent
{
    FSP3_CMSkateTuning m_skateTuning;                                                 // 0x07C0 (size: 0x6C)

}; // Size: 0x870

class USP3_ControllableComponent : public UActorComponent
{
    TSubclassOf<class UHudCounterComponent> m_healthUIClass;                          // 0x00F8 (size: 0x8)
    FName m_healthUIIcon;                                                             // 0x0100 (size: 0x8)
    EFalconHudWidgetPosition m_healthUIPos;                                           // 0x0108 (size: 0x1)

}; // Size: 0x1A0

class USP3_FixedCameraComponent : public UFollowCameraComponent
{
    FRotator m_rotation;                                                              // 0x0CB0 (size: 0xC)
    FVector m_offset;                                                                 // 0x0CBC (size: 0xC)

}; // Size: 0xCD0

class USP3_FlyingComponent : public USP3_ControllableComponent
{
    FVector m_turnParams;                                                             // 0x01A0 (size: 0xC)
    FVector4 m_pitchParams;                                                           // 0x01B0 (size: 0x10)
    FVector4 m_thrustParams;                                                          // 0x01C0 (size: 0x10)
    FVector m_friction;                                                               // 0x01D0 (size: 0xC)
    FVector2D m_tilt;                                                                 // 0x01DC (size: 0x8)
    FVector2D m_heightRange;                                                          // 0x01E4 (size: 0x8)

}; // Size: 0x250

class USP3_HomingTargetComponent : public USceneComponent
{
    float Priority;                                                                   // 0x02A0 (size: 0x4)

    int32 FindTargets(const class AActor* sender, const FTransform& xfmWS, float distMax, float angMax, float angWeight, int32 nMax, TArray<class USP3_HomingTargetComponent*>& Targets, bool checkLOS, bool dbgDraw);
    class USP3_HomingTargetComponent* FindTarget(const class AActor* sender, const FTransform& xfmWS, float distMax, float angMax, float angWeight, bool checkLOS, bool dbgDraw);
}; // Size: 0x2B0

class USP3_PathFollowingComponent : public UPathFollowingComponent
{
}; // Size: 0x3B0

class USP3_PhysicalMaterial : public UPhysicalMaterial
{
}; // Size: 0x80

class USP3_ProjLauncherComponent : public USceneComponent
{
    TSubclassOf<class AActor> HoldClass;                                              // 0x02A0 (size: 0x8)
    TSubclassOf<class AActor> ProjClass;                                              // 0x02A8 (size: 0x8)
    TSubclassOf<class UUserWidget> ReticleClass;                                      // 0x02B0 (size: 0x8)
    TSubclassOf<class UHudCounterComponent> UIAmmoClass;                              // 0x02B8 (size: 0x8)
    FName UIIconName;                                                                 // 0x02C0 (size: 0x8)
    TArray<FComponentReference> Barrels;                                              // 0x02C8 (size: 0x10)
    FVector DelayTimes;                                                               // 0x02D8 (size: 0xC)
    FVector2D AmmoCounts;                                                             // 0x02E4 (size: 0x8)
    FComponentReference TargetingComp;                                                // 0x02F0 (size: 0x18)
    FVector TargetingParams;                                                          // 0x0308 (size: 0xC)
    FVector2D InheritVel;                                                             // 0x0314 (size: 0x8)
    bool Automatic;                                                                   // 0x031C (size: 0x1)
    bool AutoAim;                                                                     // 0x031D (size: 0x1)
    FSP3_ProjLauncherComponentOnVFXSetState OnVFXSetState;                            // 0x0320 (size: 0x10)
    FSP3_ProjLauncherComponentOnSpawnProj OnSpawnProj;                                // 0x0330 (size: 0x10)

    void SetTarget(class USceneComponent* Target);
    void SetInput(bool Fire);
    class USceneComponent* GetTarget();
    FName GetStateName();
    int32 GetNumAmmo();
    int32 GetMaxAmmo();
    FTransform GetBarrelTransform();
    class USceneComponent* GetBarrel();
}; // Size: 0x400

class USP3_ProjectileMovementComponent : public UProjectileMovementComponent
{
    ESP3_ProjType Type;                                                               // 0x01A0 (size: 0x1)
    FRotator RotOffset;                                                               // 0x01A4 (size: 0xC)
    FRuntimeFloatCurve Thrust;                                                        // 0x01B0 (size: 0x78)
    FRuntimeFloatCurve Gravity;                                                       // 0x0228 (size: 0x78)
    FRuntimeFloatCurve SideFriction;                                                  // 0x02A0 (size: 0x78)
    FRuntimeFloatCurve RotInterp;                                                     // 0x0318 (size: 0x78)
    FRuntimeFloatCurve Homing;                                                        // 0x0390 (size: 0x78)
    FRuntimeFloatCurve Spin;                                                          // 0x0408 (size: 0x78)
    FVector4 Targeting;                                                               // 0x0480 (size: 0x10)
    float LeadMax;                                                                    // 0x0490 (size: 0x4)
    FTransform LaunchXfm;                                                             // 0x04A0 (size: 0x30)
    FVector AngVelocity;                                                              // 0x04D0 (size: 0xC)
    bool InvertSpin;                                                                  // 0x04DC (size: 0x1)
    bool DebugDraw;                                                                   // 0x04DD (size: 0x1)

}; // Size: 0x4F0

class USP3_RailShooterComponent : public USP3_ControllableComponent
{
    float m_moveSpeed;                                                                // 0x01A0 (size: 0x4)
    FVector m_aimInterp;                                                              // 0x01A4 (size: 0xC)
    FVector2D m_aimLimit;                                                             // 0x01B0 (size: 0x8)
    FVector m_rootInterp;                                                             // 0x01B8 (size: 0xC)
    FVector m_targeting;                                                              // 0x01C4 (size: 0xC)
    FVector2D m_deathCamParams;                                                       // 0x01D0 (size: 0x8)
    FVector m_deathCamInterp;                                                         // 0x01D8 (size: 0xC)
    FComponentReference m_gunComp;                                                    // 0x01E8 (size: 0x18)
    FName m_gunBone;                                                                  // 0x0200 (size: 0x8)
    bool m_dbgDraw;                                                                   // 0x0208 (size: 0x1)
    FSP3_RailShooterComponentOnVFXEvent OnVFXEvent;                                   // 0x0210 (size: 0x10)
    class UUserWidget* m_uiReticle;                                                   // 0x0280 (size: 0x8)

    void RxTakeDamage(class AActor* sender, const FGameplayEventData Payload);
    void RxDeath(class AActor* sender, const FGameplayEventData Payload);
}; // Size: 0x290

class USP3_ReticleWidget : public USP3_UserWidgetBase
{

    void SetOffset(const FVector2D& Offset);
    void OnSetOffset(const FVector2D& Offset);
    void OnFire();
    FVector2D GetOffset();
    void Fire();
}; // Size: 0x218

class USP3_SparxComponent : public USP3_ControllableComponent
{
    FSP3SparxMovement m_movement;                                                     // 0x01A8 (size: 0x1C)
    FSP3SparxAttack m_attack;                                                         // 0x01C8 (size: 0x60)
    FSP3SparxDamage m_damage;                                                         // 0x0228 (size: 0x10)
    FSP3SparxCamera m_camera;                                                         // 0x0238 (size: 0x1C)
    TArray<class TSubclassOf<ACharacter>> m_enemy;                                    // 0x0258 (size: 0x10)
    FSP3_SparxComponentOnCameraPush OnCameraPush;                                     // 0x0268 (size: 0x10)
    FSP3_SparxComponentOnCameraPop OnCameraPop;                                       // 0x0278 (size: 0x10)
    FSP3_SparxComponentOnVFXEvent OnVFXEvent;                                         // 0x0288 (size: 0x10)
    FSP3_SparxComponentOnDeathStart OnDeathStart;                                     // 0x0298 (size: 0x10)
    FSP3_SparxComponentOnDeathEnd OnDeathEnd;                                         // 0x02A8 (size: 0x10)
    TSubclassOf<class UHudCounterComponent> m_uiAmmoClass;                            // 0x02B8 (size: 0x8)
    TSubclassOf<class UFalconTimeBarWidget> m_uiShieldTimeBarClass;                   // 0x02C0 (size: 0x8)

    void RxTfBTakeDamage(class AActor* sender, const FGameplayEventData Payload);
    void RxTfBDeath(class AActor* sender, const FGameplayEventData Payload);
    void RxTakeAnyDamage(class AActor* Target, float dmgAmount, const class UDamageType* dmgType, class AController* Instigator, class AActor* causer);
    void RxOverlapEnd(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RxOverlapBegin(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    void RxActorHit(class AActor* Self, class AActor* Other, FVector N, const FHitResult& Hit);
    bool IsShieldActive();
    bool IsDashActive();
    void HandleOnNewInputSourceDetected(EInputSource NewSource);
}; // Size: 0x680

class USP3_SpawnManagerComponent : public UActorComponent
{
    FSP3_SpawnManagerComponentOnActorRegistered OnActorRegistered;                    // 0x0108 (size: 0x10)
    FSP3_SpawnManagerComponentOnActorUnregistered OnActorUnregistered;                // 0x0118 (size: 0x10)

    void UnregisterActor(class AActor* Actor);
    class AActor* SpawnInstance(TSubclassOf<class AActor> ActorClass, const FTransform& Transform);
    void ResetTimeSinceLastSpawn();
    void RegisterActor(class AActor* Actor);
    void PurgeDeadActors();
    void OnEnemyComponentDeathState(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void OnActorEndPlay(class AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnActorDied(class AActor* Actor, const FGameplayEventData Data);
    void KillSpawnedActors();
    float GetTimeSinceLastSpawn();
    TArray<class AActor*> GetSpawnedActors(TSubclassOf<class AActor> ActorClass);
    int32 GetNumSpawnedActors(TSubclassOf<class AActor> ActorClass);
    class ASP3_BossPickupBase* GetClosestSpawnedBossPickup(const FVector& Position, TSubclassOf<class ASP3_BossPickupBase> ActorClass, float MaxRange);
    class AActor* GetClosestSpawnedActor(const FVector& Position, TSubclassOf<class AActor> ActorClass, float MaxRange);
}; // Size: 0x128

class USP3_TimerWidget : public USP3_UserWidgetBase
{
    FString DisplayTime;                                                              // 0x0210 (size: 0x10)

}; // Size: 0x220

class USP3_UserWidgetBase : public UUserWidget
{

    void Show();
    void SetShown(bool Show);
    void OnShow();
    void OnHide(bool destroy);
    void Hide(bool destroy);
}; // Size: 0x210

class UScaleIntensityComponent : public UActorComponent
{
}; // Size: 0xF8

class UScoreWidget : public UUserWidget
{
    FString ScoreString;                                                              // 0x0208 (size: 0x10)
    FString ScorePart;                                                                // 0x0218 (size: 0x10)
    FString GoalPart;                                                                 // 0x0228 (size: 0x10)
    int32 RawScore;                                                                   // 0x0238 (size: 0x4)
    int32 RawGoal;                                                                    // 0x023C (size: 0x4)

    void SetCurrentScore(int32 score, int32 Goal);
}; // Size: 0x240

class UScriptedRealm : public UObject
{
}; // Size: 0x30

class UScriptedWorld : public UObject
{
}; // Size: 0x50

class USelectHopPoint : public USelectPoint
{
}; // Size: 0x98

class USelectPoint : public UBTTaskNode
{
    FBlackboardKeySelector TargetPoint;                                               // 0x0070 (size: 0x28)

}; // Size: 0x98

class USequenceTask : public UQuestTask
{
    class UQuestTask* m_current;                                                      // 0x0038 (size: 0x8)

}; // Size: 0x40

class USkateBoostBarWidget : public UUserWidget
{

    void ShowBoost(bool On);
    void Show();
    void SetIcon(const FName& Icon);
    void SetBarProgressPct(float pct);
    void SetBarProgress(int32 Count, int32 Total);
    void Hide();
    void Close();
}; // Size: 0x208

class USkateScoreWidget : public UFalconWidget
{
    FText Title;                                                                      // 0x0210 (size: 0x18)
    FText YourScore;                                                                  // 0x0228 (size: 0x18)
    FText CourseScore;                                                                // 0x0240 (size: 0x18)
    bool bIsNewHighScore;                                                             // 0x0258 (size: 0x1)
    bool bIsTimeScore;                                                                // 0x0259 (size: 0x1)
    FText NoCourseRecordLabel;                                                        // 0x0260 (size: 0x18)
    FText NewCourseRecordLabel;                                                       // 0x0278 (size: 0x18)
    float DefaultShowTime;                                                            // 0x0290 (size: 0x4)
    FSkateScoreWidgetOnClose OnClose;                                                 // 0x0298 (size: 0x10)

    void GetTimeString(float TimeSeconds, FText& timeText);
    void CloseWidget();
}; // Size: 0x2A8

class USkillNode : public UBTTask_GameplayTaskBase
{
}; // Size: 0x78

class USkillPointComponent : public UActorComponent
{

    void SetSkillPointObtained(ESkillPoint skillPoint);
    int32 GetSkillPointObtainedCount(int32 gameIndex, bool& completedPart1, bool& completedPart2);
    bool GetSkillPointObtained(ESkillPoint skillPoint);
}; // Size: 0xF0

class USorceressDungeon : public UScriptedRealm
{
}; // Size: 0x30

class USorceressThroneRoom : public UScriptedRealm
{
}; // Size: 0x30

class USparxHealthBarWidget : public UUserWidget
{

    void SetIcon(bool Left, FName Name);
    void SetHealth(bool Left, int32 Count, int32 Total, bool PlayDamageAnim);
    void Hide();
    void CreateWidget(FName Name);
    void Close();
}; // Size: 0x208

class USparxKeyWidget : public UUserWidget
{

    void SetKeyType(ESparxKeyType inType);
    void Close();
}; // Size: 0x208

class USpawnEnemiesComponent : public UActorComponent
{
    bool bEnabledByDefault;                                                           // 0x00F0 (size: 0x1)
    float TimeBetweenSpawns;                                                          // 0x00F4 (size: 0x4)
    class AEnemySpawnPool* EnemySpawnPool;                                            // 0x00F8 (size: 0x8)
    class ATargetPoint* EnemySpawnPoint;                                              // 0x0100 (size: 0x8)
    FComponentReference EnemyDestination;                                             // 0x0108 (size: 0x18)
    TArray<class ATargetPoint*> EnemySpawnPointList;                                  // 0x0120 (size: 0x10)
    TArray<bool> EnemySpawnPointListValid;                                            // 0x0130 (size: 0x10)
    class UAnimMontage* SpawningMontage;                                              // 0x0140 (size: 0x8)

}; // Size: 0x148

class USpawnTasks : public USequenceTask
{
    class AActor* m_spawner;                                                          // 0x0040 (size: 0x8)
    class APawn* m_spawned;                                                           // 0x0048 (size: 0x8)

}; // Size: 0x98

class USpyroAbility : public UGameplayAbility
{
    class AActor* Owner;                                                              // 0x05F8 (size: 0x8)
    class ASpyroCharacter* OwnerCharacter;                                            // 0x0600 (size: 0x8)
    class UAnimInstance* AnimInstance;                                                // 0x0608 (size: 0x8)
    class ASpyroPlayerController* PlayerController;                                   // 0x0610 (size: 0x8)
    TArray<class UAbilityTask*> AsyncTaskProxyList;                                   // 0x0618 (size: 0x10)
    class UPhasmidAbilitySystemComponent* AbilitySystemComponent;                     // 0x0628 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMeshComponent;                              // 0x0630 (size: 0x8)

    void RemoveAsyncTaskProxyFromList(class UAbilityTask* AsyncTaskProxy);
    void PostEndAbility(bool bWasCancelled);
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void ClearAsyncTaskProxyList();
    void AddAsyncTaskProxyToList(class UAbilityTask* AsyncTaskProxy);
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
}; // Size: 0x640

class USpyroReadjust : public UActorComponent
{
    float AcceptDistance;                                                             // 0x00F0 (size: 0x4)
    float AcceptAngle;                                                                // 0x00F4 (size: 0x4)

    void MovementReadjust(class AActor* PlayerT, float Distance, float zAdjust);
}; // Size: 0x128

class USunriseSpring : public UScriptedRealm
{
}; // Size: 0x30

class USuperBonusGemComponent : public UArrowComponent
{
    FRevengeGemSets Gems;                                                             // 0x0688 (size: 0x18)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& saveData);
}; // Size: 0x6A0

class UTestBianca : public ULS301_SunriseSpringHome
{
}; // Size: 0x50

class UTestHunterGlider : public ULS301_SunriseSpringHome
{
}; // Size: 0x50

class UTestLS301_Aeronauts : public ULS301_SunriseSpringHome
{
}; // Size: 0x50

class UTestMoneyBags : public ULS301_SunriseSpringHome
{
}; // Size: 0x50

class UTestRealm : public UScriptedRealm
{
}; // Size: 0x30

class UTestSunriseActivePassive : public ULS301_SunriseSpringHome
{
}; // Size: 0x50

class UTest_Checkpoint : public UScriptedWorld
{
}; // Size: 0x50

class UTest_CrawdadFarm_Doors : public ULS309_CrawdadFarm_Main
{
}; // Size: 0x50

class UTest_CrawdadFarm_Keys : public ULS309_CrawdadFarm_Main
{
}; // Size: 0x50

class UTest_CrawdadFarm_Spawning : public ULS309_CrawdadFarm_Main
{
}; // Size: 0x50

class UTest_LS301Portals : public ULS301_SunriseSpringHome
{
}; // Size: 0x50

class UTest_PathFollowing : public UScriptedWorld
{
}; // Size: 0x50

class UTest_TFBMinigame : public UScriptedWorld
{
}; // Size: 0x50

class UTimerWidget : public UUserWidget
{
    FString TimeString;                                                               // 0x0208 (size: 0x10)
    float RemainingSeconds;                                                           // 0x0218 (size: 0x4)
    FString MinutesPart;                                                              // 0x0220 (size: 0x10)
    FString SecondsPart;                                                              // 0x0230 (size: 0x10)
    FString FractionalPart;                                                           // 0x0240 (size: 0x10)
    int32 RawMinutesPart;                                                             // 0x0250 (size: 0x4)
    int32 RawSecondsPart;                                                             // 0x0254 (size: 0x4)
    int32 RawFractionalPart;                                                          // 0x0258 (size: 0x4)

    void SetRemainingSeconds(float T);
}; // Size: 0x260

class UTransportFunctions : public UBlueprintFunctionLibrary
{

    void RespawnAndPosessPlayerCharacter(class UObject* WorldContextObject, const FTransform& SpawnTransform);
    void ResetPlayerCharacter(class UObject* WorldContextObject, const FTransform& SpawnTransform);
    void LoadNextHomeworld(class UObject* WorldContextObject);
    bool IsPlayerCharacter(class UObject* WorldContextObject, class AActor* PlayerChar, class AActor* OtherActor);
    void GetCurrentLevelSlotOffset(class UObject* WorldContextObject, const FName& LevelName, FVector& Offset);
    class ATransportManager* FindTransportManager(class UObject* WorldContextObject);
    class APortal* FindTransportActor(class UObject* WorldContextObject, FName ObjectName);
    class AFalconGameStateBase* FindFalconGameStateBase(class UObject* WorldContextObject);
}; // Size: 0x28

class UTrickWidget : public UUserWidget
{
    float TrickBufferTime;                                                            // 0x0208 (size: 0x4)

    void UpdateTrickScore(FString TrickName, int32 TrickScore, ETrickStatus TrickStatus);
    void ShowWidget(FName IconName, EFalconHudWidgetPosition Position);
    void SetTotalScore(int32 score);
    void CloseWidget();
    void ClearScore();
}; // Size: 0x220

class UWatchPlayerAction : public UQuestTask
{
}; // Size: 0x30

class UWatchPlayerComponent : public UArrowComponent
{
    bool bUse2DVision;                                                                // 0x0688 (size: 0x1)
    float SightDistance;                                                              // 0x068C (size: 0x4)
    float CosHalfAngle;                                                               // 0x0690 (size: 0x4)
    bool bUseUnderwaterVision;                                                        // 0x0694 (size: 0x1)
    FComponentReference EyeComponent;                                                 // 0x0698 (size: 0x18)
    FWatchPlayerComponentOnPlayerSeen OnPlayerSeen;                                   // 0x06B0 (size: 0x10)

    int32 TotalSightings();
    void StopLooking();
    bool StartLooking();
    int32 RecentSightings();
    EPlayerVisibility PlayerVisibility();
    class ACharacter* GetPlayer();
    bool CanSeePlayer();
}; // Size: 0x6E0

class UWatchPressToTalk : public UQuestTask
{
    class APressToTalkWidget* m_ui;                                                   // 0x0028 (size: 0x8)

    void OnTalkPressed();
}; // Size: 0x30

class UWhaleTasks : public USequenceTask
{
    class ACharacter* m_whale;                                                        // 0x0048 (size: 0x8)
    class APlayerController* m_pc;                                                    // 0x0050 (size: 0x8)
    class USceneComponent* m_dest;                                                    // 0x0078 (size: 0x8)

    void OnMontageNotify(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
}; // Size: 0x80

class UZoeActions : public UActorComponent
{
    FZoeActionsOnAppearing OnAppearing;                                               // 0x00F0 (size: 0x10)
    FZoeActionsOnDisappearing OnDisappearing;                                         // 0x0100 (size: 0x10)
    FZoeActionsOnVanish OnVanish;                                                     // 0x0110 (size: 0x10)
    FZoeActionsOnZapping OnZapping;                                                   // 0x0120 (size: 0x10)

}; // Size: 0x130

#endif
