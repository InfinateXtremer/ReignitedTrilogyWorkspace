#ifndef UE4SS_SDK_Phasmid_HPP
#define UE4SS_SDK_Phasmid_HPP

#include "Phasmid_enums.hpp"

struct FAnimNode_ProcChain : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneStart;                                                         // 0x0070 (size: 0x18)
    FBoneReference BoneEnd;                                                           // 0x0088 (size: 0x18)
    EProcChainAxis TwistAxis;                                                         // 0x00A0 (size: 0x1)
    EProcChainAxis UpAxis;                                                            // 0x00A1 (size: 0x1)
    float Spring;                                                                     // 0x00A4 (size: 0x4)
    float DampWS;                                                                     // 0x00A8 (size: 0x4)
    float DampLS;                                                                     // 0x00AC (size: 0x4)
    float Gravity;                                                                    // 0x00B0 (size: 0x4)
    float AngleMax;                                                                   // 0x00B4 (size: 0x4)
    int32 FPS;                                                                        // 0x00B8 (size: 0x4)
    bool DebugDraw;                                                                   // 0x00BC (size: 0x1)

}; // Size: 0x130

struct FCameraContext
{
    class AActor* CameraActor;                                                        // 0x0000 (size: 0x8)
    FCameraSettings CameraSettings;                                                   // 0x0008 (size: 0x24)
    FViewTargetTransitionParams TransitionParams;                                     // 0x002C (size: 0x10)

}; // Size: 0x40

struct FCameraSettings
{
    float SpringArmLength;                                                            // 0x0000 (size: 0x4)
    float FOV;                                                                        // 0x0004 (size: 0x4)
    FVector LocationOffset;                                                           // 0x0008 (size: 0xC)
    FRotator AngularOffset;                                                           // 0x0014 (size: 0xC)
    uint8 bUpdateTransformWithOwner;                                                  // 0x0020 (size: 0x1)

}; // Size: 0x24

struct FDebugCamInfo
{
}; // Size: 0x118

struct FEncounterInitialOrders
{
    class AActor* Combatant;                                                          // 0x0000 (size: 0x8)
    EInitialOrderType Orders;                                                         // 0x0008 (size: 0x1)
    class AActor* TargetActor;                                                        // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FFalconDialogueTableRow : public FTableRowBase
{
    FSoftObjectPath VoicedLine;                                                       // 0x0008 (size: 0x18)
    FText Text;                                                                       // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FFalconEnemySignals
{
}; // Size: 0x1

struct FFalconEnemySpawnedCollectible
{
    TSubclassOf<class APhasmidLevelActor> CollectibleType;                            // 0x0000 (size: 0x8)
    TSubclassOf<class APhasmidLevelActor> AlternateType;                              // 0x0008 (size: 0x8)
    TWeakObjectPtr<class AActor> Collectible;                                         // 0x0010 (size: 0x8)
    uint8 bCollected;                                                                 // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FFalconEverythingState
{
    FName stateName;                                                                  // 0x0000 (size: 0x8)
    class UAnimMontage* Montage;                                                      // 0x0008 (size: 0x8)
    float MontageStartOffsetPercentage;                                               // 0x0010 (size: 0x4)
    EFalconMovementMode MovementMode;                                                 // 0x0014 (size: 0x1)
    EFalconTargetType MovementTarget;                                                 // 0x0018 (size: 0x4)
    EFalconFacingMode FacingMode;                                                     // 0x001C (size: 0x1)
    EFalconTargetType FacingTarget;                                                   // 0x0020 (size: 0x4)
    TMap<class FGameplayTag, class FLaunchParams> DamageTypeLaunchParamsOverrides;    // 0x0028 (size: 0x50)
    TArray<FPhasmidCollisionStruct> CollisionRegionSettings;                          // 0x0078 (size: 0x10)
    TArray<FPhasmidProjectileStruct> ProjectileSettings;                              // 0x0088 (size: 0x10)
    class AActor* Target;                                                             // 0x0098 (size: 0x8)
    class ATargetPoint* Waypoints;                                                    // 0x00A0 (size: 0x8)
    FGameplayTagContainer Immunities;                                                 // 0x00A8 (size: 0x20)
    TSubclassOf<class AActor> SpawnActorClass;                                        // 0x00C8 (size: 0x8)
    FFalconStateEmitterStruct EnterStateEmitter;                                      // 0x00D0 (size: 0x38)
    FFalconStateEmitterStruct ExitStateEmitter;                                       // 0x0108 (size: 0x38)
    uint8 bResetGlobalTriggers;                                                       // 0x0140 (size: 0x1)
    uint8 bDestroySelfOnExit;                                                         // 0x0140 (size: 0x1)
    uint8 bDisableCollision;                                                          // 0x0140 (size: 0x1)
    uint8 bDisableAnimation;                                                          // 0x0140 (size: 0x1)
    TArray<FFalconEnemySpawnedCollectible> SpawnCollectibles;                         // 0x0148 (size: 0x10)
    TArray<FFalconEverythingTrigger> Triggers;                                        // 0x0158 (size: 0x10)
    TArray<FFalconMaterialTransitionStruct> MaterialParamaterCurves;                  // 0x0168 (size: 0x10)
    uint8 bStartAtNearestWaypoint;                                                    // 0x0178 (size: 0x1)
    uint8 bKeepVelocityOnStateChange;                                                 // 0x0178 (size: 0x1)
    FFalconSignalData Signal;                                                         // 0x0180 (size: 0x38)
    float WanderDelay;                                                                // 0x01B8 (size: 0x4)
    float WanderOuterRadius;                                                          // 0x01BC (size: 0x4)
    float WanderTurnRate;                                                             // 0x01C0 (size: 0x4)
    float ActorTickIntervalOverride;                                                  // 0x01C4 (size: 0x4)

}; // Size: 0x1C8

struct FFalconEverythingTrigger
{
    FName NextStateName;                                                              // 0x0000 (size: 0x8)
    uint8 bChooseRandomNextState;                                                     // 0x0008 (size: 0x1)
    TMap<FName, float> RandomNextState;                                               // 0x0010 (size: 0x50)
    int32 TriggerType;                                                                // 0x0060 (size: 0x4)
    uint8 bLogicalAndTrigger;                                                         // 0x0064 (size: 0x1)
    float Time;                                                                       // 0x0068 (size: 0x4)
    float Distance;                                                                   // 0x006C (size: 0x4)
    EFalconTargetType DistanceTarget;                                                 // 0x0070 (size: 0x4)
    FGameplayTagContainer ReceiveDamageTypes;                                         // 0x0078 (size: 0x20)
    TArray<FName> ReceiveDamageComponents;                                            // 0x0098 (size: 0x10)
    int8 CausedDamageTargetType;                                                      // 0x00A8 (size: 0x1)
    FGameplayTag WatchedActorTag;                                                     // 0x0158 (size: 0x8)
    uint8 bWatchSpawns;                                                               // 0x0160 (size: 0x1)
    uint8 bWatchCollectibles;                                                         // 0x0160 (size: 0x1)
    uint32 WatchListCompareValue;                                                     // 0x0164 (size: 0x4)
    TWeakObjectPtr<class AActor> CollisionVolume;                                     // 0x0168 (size: 0x8)
    EFalconTargetType CollisionVolumeTarget;                                          // 0x0170 (size: 0x4)
    EFalconTargetType SightTarget;                                                    // 0x0178 (size: 0x4)
    uint32 HitPoints;                                                                 // 0x017C (size: 0x4)
    FGameplayTagContainer TriggerSignals;                                             // 0x0180 (size: 0x20)
    uint32 SplinePointIndex;                                                          // 0x01A0 (size: 0x4)
    uint8 bReachedSplineIndex;                                                        // 0x01A4 (size: 0x1)
    uint8 bConsumeSignals;                                                            // 0x01A4 (size: 0x1)
    uint8 bDontResetTrigger;                                                          // 0x01A4 (size: 0x1)
    uint8 bAdjustForActorTimeDilation;                                                // 0x01A4 (size: 0x1)
    uint8 bRestrictVerticalDistance;                                                  // 0x01A4 (size: 0x1)
    float DistanceAboveGround;                                                        // 0x01A8 (size: 0x4)
    float DistanceBelowGround;                                                        // 0x01AC (size: 0x4)
    TArray<FName> BlueprintFunctionNames;                                             // 0x01B0 (size: 0x10)
    TArray<FName> StateNames;                                                         // 0x01C0 (size: 0x10)

}; // Size: 0x1D0

struct FFalconMaterialTransitionStruct
{
    FName MaterialComponent;                                                          // 0x0000 (size: 0x8)
    int32 MaterialIndex;                                                              // 0x0008 (size: 0x4)
    FName ParameterName;                                                              // 0x0010 (size: 0x8)
    class UCurveBase* ParameterValueTimelineCurve;                                    // 0x0018 (size: 0x8)
    bool bReverse;                                                                    // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FFalconMovieSceneDialogueTemplate : public FMovieSceneEvalTemplate
{
    class UFalconMovieSceneDialogueSection* Section;                                  // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FFalconSignalData
{
    FGameplayTag TargetActorsTag;                                                     // 0x0000 (size: 0x8)
    float BroadcastRadius;                                                            // 0x0008 (size: 0x4)
    FGameplayTagContainer Signals;                                                    // 0x0010 (size: 0x20)
    TSubclassOf<class AActor> FilterClass;                                            // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FFalconStateEmitterStruct
{
    class UParticleSystem* EmitterTemplate;                                           // 0x0000 (size: 0x8)
    FName AttachPointName;                                                            // 0x0008 (size: 0x8)
    FVector Location;                                                                 // 0x0010 (size: 0xC)
    FRotator Rotation;                                                                // 0x001C (size: 0xC)
    FVector Scale;                                                                    // 0x0028 (size: 0xC)
    bool bAttachToOwner;                                                              // 0x0034 (size: 0x1)
    bool bAutoDestroy;                                                                // 0x0035 (size: 0x1)
    bool bDestroyOnStateChange;                                                       // 0x0036 (size: 0x1)

}; // Size: 0x38

struct FFollowCameraSettings
{
    FVector m_tgtOffset;                                                              // 0x0000 (size: 0xC)
    FVector m_tgtOffset1;                                                             // 0x000C (size: 0xC)
    FVector m_tgtOffset2;                                                             // 0x0018 (size: 0xC)
    FVector m_gmblOffset;                                                             // 0x0024 (size: 0xC)
    float m_radDefault;                                                               // 0x0030 (size: 0x4)
    float m_radDefaultAtLimit;                                                        // 0x0034 (size: 0x4)
    float m_yawClamp;                                                                 // 0x0038 (size: 0x4)
    float m_rotSpeedH;                                                                // 0x003C (size: 0x4)
    float m_rotSpeedV;                                                                // 0x0040 (size: 0x4)
    FVector m_rotInterpH;                                                             // 0x0044 (size: 0xC)
    FVector m_rotInterpV;                                                             // 0x0050 (size: 0xC)
    FVector m_rotLimitV;                                                              // 0x005C (size: 0xC)
    bool m_ignoreRightStickInput;                                                     // 0x0068 (size: 0x1)
    bool m_useBothSticksAsCamInput;                                                   // 0x0069 (size: 0x1)
    FVector m_fovInputScale;                                                          // 0x006C (size: 0xC)
    FVector2D m_clampZSoft;                                                           // 0x0078 (size: 0x8)
    FVector2D m_clampZHard;                                                           // 0x0080 (size: 0x8)
    FVector m_posZInterp;                                                             // 0x0088 (size: 0xC)
    float m_colRadius;                                                                // 0x0094 (size: 0x4)
    float m_colClipMin;                                                               // 0x0098 (size: 0x4)
    FVector m_colInterpIn;                                                            // 0x009C (size: 0xC)
    FVector m_colInterpOut;                                                           // 0x00A8 (size: 0xC)
    float m_ceilingGmblOffset;                                                        // 0x00B4 (size: 0x4)
    float m_ctrInterp;                                                                // 0x00B8 (size: 0x4)
    float m_ctrSpeed;                                                                 // 0x00BC (size: 0x4)
    float m_ctrDecelAngle;                                                            // 0x00C0 (size: 0x4)
    float m_maxCtrDelta;                                                              // 0x00C4 (size: 0x4)
    float m_ctrInterpV;                                                               // 0x00C8 (size: 0x4)
    float m_ctrAngleV;                                                                // 0x00CC (size: 0x4)
    bool m_noCentering;                                                               // 0x00D0 (size: 0x1)
    float m_maxCtrDeltaFromInput;                                                     // 0x00D4 (size: 0x4)
    FVector m_centerInterpParams;                                                     // 0x00D8 (size: 0xC)
    float m_ctrYawClamp;                                                              // 0x00E4 (size: 0x4)
    float m_lookAheadScalar;                                                          // 0x00E8 (size: 0x4)
    float m_panAheadScalar;                                                           // 0x00EC (size: 0x4)
    float m_numFramesSmooth;                                                          // 0x00F0 (size: 0x4)
    float m_numFramesSmoothPan;                                                       // 0x00F4 (size: 0x4)
    FVector m_collisionOffset;                                                        // 0x00F8 (size: 0xC)
    bool m_useRawCamPos;                                                              // 0x0104 (size: 0x1)
    float FieldOfView;                                                                // 0x0108 (size: 0x4)
    uint8 bEnableIdleVerticalCenter;                                                  // 0x010C (size: 0x1)
    bool m_traceToCeiling;                                                            // 0x0110 (size: 0x1)
    float m_defaultPitchByHeight;                                                     // 0x0114 (size: 0x4)
    float m_traceLength;                                                              // 0x0118 (size: 0x4)
    FVector m_useRotVInterpSettings;                                                  // 0x011C (size: 0xC)
    uint8 bHighPriority;                                                              // 0x0128 (size: 0x1)
    int32 m_settingsID;                                                               // 0x012C (size: 0x4)

}; // Size: 0x130

struct FGameplayNotificationDef
{
    TEnumAsByte<ENotificationPriority::Type> Priority;                                // 0x0000 (size: 0x1)
    TEnumAsByte<ENotificationType::Type> MyType;                                      // 0x0001 (size: 0x1)
    FText NotificationText;                                                           // 0x0008 (size: 0x18)
    int32 AdditionalData;                                                             // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FGemHashArray
{
    TArray<int32> GemHashArray;                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLaunchParams
{
    float Magnitude;                                                                  // 0x0000 (size: 0x4)
    float AngleDegrees;                                                               // 0x0008 (size: 0x4)
    bool bLaunchToTheHeavens;                                                         // 0x0020 (size: 0x1)

}; // Size: 0x24

struct FLevelInfo : public FTableRowBase
{
    FString LevelPath;                                                                // 0x0008 (size: 0x10)
    FString levelMain;                                                                // 0x0018 (size: 0x10)
    FString DisplayName;                                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FManagedLightBaseValue
{
}; // Size: 0x8

struct FMiniMapTextureData : public FTableRowBase
{
    class UTexture2D* Texture;                                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FObjectiveDefinition : public FTableRowBase
{
    FText Description;                                                                // 0x0008 (size: 0x18)
    class UDataTable* SubObjectiveData;                                               // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FPatrolPath
{
    EPatrolType PatrolType;                                                           // 0x0000 (size: 0x1)
    TArray<class APhasmidTaggedTargetPoint*> PatrolPoints;                            // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPhasmidAIOrdersHandle
{
    uint64 Handle;                                                                    // 0x0000 (size: 0x8)
    uint8 Priority;                                                                   // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FPhasmidAISplineMoveRequest
{
    class USplineComponent* GoalSpline;                                               // 0x0040 (size: 0x8)

}; // Size: 0x50

struct FPhasmidActionTextData
{
    EPhasmidAction Action;                                                            // 0x0000 (size: 0x1)
    EKeybindingEntry KeybindingEntry;                                                 // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FPhasmidActorAggroBlueprintInfo
{
    class AActor* Target;                                                             // 0x0000 (size: 0x8)
    FVector LastKnownPosition;                                                        // 0x0008 (size: 0xC)
    int32 Aggro;                                                                      // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FPhasmidActorFilter
{
    EPhasmidActorFilterMatchType AllowSelf;                                           // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FPhasmidAttributeData
{
    FGameplayAttribute Attribute;                                                     // 0x0000 (size: 0x20)
    float Value;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FPhasmidBehaviorUtilityEntry
{
    class UBehaviorTree* Behavior;                                                    // 0x0000 (size: 0x8)
    TSubclassOf<class UPhasmidUtilityMethod> UtilityMethod;                           // 0x0008 (size: 0x8)
    class UPhasmidUtilityMethod* UtilityMethodInst;                                   // 0x0010 (size: 0x8)
    float CachedUtilityValue;                                                         // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FPhasmidCMSkateTuning
{
    float GroundSpeed;                                                                // 0x0000 (size: 0x4)
    float GroundAccel;                                                                // 0x0004 (size: 0x4)
    float TurboSpeed;                                                                 // 0x0008 (size: 0x4)
    float TurboAccel;                                                                 // 0x000C (size: 0x4)
    float MaxTurboPoints;                                                             // 0x0010 (size: 0x4)
    float MaxTurboUsedPerSecond;                                                      // 0x0014 (size: 0x4)
    FVector RotInterpGround;                                                          // 0x0018 (size: 0xC)
    FVector RotInterpAirJump;                                                         // 0x0024 (size: 0xC)
    FVector RotInterpAirVert;                                                         // 0x0030 (size: 0xC)
    FVector BoardSize;                                                                // 0x003C (size: 0xC)
    FVector BoardOffset;                                                              // 0x0048 (size: 0xC)
    float WheelRadius;                                                                // 0x0054 (size: 0x4)
    float RollFriction;                                                               // 0x0058 (size: 0x4)
    float RollAngVert;                                                                // 0x005C (size: 0x4)
    float RollAngMaxY;                                                                // 0x0060 (size: 0x4)
    float RollAngMaxX;                                                                // 0x0064 (size: 0x4)
    float RollGravScalar;                                                             // 0x0068 (size: 0x4)
    float RollStickScalar;                                                            // 0x006C (size: 0x4)
    float JumpHeight;                                                                 // 0x0070 (size: 0x4)
    float JumpImpulseRamp;                                                            // 0x0074 (size: 0x4)
    float JumpImpulseAng;                                                             // 0x0078 (size: 0x4)
    float JumpImpulseVert;                                                            // 0x007C (size: 0x4)
    FVector JumpParamsRolloff;                                                        // 0x0080 (size: 0xC)
    class UDataTable* JumpRampDataTable;                                              // 0x0090 (size: 0x8)
    FVector AirPivotOffset;                                                           // 0x0098 (size: 0xC)
    float AirLevelInterp;                                                             // 0x00A4 (size: 0x4)
    float AirJumpSteering;                                                            // 0x00A8 (size: 0x4)
    float AirGravScalar;                                                              // 0x00AC (size: 0x4)
    float AirGlideFriction;                                                           // 0x00B0 (size: 0x4)
    float AirVertAngle;                                                               // 0x00B4 (size: 0x4)
    float AirVertPush;                                                                // 0x00B8 (size: 0x4)
    float LandAngMaxUp;                                                               // 0x00BC (size: 0x4)
    float LandSideVelMax;                                                             // 0x00C0 (size: 0x4)
    float LandSlopeMax;                                                               // 0x00C4 (size: 0x4)
    float CrashTimeMin;                                                               // 0x00C8 (size: 0x4)
    float CrashTimeMax;                                                               // 0x00CC (size: 0x4)
    float CrashFriction;                                                              // 0x00D0 (size: 0x4)
    float ColDmgRadius;                                                               // 0x00D4 (size: 0x4)
    FVector ColDmgOffset;                                                             // 0x00D8 (size: 0xC)
    FGameplayTagContainer ColDmgTags;                                                 // 0x00E8 (size: 0x20)
    class UParticleSystem* ColEmitClass;                                              // 0x0108 (size: 0x8)
    FName ColEmitSocket;                                                              // 0x0110 (size: 0x8)
    FName AttachBoardSocket;                                                          // 0x0118 (size: 0x8)
    FVector2D CrashLinImpulseRange;                                                   // 0x0120 (size: 0x8)
    FVector2D CrashAngImpulseRange;                                                   // 0x0128 (size: 0x8)
    float MaxSpeed;                                                                   // 0x0130 (size: 0x4)
    float MaxSpeedWhenTurboAllowed;                                                   // 0x0134 (size: 0x4)
    float SlideAlongSurfaceCrashSpeed;                                                // 0x0138 (size: 0x4)

}; // Size: 0x140

struct FPhasmidCharacterInitialData : public FTableRowBase
{
    float HealthMax;                                                                  // 0x0008 (size: 0x4)
    float ShieldMax;                                                                  // 0x000C (size: 0x4)
    float ShieldRegenRate;                                                            // 0x0010 (size: 0x4)
    float ShieldRegenDelay;                                                           // 0x0014 (size: 0x4)
    float LowHealthThreshold;                                                         // 0x0018 (size: 0x4)
    float GravityScale;                                                               // 0x001C (size: 0x4)
    float MaxAcceleration;                                                            // 0x0020 (size: 0x4)
    float CrouchedHalfHeight;                                                         // 0x0024 (size: 0x4)
    float MaxWalkSpeed;                                                               // 0x0028 (size: 0x4)
    float MaxWalkSpeedCrouched;                                                       // 0x002C (size: 0x4)
    float BrakingDecelerationWalking;                                                 // 0x0030 (size: 0x4)
    float JumpZVelocity;                                                              // 0x0034 (size: 0x4)
    float SecondJumpZVelocity;                                                        // 0x0038 (size: 0x4)
    float BrakingDecelerationFalling;                                                 // 0x003C (size: 0x4)
    float AirControl;                                                                 // 0x0040 (size: 0x4)
    float AirControlBoostThreshold;                                                   // 0x0044 (size: 0x4)
    float GroundFriction;                                                             // 0x0048 (size: 0x4)
    float FallingLateralFriction;                                                     // 0x004C (size: 0x4)
    float JumpOffJumpZFactor;                                                         // 0x0050 (size: 0x4)
    float MaxFlySpeed;                                                                // 0x0054 (size: 0x4)
    float BrakingDecelerationFlying;                                                  // 0x0058 (size: 0x4)
    float NavAgentRadius;                                                             // 0x005C (size: 0x4)
    float NavAgentHeight;                                                             // 0x0060 (size: 0x4)
    float FootstepLoudness;                                                           // 0x0064 (size: 0x4)
    float FootstepMaxRange;                                                           // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FPhasmidCollisionEmitterStruct
{
    class UParticleSystem* EmitterTemplate;                                           // 0x0000 (size: 0x8)
    FName socket;                                                                     // 0x0008 (size: 0x8)
    bool bAttached;                                                                   // 0x0010 (size: 0x1)
    FVector Location;                                                                 // 0x0014 (size: 0xC)
    FRotator Rotation;                                                                // 0x0020 (size: 0xC)
    FVector Scale;                                                                    // 0x002C (size: 0xC)

}; // Size: 0x38

struct FPhasmidCollisionOverlapInfo
{
}; // Size: 0xC

struct FPhasmidCollisionStruct
{
    FName Description;                                                                // 0x0000 (size: 0x8)
    ECollisionRegionShape Shape;                                                      // 0x0008 (size: 0x1)
    FName DamageGroupName;                                                            // 0x0010 (size: 0x8)
    ECollisionRegionFilter CollisionFilter;                                           // 0x0018 (size: 0x1)
    bool bCollideWithOwner;                                                           // 0x0019 (size: 0x1)
    TSubclassOf<class UGameplayAbility> OverrideCollisionAbility;                     // 0x0020 (size: 0x8)
    bool bSkipDamageExecution;                                                        // 0x0028 (size: 0x1)
    float CollisionInterval;                                                          // 0x002C (size: 0x4)
    float EndCollisionInterval;                                                       // 0x0030 (size: 0x4)
    float CollisionMagnitude;                                                         // 0x0034 (size: 0x4)
    FGameplayTagContainer CollisionTags;                                              // 0x0038 (size: 0x20)
    FVector Dimensions;                                                               // 0x0058 (size: 0xC)
    float InitialLifeTime;                                                            // 0x0064 (size: 0x4)
    bool bInteractWithWalls;                                                          // 0x0068 (size: 0x1)
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    bool bAttachToParent;                                                             // 0x00A0 (size: 0x1)
    FName SocketName;                                                                 // 0x00A8 (size: 0x8)
    EAttachmentRule LocationRule;                                                     // 0x00B0 (size: 0x1)
    EAttachmentRule RotationRule;                                                     // 0x00B1 (size: 0x1)
    EAttachmentRule ScaleRule;                                                        // 0x00B2 (size: 0x1)
    FPhasmidCollisionEmitterStruct ImpactEmitterSettings;                             // 0x00B8 (size: 0x38)

}; // Size: 0xF0

struct FPhasmidConsoleIconMap : public FTableRowBase
{
    TArray<EPhasmidAction> Actions;                                                   // 0x0008 (size: 0x10)
    class UTexture2D* PS4_Icon;                                                       // 0x0018 (size: 0x8)
    class UTexture2D* XB1_Icon;                                                       // 0x0020 (size: 0x8)
    class UTexture2D* SteamController_Icon;                                           // 0x0028 (size: 0x8)
    class UTexture2D* SwitchController_Icon;                                          // 0x0030 (size: 0x8)
    class UTexture2D* KeyboardMouse_Icon;                                             // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FPhasmidControlCommandToActionMap : public FTableRowBase
{
    EPhasmidAction Action;                                                            // 0x0008 (size: 0x1)
    TArray<FString> ControlCommands;                                                  // 0x0010 (size: 0x10)
    TMap<class EInputSource, class EPhasmidAction> InputSourceActionOverridesMap;     // 0x0020 (size: 0x50)

}; // Size: 0x70

struct FPhasmidControlImageMap : public FTableRowBase
{
    FString controlId;                                                                // 0x0008 (size: 0x10)
    class UTexture2D* controlImageXb1;                                                // 0x0018 (size: 0x8)
    class UTexture2D* controlImagePs4;                                                // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FPhasmidCoverLine
{
}; // Size: 0x30

struct FPhasmidDamageGroup
{
    FName GroupName;                                                                  // 0x0000 (size: 0x8)
    FName SourceName;                                                                 // 0x0008 (size: 0x8)
    int32 Index;                                                                      // 0x0010 (size: 0x4)
    float Timestamp;                                                                  // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FPhasmidDisplayAction : public FTableRowBase
{
    EPhasmidAction Action;                                                            // 0x0008 (size: 0x1)
    FText DisplayName;                                                                // 0x0010 (size: 0x18)
    FString GlobalFlagKey;                                                            // 0x0028 (size: 0x10)
    TArray<FPhasmidKeybindData> Bindings;                                             // 0x0038 (size: 0x10)
    bool ExcludeFromKBMBindingList;                                                   // 0x0048 (size: 0x1)
    bool KeysCanBeBoundToMultipleActions;                                             // 0x0049 (size: 0x1)
    bool MustBeBound;                                                                 // 0x004A (size: 0x1)

}; // Size: 0x50

struct FPhasmidEffectApplicationContainer
{
    TArray<FPhasmidEffectApplicationItem> Items;                                      // 0x0000 (size: 0x10)
    class UAbilitySystemComponent* SourceAbilitySystemComponent;                      // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FPhasmidEffectApplicationItem
{
    FPhasmidActorFilter Filter;                                                       // 0x0000 (size: 0x1)
    TArray<FPhasmidEffectItem> Effects;                                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPhasmidEffectItem
{
    TSubclassOf<class UGameplayEffect> GameplayEffect;                                // 0x0000 (size: 0x8)
    float Level;                                                                      // 0x0008 (size: 0x4)
    int32 StackCount;                                                                 // 0x000C (size: 0x4)
    FGameplayEffectSpecHandle GeneratedSpec;                                          // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FPhasmidEnemyBehaviorParams
{
    float CurrentBehaviorUtilityBonus;                                                // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FPhasmidGameSaveLevelObjectMap
{
    TMap<class FString, class FPhasmidGameSaveObjectDataMap> levelObjectMap;          // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FPhasmidGameSaveObjectData
{
    FPhasmidObjectSaveDataList saveDataList;                                          // 0x0000 (size: 0x10)
    FPhasmidGameSaveObjectId objectId;                                                // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FPhasmidGameSaveObjectDataMap
{
    TMap<class FString, class FPhasmidObjectSaveDataList> objectDataMap;              // 0x0000 (size: 0x50)
    TMap<class EInventoryType, class FGemHashArray> gemCollectionMap;                 // 0x0050 (size: 0x50)
    TMap<int32, EInventoryType> gemHashTypeMap;                                       // 0x00A0 (size: 0x50)

}; // Size: 0xF0

struct FPhasmidGameSaveObjectId
{
    FString LevelName;                                                                // 0x0000 (size: 0x10)
    FString ObjectName;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FPhasmidIconReturnData
{
    class UTexture2D* Icon;                                                           // 0x0000 (size: 0x8)
    FPhasmidKeyboardCommand KeyboardCommands;                                         // 0x0008 (size: 0x38)
    TArray<FPhasmidActionTextData> KeyboardActionTextData;                            // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FPhasmidInventoryData
{
    EInventoryType ItemType;                                                          // 0x0000 (size: 0x1)
    bool collected;                                                                   // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FPhasmidInventoryItem
{
    EInventoryType ItemType;                                                          // 0x0000 (size: 0x1)
    int32 quantity;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPhasmidInventoryMap
{
    TMap<EInventoryType, int32> inventoryMap;                                         // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FPhasmidKeyData
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    EPhasmidAction Action;                                                            // 0x0018 (size: 0x1)
    EKeybindingEntry KeybindingEntry;                                                 // 0x0019 (size: 0x1)

}; // Size: 0x20

struct FPhasmidKeybindData
{
    FName BindingName;                                                                // 0x0000 (size: 0x8)
    bool IsActionBinding;                                                             // 0x0008 (size: 0x1)
    float Scale;                                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FPhasmidKeyboardCommand
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    FText Command;                                                                    // 0x0018 (size: 0x18)
    bool IsExcludedFromUsingKeyboardIcon;                                             // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FPhasmidKeyboardMouseIconMap : public FTableRowBase
{
    FKey Key;                                                                         // 0x0008 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FPhasmidLevelActorInitialData : public FTableRowBase
{
    float HealthMax;                                                                  // 0x0008 (size: 0x4)
    float ShieldMax;                                                                  // 0x000C (size: 0x4)
    float ShieldRegenRate;                                                            // 0x0010 (size: 0x4)
    float ShieldRegenDelay;                                                           // 0x0014 (size: 0x4)
    float DamageBase;                                                                 // 0x0018 (size: 0x4)
    float CritMultiplier;                                                             // 0x001C (size: 0x4)
    float DamageRepeatInterval;                                                       // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FPhasmidLevelInventoryMap
{
    TMap<class FString, class FPhasmidInventoryMap> levelInventoryMap;                // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FPhasmidMeshScaleStruct
{
    float StartScale;                                                                 // 0x0000 (size: 0x4)
    float SpringFrequency;                                                            // 0x0004 (size: 0x4)
    float SpringDampening;                                                            // 0x0008 (size: 0x4)
    float SpringMaxSpeed;                                                             // 0x000C (size: 0x4)

}; // Size: 0x10

struct FPhasmidNavPost
{
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FRadialDistanceData CoverDistances;                                               // 0x0014 (size: 0xC)
    uint8 VisibleToPlayer;                                                            // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FPhasmidObjectSaveData
{
    FPhasmidInventoryData itemData;                                                   // 0x0000 (size: 0x2)
    FPhasmidSaveParamList itemParamList;                                              // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPhasmidObjectSaveDataList
{
    TArray<FPhasmidObjectSaveData> saveDataList;                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPhasmidPanelButtonDefStruct
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Label;                                                                    // 0x0010 (size: 0x10)
    bool closeOnActivate;                                                             // 0x0020 (size: 0x1)
    TSubclassOf<class UUserWidget> widgetClass;                                       // 0x0028 (size: 0x8)
    UClass* handlerObjectClass;                                                       // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FPhasmidPanelDefStruct : public FTableRowBase
{
    UClass* handlerObjectClass;                                                       // 0x0008 (size: 0x8)
    TSubclassOf<class UUserWidget> widgetClass;                                       // 0x0010 (size: 0x8)
    TArray<FPhasmidPanelButtonDefStruct> buttonList;                                  // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FPhasmidPathFlags
{
    uint8 Flags;                                                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FPhasmidPath_FlyPoint
{
    FVector TakeOff;                                                                  // 0x0000 (size: 0xC)
    FVector Fly;                                                                      // 0x000C (size: 0xC)
    float SplineTakeOffKey;                                                           // 0x0018 (size: 0x4)
    float SplineFlyKey;                                                               // 0x001C (size: 0x4)

}; // Size: 0x20

struct FPhasmidPath_JumpPoint
{
    FVector Start;                                                                    // 0x0000 (size: 0xC)
    FVector End;                                                                      // 0x000C (size: 0xC)
    float SplineStartKey;                                                             // 0x0018 (size: 0x4)
    float SplineEndKey;                                                               // 0x001C (size: 0x4)
    float JumpTraversalRate;                                                          // 0x0020 (size: 0x4)
    float ApexHeight;                                                                 // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FPhasmidPath_SwimPoint
{
    FVector Dive;                                                                     // 0x0000 (size: 0xC)
    FVector Swim;                                                                     // 0x000C (size: 0xC)
    float SplineDiveKey;                                                              // 0x0018 (size: 0x4)
    float SplineSwimKey;                                                              // 0x001C (size: 0x4)

}; // Size: 0x20

struct FPhasmidPlayerInventory
{
    int32 treasure;                                                                   // 0x0000 (size: 0x4)
    TArray<FPhasmidInventoryItem> Items;                                              // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPhasmidProjectileEmitterStruct
{
    class UParticleSystem* EmitterTemplate;                                           // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FRotator Rotation;                                                                // 0x0014 (size: 0xC)
    FVector Scale;                                                                    // 0x0020 (size: 0xC)

}; // Size: 0x30

struct FPhasmidProjectileStruct
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    EProjectileType Type;                                                             // 0x0008 (size: 0x1)
    TSubclassOf<class APhasmidProjectileActor> ClassOverride;                         // 0x0010 (size: 0x8)
    bool bSpawnRelativeToOwner;                                                       // 0x0018 (size: 0x1)
    FName SpawnRelativeToChild;                                                       // 0x0020 (size: 0x8)
    FName OwnerSocketName;                                                            // 0x0028 (size: 0x8)
    EProjectileOrientation Orientation;                                               // 0x0030 (size: 0x1)
    EProjectileLobType LobType;                                                       // 0x0031 (size: 0x1)
    FTransform RelativeSpawnTransform;                                                // 0x0040 (size: 0x30)
    class UStaticMesh* StaticMesh;                                                    // 0x0070 (size: 0x8)
    class USkeletalMesh* SkeletalMesh;                                                // 0x0078 (size: 0x8)
    bool bCheckSpawnThroughWall;                                                      // 0x0080 (size: 0x1)
    FVector MeshOffset;                                                               // 0x0084 (size: 0xC)
    FRotator MeshInitialRotation;                                                     // 0x0090 (size: 0xC)
    FPhasmidMeshScaleStruct MeshScaleInterpolation;                                   // 0x009C (size: 0x10)
    class AActor* TargetActor;                                                        // 0x00B0 (size: 0x8)
    FVector TargetLocation;                                                           // 0x00B8 (size: 0xC)
    bool bUseTargetLocation;                                                          // 0x00C4 (size: 0x1)
    class UCurveFloat* SplineTimeCurve;                                               // 0x00C8 (size: 0x8)
    EProjectileRotationType RotationVelocityType;                                     // 0x00D0 (size: 0x1)
    float AngularVelocity;                                                            // 0x00D4 (size: 0x4)
    FVector RotationAxis;                                                             // 0x00D8 (size: 0xC)
    bool bRotationFollowsVelocity;                                                    // 0x00E4 (size: 0x1)
    bool bHomeToPlayer;                                                               // 0x00E5 (size: 0x1)
    TWeakObjectPtr<class AActor> HomingTarget;                                        // 0x00E8 (size: 0x8)
    class UCurveFloat* HorizontalHomingDegreeCurve;                                   // 0x00F0 (size: 0x8)
    class UCurveFloat* VerticalHomingDegreeCurve;                                     // 0x00F8 (size: 0x8)
    float InitialLifeSpan;                                                            // 0x0100 (size: 0x4)
    float InitialSpeed;                                                               // 0x0104 (size: 0x4)
    float MaxSpeed;                                                                   // 0x0108 (size: 0x4)
    bool bFastMovingEnemyProjectile;                                                  // 0x010C (size: 0x1)
    bool bAddOwnerHorizontalSpeed;                                                    // 0x010D (size: 0x1)
    float GravityScale;                                                               // 0x0110 (size: 0x4)
    bool bDestroyOnCollision;                                                         // 0x0114 (size: 0x1)
    bool bExpireWhenOffScreen;                                                        // 0x0115 (size: 0x1)
    bool bShouldBounce;                                                               // 0x0116 (size: 0x1)
    bool bShouldBounceOffAllImmune;                                                   // 0x0117 (size: 0x1)
    float BounceRadius;                                                               // 0x0118 (size: 0x4)
    bool bBounceAngleAffectsFriction;                                                 // 0x011C (size: 0x1)
    float Bounciness;                                                                 // 0x0120 (size: 0x4)
    float BounceFriction;                                                             // 0x0124 (size: 0x4)
    float BounceVelocityStopSimulatingThreshold;                                      // 0x0128 (size: 0x4)
    EProjectileImpactType BounceStopMovingImpactEffect;                               // 0x012C (size: 0x1)
    float ExplosionRadius;                                                            // 0x0130 (size: 0x4)
    float ExplosionDuration;                                                          // 0x0134 (size: 0x4)
    bool bExplodeBouncingOnStopMovement;                                              // 0x0138 (size: 0x1)
    class UAkAudioEvent* OnSpawnAudioEvent;                                           // 0x0140 (size: 0x8)
    FPhasmidProjectileEmitterStruct PersistentParticleEmitter;                        // 0x0148 (size: 0x30)
    class UAkAudioEvent* PersistentAudioEvent;                                        // 0x0178 (size: 0x8)
    FPhasmidProjectileEmitterStruct OnHitParticleEmitter;                             // 0x0180 (size: 0x30)
    class UAkAudioEvent* OnHitAudioEvent;                                             // 0x01B0 (size: 0x8)
    TSubclassOf<class AActor> ImpactDecalClass;                                       // 0x01B8 (size: 0x8)
    FPhasmidProjectileEmitterStruct OnExpireParticleEmitter;                          // 0x01C0 (size: 0x30)
    class UAkAudioEvent* OnExpireAudioEvent;                                          // 0x01F0 (size: 0x8)
    FPhasmidCollisionStruct CollisionData;                                            // 0x0200 (size: 0xF0)

}; // Size: 0x2F0

struct FPhasmidRichTextBoxBlockInfo
{
}; // Size: 0x28

struct FPhasmidRichTextBoxLineInfo
{
}; // Size: 0x20

struct FPhasmidRichTextBoxSegmentInfo
{
}; // Size: 0xF0

struct FPhasmidSaveKeybindParam
{
    FString paramName;                                                                // 0x0000 (size: 0x10)
    FKey paramValue;                                                                  // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FPhasmidSaveParam
{
    FString paramName;                                                                // 0x0000 (size: 0x10)
    float paramValue;                                                                 // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FPhasmidSaveParamList
{
    TArray<FPhasmidSaveParam> saveParams;                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPhasmidSoftReference
{
    TSoftObjectPtr<AActor> SoftPtr;                                                   // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FPhasmidSquadBehaviorTreeData : public FTableRowBase
{
    class UBehaviorTree* Behavior;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPhasmidTargetDataFilterByCollisionTags : public FGameplayTargetDataFilter
{
    FGameplayTagContainer SourceTags;                                                 // 0x0028 (size: 0x20)
    bool MatchesAll;                                                                  // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FPhasmidTargetDataFilterByTeam : public FGameplayTargetDataFilter
{
    class AActor* UnusedActor;                                                        // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FPhasmidTextColor : public FTableRowBase
{
    FString colorName;                                                                // 0x0008 (size: 0x10)
    FString colorRGBA;                                                                // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FPhasmidWaveData
{
    TArray<FPhasmidWaveSpawnData> SpawnData;                                          // 0x0000 (size: 0x10)
    int32 MaxCurrentSpawns;                                                           // 0x0010 (size: 0x4)
    int32 MaxReinforcements;                                                          // 0x0014 (size: 0x4)
    FPhasmidWaveEndConditions NextWaveConditions;                                     // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FPhasmidWaveEndConditions
{
    float WaveTime;                                                                   // 0x0000 (size: 0x4)
    int32 EnemyCount;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPhasmidWaveSpawnData
{
    TSubclassOf<class APhasmidCharacter> SpawnClass;                                  // 0x0000 (size: 0x8)
    TArray<class APhasmidSpawnPoint*> SpawnPoints;                                    // 0x0008 (size: 0x10)
    int32 Num;                                                                        // 0x0018 (size: 0x4)
    EPhasmidWaveSpawnPattern SpawnPattern;                                            // 0x001C (size: 0x1)
    float SpawnRate;                                                                  // 0x0020 (size: 0x4)
    float SpawnTimer;                                                                 // 0x0024 (size: 0x4)
    EInitialOrderType InitialOrders;                                                  // 0x0028 (size: 0x1)
    class AActor* InitialTarget;                                                      // 0x0030 (size: 0x8)
    int32 MaxCurrentSpawns;                                                           // 0x0038 (size: 0x4)
    int32 MaxReinforcements;                                                          // 0x003C (size: 0x4)
    uint32 ReinforcementsSpawned;                                                     // 0x0040 (size: 0x4)
    uint32 SpawnIndex;                                                                // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FPlayerSessionStats
{
    int32 DamageDealt;                                                                // 0x0000 (size: 0x4)
    int32 Kills;                                                                      // 0x0004 (size: 0x4)
    int32 Crits;                                                                      // 0x0008 (size: 0x4)
    int32 PlayerId;                                                                   // 0x000C (size: 0x4)

}; // Size: 0x10

struct FPooledActorArray
{
}; // Size: 0x18

struct FProjectileArray
{
}; // Size: 0x18

struct FRadialDistanceData
{
    uint16 Data;                                                                      // 0x0000 (size: 0xC)

}; // Size: 0xC

struct FSkateLaunchRampStruct : public FTableRowBase
{
    float jumpImpulse;                                                                // 0x0008 (size: 0x4)
    float JumpImpulseAng;                                                             // 0x000C (size: 0x4)
    float JumpHeight;                                                                 // 0x0010 (size: 0x4)
    bool launchQP;                                                                    // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FSpyroCharacterInitialData : public FTableRowBase
{
    float HealthMax;                                                                  // 0x0008 (size: 0x4)
    float GravityScale;                                                               // 0x000C (size: 0x4)
    float MaxAcceleration;                                                            // 0x0010 (size: 0x4)
    float CrouchedHalfHeight;                                                         // 0x0014 (size: 0x4)
    float MaxWalkSpeed;                                                               // 0x0018 (size: 0x4)
    float MaxWalkSpeedCrouched;                                                       // 0x001C (size: 0x4)
    float BrakingDecelerationWalking;                                                 // 0x0020 (size: 0x4)
    float JumpZVelocity;                                                              // 0x0024 (size: 0x4)
    float JumpMaxHoldTime;                                                            // 0x0028 (size: 0x4)
    float JumpGravityFlyUp;                                                           // 0x002C (size: 0x4)
    float SecondJumpZVelocity;                                                        // 0x0030 (size: 0x4)
    float BrakingDecelerationFalling;                                                 // 0x0034 (size: 0x4)
    float AirControl;                                                                 // 0x0038 (size: 0x4)
    float AirControlBoostThreshold;                                                   // 0x003C (size: 0x4)
    float GroundFriction;                                                             // 0x0040 (size: 0x4)
    float FallingLateralFriction;                                                     // 0x0044 (size: 0x4)
    float JumpOffJumpZFactor;                                                         // 0x0048 (size: 0x4)
    float MaxFlySpeed;                                                                // 0x004C (size: 0x4)
    float BrakingDecelerationFlying;                                                  // 0x0050 (size: 0x4)
    float RotationRateYaw;                                                            // 0x0054 (size: 0x4)
    float MaxStepHeight;                                                              // 0x0058 (size: 0x4)
    float WalkableFloorAngle;                                                         // 0x005C (size: 0x4)
    float NavAgentRadius;                                                             // 0x0060 (size: 0x4)
    float NavAgentHeight;                                                             // 0x0064 (size: 0x4)
    float FootstepLoudness;                                                           // 0x0068 (size: 0x4)
    float FootstepMaxRange;                                                           // 0x006C (size: 0x4)
    float GlideDescentMultiplier;                                                     // 0x0070 (size: 0x4)
    float RotationInterpSpeed;                                                        // 0x0074 (size: 0x4)
    float FlyVerticalComponentMult;                                                   // 0x0078 (size: 0x4)
    float GroundMovemementControlRotationMult;                                        // 0x007C (size: 0x4)
    float SideRollControlRotationMult;                                                // 0x0080 (size: 0x4)
    float CamRotationMultRightStick;                                                  // 0x0084 (size: 0x4)
    float CamRotationMultFreeLook;                                                    // 0x0088 (size: 0x4)
    float ConformToGroundInterpSpeed;                                                 // 0x008C (size: 0x4)
    float UnderwaterPitchRate;                                                        // 0x0090 (size: 0x4)
    float UnderwaterYawRate;                                                          // 0x0094 (size: 0x4)
    float FlightYawRate;                                                              // 0x0098 (size: 0x4)
    float FlightPitchRate;                                                            // 0x009C (size: 0x4)
    float FlightMaxPitchAngle;                                                        // 0x00A0 (size: 0x4)

}; // Size: 0xA8

struct FStateReplicationInfo
{
    class UPhasmidStateComponent* ReplicatedState;                                    // 0x0000 (size: 0x8)
    float Timestamp;                                                                  // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FSubObjectiveDefinition : public FTableRowBase
{
    FText Description;                                                                // 0x0008 (size: 0x18)
    int32 ObjectiveGoal;                                                              // 0x0020 (size: 0x4)
    TEnumAsByte<ESubObjectiveType::Type> SubObjectiveType;                            // 0x0024 (size: 0x1)
    bool AddByDefault;                                                                // 0x0025 (size: 0x1)
    bool AutoComplete;                                                                // 0x0026 (size: 0x1)

}; // Size: 0x28

struct FTriggerVolumeInfo
{
    ETriggerVolumeCommand Command;                                                    // 0x0000 (size: 0x1)
    bool OneShot;                                                                     // 0x0001 (size: 0x1)

}; // Size: 0x3

class AEncounterManager : public ATriggerVolume
{
    TArray<FPatrolPath> PatrolPaths;                                                  // 0x0350 (size: 0x10)
    int32 MaximumMeleePositions;                                                      // 0x0360 (size: 0x4)
    float InnerMeleeStandoffDistance;                                                 // 0x0364 (size: 0x4)
    float OuterMeleeStandoffDistance;                                                 // 0x0368 (size: 0x4)
    int32 MaximumSimultaneousAttackers;                                               // 0x036C (size: 0x4)
    float MeleePositioningRelaxationDist;                                             // 0x0370 (size: 0x4)
    bool bUseMeleeRateLimit;                                                          // 0x0374 (size: 0x1)
    float MaximumMeleeAttackRate;                                                     // 0x0378 (size: 0x4)
    float MeleeAttackInterval;                                                        // 0x037C (size: 0x4)
    float MeleeAttackDuration;                                                        // 0x0380 (size: 0x4)
    float MeleeTauntFrequency;                                                        // 0x0384 (size: 0x4)
    float TauntDuration;                                                              // 0x0388 (size: 0x4)
    bool bUseRangedRateLimit;                                                         // 0x038C (size: 0x1)
    float MaximumRangedAttackRate;                                                    // 0x0390 (size: 0x4)
    float RangedAttackInterval;                                                       // 0x0394 (size: 0x4)
    float RangedAttackDuration;                                                       // 0x0398 (size: 0x4)
    float MaxTargetDistance;                                                          // 0x039C (size: 0x4)
    float RepositionDistanceThresh;                                                   // 0x03A0 (size: 0x4)
    bool ShowDebug;                                                                   // 0x03A4 (size: 0x1)
    FEncounterManagerOnEncounterActivated OnEncounterActivated;                       // 0x03A8 (size: 0x10)
    FEncounterManagerOnEncounterCompleted OnEncounterCompleted;                       // 0x03B8 (size: 0x10)
    FEncounterManagerOnCombatStarted OnCombatStarted;                                 // 0x03C8 (size: 0x10)
    FEncounterManagerOnCombatEnded OnCombatEnded;                                     // 0x03D8 (size: 0x10)
    FEncounterManagerOnEnemyAlerted OnEnemyAlerted;                                   // 0x03E8 (size: 0x10)

    void SetOverrideTargetForActor(class AActor* Actor, class AActor* OverrideTarget);
    void RegisterRangedAttack(class AActor* Actor);
    void RegisterMeleeAttack(class AActor* Actor);
    class AEncounterManager* GetEncounter(class AActor* Actor);
    void EncounterStop();
    void EncounterStart();
    void EncounterResume();
    void EncounterPause();
    void EncounterKillAll();
}; // Size: 0x648

class AFalconAIController : public AAIController
{
    FFalconAIControllerOnFalconAIUnpossessed OnFalconAIUnpossessed;                   // 0x0418 (size: 0x10)

}; // Size: 0x428

class AFalconEnemyLevelScriptActor : public ALevelScriptActor
{
}; // Size: 0x328

class AFalconLevelSequenceActor : public ALevelSequenceActor
{
    float StartingCameraBlendTime;                                                    // 0x03B8 (size: 0x4)
    float EndingCameraBlendTime;                                                      // 0x03BC (size: 0x4)
    FFalconLevelSequenceActorBP_OnSequenceStarted BP_OnSequenceStarted;               // 0x03C0 (size: 0x10)
    FFalconLevelSequenceActorBP_OnSequenceFinished BP_OnSequenceFinished;             // 0x03D0 (size: 0x10)

    void OnSequenceStarted();
    void OnSequenceFinished();
}; // Size: 0x3F0

class APhasmidAIController : public AAIController
{
    class UPhasmidEnemyBrainComponent* EnemyBrainComponent;                           // 0x0420 (size: 0x8)
    FGameplayTagContainer TagContainer;                                               // 0x0428 (size: 0x20)
    FPhasmidAIOrdersHandle CurrentOrdersHandle;                                       // 0x0448 (size: 0x10)

    void SetTeamId(EPhasmidTeamId newTeamId);
    bool IssueInitialOrders(class UPhasmidAIConfiguratorComponent* AIConfig);
    EPhasmidTeamId GetTeamId();
    FGameplayTag CreateGameplayTagFromString(FString InputString);
}; // Size: 0x460

class APhasmidAbilityBaseActor : public AActor
{
    FGameplayTagContainer InitialGameplayTags;                                        // 0x0330 (size: 0x20)
    class UGameplayAbilitySet* AbilitySet;                                            // 0x0350 (size: 0x8)
    EPhasmidTeamId TeamId;                                                            // 0x035A (size: 0x1)

    void SetTeamId(EPhasmidTeamId newTeamId);
    void OnRep_TeamId(EPhasmidTeamId oldTeamId);
    void InitializeGameplayTagsFromInstigator(const FGameplayTagContainer& TagContainer, TArray<FString> Suffixes);
    class UAbilitySystemComponent* GetASC();
}; // Size: 0x360

class APhasmidBasicProjectile : public APhasmidProjectileActor
{

    void OnProjectileStop(const FHitResult& ImpactResult);
}; // Size: 0x638

class APhasmidBeamDamage : public APhasmidAbilityBaseActor
{
    FVector StartPointOffset;                                                         // 0x0378 (size: 0xC)
    TArray<FVector> TraceEndPoints;                                                   // 0x0388 (size: 0x10)
    float TraceRadius;                                                                // 0x0398 (size: 0x4)
    bool bDoAllTracesEveryFrame;                                                      // 0x039C (size: 0x1)
    FName DamageGroupName;                                                            // 0x03A0 (size: 0x8)
    float StartDamagingDelay;                                                         // 0x03A8 (size: 0x4)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;                                        // 0x03AC (size: 0x1)
    bool bDebugDraw;                                                                  // 0x03AD (size: 0x1)
    class UPhasmidAbilitySystemComponent* AbilitySystemComponent;                     // 0x03B0 (size: 0x8)

    bool IsDelayOver();
    float GetTimeAliveRatio();
}; // Size: 0x3F8

class APhasmidBoxRegion : public APhasmidCollisionRegion
{
    FVector InitialBoxExtent;                                                         // 0x0518 (size: 0xC)

}; // Size: 0x528

class APhasmidCapsuleRegion : public APhasmidCollisionRegion
{
    float InitialHalfHeight;                                                          // 0x0518 (size: 0x4)
    float InitialRadius;                                                              // 0x051C (size: 0x4)

}; // Size: 0x520

class APhasmidCharacter : public ACharacter
{
    float BaseTurnRate;                                                               // 0x0748 (size: 0x4)
    float BaseLookUpRate;                                                             // 0x074C (size: 0x4)
    FName InitialAttributeRowName;                                                    // 0x0750 (size: 0x8)
    class UDataTable* InitialAttributeDataTable;                                      // 0x0758 (size: 0x8)
    FPhasmidCharacterOnInput OnInput;                                                 // 0x0760 (size: 0x10)
    uint8 bForceSpawnAIController;                                                    // 0x0770 (size: 0x1)
    FGameplayTagContainer InitialGameplayTags;                                        // 0x0778 (size: 0x20)
    class UGameplayAbilitySet* AbilitySet;                                            // 0x07C8 (size: 0x8)
    class UCombatPoolComponent* CombatPool;                                           // 0x07D0 (size: 0x8)
    EPhasmidTeamId TeamId;                                                            // 0x07D9 (size: 0x1)
    class UPhasmidAbilitySystemComponent* AbilitySystem;                              // 0x07E0 (size: 0x8)
    FPhasmidCharacterOnTakeDamageDelegate OnTakeDamageDelegate;                       // 0x07E8 (size: 0x10)
    FPhasmidCharacterOnDeathDelegate OnDeathDelegate;                                 // 0x07F8 (size: 0x10)
    FPhasmidCharacterOnDealDamageDelegate OnDealDamageDelegate;                       // 0x0808 (size: 0x10)

    void SplineJump(class USplineComponent* Spline);
    bool ShouldCheckPushOffLedge();
    void SetTeamId(EPhasmidTeamId newTeamId);
    void PredictTagAdded(FGameplayTag TagAdded, float Time);
    void PredictRootMotionMoveToForce(FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
    void PredictRootMotionJumpForce(FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
    void OnRep_TeamId(EPhasmidTeamId oldTeamId);
    void OnInputDelegate__DelegateSignature(class APhasmidCharacter* Character, FGameplayTag InputTag, bool bPressed);
    bool IsPressed(FGameplayTag Input);
    bool IsJumpProvidingForce();
    void HandleInput(FGameplayTag Input, bool bPressed);
    void BP_FellOutOfWorld();
}; // Size: 0x820

class APhasmidCollisionRegion : public APhasmidAbilityBaseActor
{
    float AnimationId;                                                                // 0x0378 (size: 0x4)
    class UAnimSequenceBase* SpawningAnimation;                                       // 0x0380 (size: 0x8)
    bool bEnableOnPlay;                                                               // 0x0388 (size: 0x1)
    ECollisionRegionFilter CollisionFilter;                                           // 0x0389 (size: 0x1)
    bool bCollideWithOwner;                                                           // 0x038A (size: 0x1)
    class UPhasmidAbilitySystemComponent* AbilitySystemComponent;                     // 0x0390 (size: 0x8)
    float CollisionInterval;                                                          // 0x0398 (size: 0x4)
    float EndCollisionInterval;                                                       // 0x039C (size: 0x4)
    float CollisionMagnitude;                                                         // 0x03A0 (size: 0x4)
    FGameplayTagContainer CollisionTags;                                              // 0x03A8 (size: 0x20)
    float OverrideLifeTime;                                                           // 0x03C8 (size: 0x4)
    bool bInteractWithWalls;                                                          // 0x03CC (size: 0x1)
    FPhasmidCollisionRegionOnRegionOverlap OnRegionOverlap;                           // 0x03D0 (size: 0x10)
    FPhasmidCollisionEmitterStruct ImpactEmitterSettings;                             // 0x03E0 (size: 0x38)
    FName CollisionChannel;                                                           // 0x0418 (size: 0x8)
    bool bHideActorOnRelease;                                                         // 0x0420 (size: 0x1)
    bool bSkipDamageExecution;                                                        // 0x0421 (size: 0x1)
    TArray<FHitResult> PausedHits;                                                    // 0x0428 (size: 0x10)
    class AActor* RegionOwner;                                                        // 0x0448 (size: 0x8)
    ECollisionRegionShape Shape;                                                      // 0x0450 (size: 0x1)
    TSet<FPhasmidCollisionOverlapInfo> OverlappedActors;                              // 0x0458 (size: 0x50)
    TSet<FPhasmidCollisionOverlapInfo> OverlapEndedActors;                            // 0x04A8 (size: 0x50)
    FPhasmidDamageGroup DamageGroup;                                                  // 0x04F8 (size: 0x18)
    class UPrimitiveComponent* CollisionComponent;                                    // 0x0510 (size: 0x8)

    void Spawn(bool bEnableCollision);
    void SetupSphere(const FPhasmidCollisionStruct& CollisionData);
    void SetupPrimitiveComponent(class UPrimitiveComponent* Primitive);
    void SetupFromCollisionStruct(const FPhasmidCollisionStruct& CollisionData);
    void SetupCapsule(const FPhasmidCollisionStruct& CollisionData);
    void SetupBox(const FPhasmidCollisionStruct& CollisionData);
    void SetRegionOwner(class AActor* NewOwner);
    void ReceiveOnLifeSpanExpired();
    void OnComponentOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnCollisionRegionOverlap(class APhasmidCollisionRegion* Region, class AActor* OverlappedActor, class UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);
    void EnableCollision();
    bool CanHitActor(class AActor* Actor, class UPrimitiveComponent* HitComponent);
}; // Size: 0x518

class APhasmidCullTriggerActor : public AActor
{
    TArray<class APhasmidCullVolumeActor*> EnableOnExitRedSide;                       // 0x0318 (size: 0x10)
    TArray<class APhasmidCullVolumeActor*> EnableOnExitBlueSide;                      // 0x0328 (size: 0x10)
    class UBoxComponent* TriggerVolume;                                               // 0x0338 (size: 0x8)

}; // Size: 0x340

class APhasmidCullVolumeActor : public AActor
{
    uint8 bUseTriggers;                                                               // 0x0318 (size: 0x1)
    uint8 bUseViewingAngle;                                                           // 0x0318 (size: 0x1)
    uint8 bDebugPrintTriggerState;                                                    // 0x0318 (size: 0x1)
    TArray<TSoftObjectPtr<AActor>> CullActors;                                        // 0x0320 (size: 0x10)
    bool bAllowBroadcast;                                                             // 0x0330 (size: 0x1)
    FPhasmidCullVolumeActorTriggered triggered;                                       // 0x0338 (size: 0x10)
    bool bRefreshCullActors;                                                          // 0x0348 (size: 0x1)
    uint8 bNoCullOnBeginPlay;                                                         // 0x034C (size: 0x1)
    class UBoxComponent* TriggerVolume;                                               // 0x0350 (size: 0x8)

}; // Size: 0x358

class APhasmidDestructibleProjectile : public APhasmidBasicProjectile
{
}; // Size: 0x638

class APhasmidFollowSplineProjectile : public APhasmidProjectileActor
{
}; // Size: 0x648

class APhasmidGameInventoryMonitor : public AActor
{
    bool autoUpdate;                                                                  // 0x0318 (size: 0x1)
    TMap<class FString, class FPhasmidInventoryMap> gameMap;                          // 0x0320 (size: 0x50)

    void getLevelInventoryTotals(FString Level, TArray<FPhasmidInventoryItem>& itemList);
    void getInventoryTotalsByLevelsAndTypes(const TArray<FString>& levelList, const TArray<EInventoryType>& itemTypeList, TArray<FPhasmidInventoryItem>& totalsList);
    void getGameInventoryTotals(TArray<FPhasmidInventoryItem>& itemList);
    void doUpdateInventory();
}; // Size: 0x370

class APhasmidGameMode : public AGameModeBase
{
    class UPhasmidAIManager* AIManager;                                               // 0x03B8 (size: 0x8)

}; // Size: 0x3C0

class APhasmidGameState : public AGameStateBase
{
    class UPhasmidCombatCoordinatorComponent* CombatCoordinator;                      // 0x0360 (size: 0x8)
    TArray<FPlayerSessionStats> PlayerSessionStatsArray;                              // 0x0368 (size: 0x10)

    void PlayerDealtDamage(class APawn* PlayerPawn, class AActor* DamagingActor, class AActor* DamagedActor, int32 Damage, bool isCrit, bool IsKill);
    void OnRep_PlayerSessionStatsArray();
    FPlayerSessionStats GetStatsByPawn(class APawn* PlayerPawn);
    void BP_OnRep_PlayerSessionStatsArray();
}; // Size: 0x378

class APhasmidLevelActor : public APhasmidAbilityBaseActor
{
    FPhasmidLevelActorOnAbilityEndOverlap OnAbilityEndOverlap;                        // 0x0368 (size: 0x10)
    class UPhasmidAbilitySystemComponent* AbilitySystem;                              // 0x0378 (size: 0x8)
    FDataTableRowHandle InitialAttributeRowHandle;                                    // 0x0380 (size: 0x10)
    bool bDead;                                                                       // 0x0390 (size: 0x1)
    FPhasmidLevelActorOnTakeDamageDelegate OnTakeDamageDelegate;                      // 0x0398 (size: 0x10)
    FPhasmidLevelActorOnDeathDelegate OnDeathDelegate;                                // 0x03A8 (size: 0x10)
    FPhasmidLevelActorOnDealDamageDelegate OnDealDamageDelegate;                      // 0x03B8 (size: 0x10)

    void TriggerOverlapAbility(class AActor* OtherActor, FGameplayTag TriggerTag);
    void Client_OnShieldBreak(const FGameplayEventData Payload);
    void Client_OnDeath(const FGameplayEventData Payload);
    void Client_OnDamage(const FGameplayEventData Payload);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void AbilityEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FGameplayTag TriggerTag);
}; // Size: 0x3C8

class APhasmidLevelInventoryMonitor : public AActor
{
    TMap<EInventoryType, int32> itemMap;                                              // 0x0318 (size: 0x50)

    void doUpdateInventory();
}; // Size: 0x368

class APhasmidLightingManager : public AActor
{
    TArray<class UObject*> Lights;                                                    // 0x0318 (size: 0x10)
    FLinearColor LevelTransitionColor;                                                // 0x0338 (size: 0x10)

    void TransitionLightingManagers(float fadeTime, class APhasmidLightingManager* OutgoingLightingManager, class APhasmidLightingManager* IncomingLightingManager);
    void SetNewLightingManager(class APhasmidLightingManager* OutgoingLightingManager, class APhasmidLightingManager* IncomingLightingManager, bool Delay);
    void SetEnableSkylight(bool Enabled);
    void ScaleIntensity(float IntensityCoefficient);
}; // Size: 0x348

class APhasmidNavMesh : public ARecastNavMesh
{
    class APhasmidNavPostManager* NavPostManager;                                     // 0x07F8 (size: 0x8)

}; // Size: 0x800

class APhasmidNavPostManager : public AActor
{
    float MaxCoverDistance;                                                           // 0x0318 (size: 0x4)
    float CoverWeight;                                                                // 0x031C (size: 0x4)
    float CoverExponent;                                                              // 0x0320 (size: 0x4)
    float ViewWeight;                                                                 // 0x0324 (size: 0x4)
    float ViewExponent;                                                               // 0x0328 (size: 0x4)
    float ResolutionHorizontal;                                                       // 0x032C (size: 0x4)
    float ResolutionVertical;                                                         // 0x0330 (size: 0x4)
    TArray<FPhasmidNavPost> NavPosts;                                                 // 0x0338 (size: 0x10)
    class ARecastNavMesh* NavMesh;                                                    // 0x0348 (size: 0x8)
    bool DebugVisualize;                                                              // 0x0350 (size: 0x1)

}; // Size: 0x358

class APhasmidPatrolPath : public APhasmidTaggedTargetPoint
{
    TArray<FPhasmidPath_JumpPoint> Jumps;                                             // 0x0340 (size: 0x10)
    TArray<FPhasmidPath_SwimPoint> Swim;                                              // 0x0350 (size: 0x10)
    TArray<FPhasmidPath_FlyPoint> Fly;                                                // 0x0360 (size: 0x10)
    class USplineComponent* SplineComponent;                                          // 0x0370 (size: 0x8)

}; // Size: 0x378

class APhasmidPlayerController : public APlayerController
{
    bool bUseBlueprintCameraInput;                                                    // 0x0760 (size: 0x1)

    void SetInputCameraAxisY(float Val);
    void SetInputCameraAxisX(float Val);
    void SetEnemyTickInterval(float Interval);
    void GetSkateInputs(bool& trick, bool& Jump, bool& turbo);
    void GetPlayerImage(EImageSize DesiredSize, FGetPlayerImageOnGetPlayerImageComplete OnGetPlayerImageComplete);
    FVector2D GetMoveAxes();
    FVector2D GetCameraAxes();
}; // Size: 0x790

class APhasmidPlayerStart : public APlayerStart
{
}; // Size: 0x348

class APhasmidPlayerState : public APlayerState
{
    int32 AmmoDropCount_Energy;                                                       // 0x03D0 (size: 0x4)
    FVector2D AmmoDropRange_Energy;                                                   // 0x03D4 (size: 0x8)
    int32 AmmoDropCount_Ballistic;                                                    // 0x03DC (size: 0x4)
    FVector2D AmmoDropRange_Ballistic;                                                // 0x03E0 (size: 0x8)

    void OnEnemyKilled(class APlayerController* Controller, int32 KillValue, FVector EnemyLocation);
}; // Size: 0x3E8

class APhasmidProjectileActor : public APhasmidCollisionRegion
{
    class UMovementComponent* MoveComponent;                                          // 0x0518 (size: 0x8)
    class UMeshComponent* MeshComponent;                                              // 0x0520 (size: 0x8)
    class UTfbAkComponent* AudioComponent;                                            // 0x0528 (size: 0x8)
    TSubclassOf<class AActor> ImpactDecalClass;                                       // 0x0530 (size: 0x8)
    FPhasmidProjectileEmitterStruct PersistentParticleEmitterSettings;                // 0x0538 (size: 0x30)
    FPhasmidProjectileEmitterStruct OnHitParticleEmitterSettings;                     // 0x0568 (size: 0x30)
    FPhasmidProjectileEmitterStruct OnExpireParticleEmitterSettings;                  // 0x0598 (size: 0x30)
    FPhasmidProjectileActorProjectileDestroyed ProjectileDestroyed;                   // 0x05C8 (size: 0x10)
    class UParticleSystemComponent* PersistentEmitter;                                // 0x05D8 (size: 0x8)
    class UAkAudioEvent* OnHitAudioEvent;                                             // 0x05E0 (size: 0x8)
    class UAkAudioEvent* OnExpireAudioEvent;                                          // 0x05E8 (size: 0x8)
    EProjectileRotationType RotationVelocityType;                                     // 0x05F0 (size: 0x1)
    float AngularVelocity;                                                            // 0x05F4 (size: 0x4)
    FVector RotationAxis;                                                             // 0x05F8 (size: 0xC)
    EProjectileImpactType BounceStopMovingImpactEffect;                               // 0x0609 (size: 0x1)
    float ExplosionRadius;                                                            // 0x060C (size: 0x4)
    float ExplosionDuration;                                                          // 0x0610 (size: 0x4)
    bool bExplodeBouncingOnStopMovement;                                              // 0x0614 (size: 0x1)
    float ProjectileMeshStartScale;                                                   // 0x0618 (size: 0x4)
    FVector ProjectileMeshScaleInterpSettings;                                        // 0x061C (size: 0xC)

    void ReceiveProjectileStopped(const FHitResult& Hit);
    void ReceiveProjectileHit(class AActor* OverlappedActor, class UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);
    void ReceiveProjectileFired();
    void OnExplosionExpired();
    void OnCollisionRegionOverlap(class APhasmidCollisionRegion* Region, class AActor* OverlappedActor, class UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);
}; // Size: 0x638

class APhasmidSkateboard : public AActor
{

    void OnVFXUpdate(class ACharacter* charOwner, float dt, FName State, float Speed);
    void OnVFXEvent(class ACharacter* charOwner, FName evtName);
}; // Size: 0x318

class APhasmidSkeletalProjectile : public APhasmidBasicProjectile
{
}; // Size: 0x638

class APhasmidSkyLight : public ASkyLight
{
}; // Size: 0x328

class APhasmidSmoothedLevelActor : public APhasmidLevelActor
{
}; // Size: 0x3C8

class APhasmidSniperPoint : public APhasmidTaggedTargetPoint
{
    uint8 bEnabled;                                                                   // 0x0348 (size: 0x1)

    bool CanBeClaimed();
}; // Size: 0x350

class APhasmidSpawnPoint : public APhasmidTaggedTargetPoint
{
    float Radius;                                                                     // 0x0340 (size: 0x4)
    FVector Offset;                                                                   // 0x0344 (size: 0xC)
    uint8 bEnabled;                                                                   // 0x0350 (size: 0x1)

    FTransform GetSpawnTransform(const FVector& AdditionalOffset);
}; // Size: 0x358

class APhasmidSphereRegion : public APhasmidCollisionRegion
{
    float InitialSphereRadius;                                                        // 0x0518 (size: 0x4)

}; // Size: 0x520

class APhasmidTaggedTargetPoint : public ATargetPoint
{
    FGameplayTagContainer TagContainer;                                               // 0x0320 (size: 0x20)

}; // Size: 0x340

class ASpyroCharacter : public APhasmidCharacter
{
    class UFollowCameraComponent* FollowCamera;                                       // 0x0820 (size: 0x8)
    uint8 bIsChargePressed;                                                           // 0x0828 (size: 0x1)
    uint8 bDivingDisabledVolume;                                                      // 0x0828 (size: 0x1)
    uint8 bDivingDisabledShallow;                                                     // 0x0828 (size: 0x1)
    FSpyroCharacterAbilityActionDispatcher AbilityActionDispatcher;                   // 0x0830 (size: 0x10)
    FSpyroCharacterOnCustomProjectileFiredDispatcher OnCustomProjectileFiredDispatcher; // 0x0848 (size: 0x10)
    FSpyroCharacterOnRapidFireAbilityActivatedDispatcher OnRapidFireAbilityActivatedDispatcher; // 0x0858 (size: 0x10)

    void StopCharge();
    void OnSetSkateboardState(FName stateName);
    void OnRapidFireAbilityActivatedDelegate__DelegateSignature(bool IsActive);
    void OnCustomProjectileFiredDelegate__DelegateSignature(class APhasmidProjectileActor* ProjectileActor);
    void JumpInputExpired();
    void DoFireAttack();
    void DoCharge();
    void AbilityActionDelegate__DelegateSignature(FGameplayTag InputAction, const FGameplayEventData Payload);
}; // Size: 0x870

class AStackCameraManager : public APlayerCameraManager
{
    TArray<FCameraContext> CameraContextStack;                                        // 0x1AD8 (size: 0x10)
    TArray<FCameraContext> PendingDeleteContexts;                                     // 0x1AE8 (size: 0x10)

    void ShowCameraDebugInfo(bool bShowDebugInfo);
    bool PopViewTargetWithBlendOverride(class AActor* ExistingViewTarget, float TimeToBlendOut, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool bDeleteActorAfterBlend);
    bool PopViewTarget(class AActor* ExistingViewTarget, float TimeToBlendOut, bool bDeleteActorAfterBlend, bool bUnlockViewTarget);
    void ClearStackToDefault();
    void BP_PushViewTarget(class AActor* NewViewTarget, FViewTargetTransitionParams TransitionParams);
    void BP_PushManagedCamera(class AActor* ManagedCamera, FCameraSettings Settings, FViewTargetTransitionParams TransitionParams);
}; // Size: 0x1B20

class IDamagingActorInterface : public IInterface
{
}; // Size: 0x28

class IFalconGameStateInterface : public IInterface
{

    void SetEnableLoadScreen(bool Enable, float fadeTime);
    void OnCutsceneEnd();
    void OnCutsceneBegin();
    bool InCutscene();
    class ULevel* GetCurrentLevelForSaveData(FString& LevelName);
    void AwardLifeFromSkillPoint();
}; // Size: 0x28

class IFalconIGCInterface : public IInterface
{

    void PlayIGC(const FPlayIGCOnFinished& OnFinished);
}; // Size: 0x28

class IFalconLevelScriptInterface : public IInterface
{

    void OnCutsceneEnd();
    void OnCutsceneBegin();
}; // Size: 0x28

class IFalconSignalsInterface : public IInterface
{

    void RecieveSignals(class AActor* SenderActor, const FGameplayTagContainer& Signals);
}; // Size: 0x28

class IPhasmidAIOrdersInterface : public IInterface
{
}; // Size: 0x28

class IPhasmidAbilityManagerInterface : public IInterface
{

    bool GetAbilityDataForInput(int32 InputAction, class UPhasmidAbilitySystemComponent*& AbilitySystemComponent, FGameplayTag& EventTag, FGameplayEventData& Payload);
}; // Size: 0x28

class IPhasmidCameraManager : public IInterface
{

    void PCM_PushViewTarget(class AActor* ViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
    void PCM_PopViewTarget(class AActor* ViewTarget, float BlendTime);
}; // Size: 0x28

class IPhasmidDamageEffectInterface : public IInterface
{

    class UAbilitySystemComponent* GetEffectSourceASC();
}; // Size: 0x28

class IPhasmidDamageGroupInterface : public IInterface
{
}; // Size: 0x28

class IPhasmidDamageInterface : public IInterface
{

    bool OnShieldBreak(const FGameplayEventData Payload);
    bool OnHealthRestored(const FGameplayEventData Payload);
    bool OnDeath(const FGameplayEventData Payload);
    bool OnDealDamage(const FGameplayEventData Payload);
    bool OnDamage(const FGameplayEventData Payload);
    bool IsImmuneToDamage(const FGameplayTagContainer& InTagContainer, class UPrimitiveComponent* HitComponent);
    bool IsDead();
    bool IsChargeTarget();
}; // Size: 0x28

class IPhasmidEncounterSystemObserver : public IInterface
{

    bool OnEnemyAlerted(class AEncounterManager* Encounter, class AActor* AlertedEnemy, bool FirstAlert);
    bool OnEncounterStarted(class AEncounterManager* Encounter);
    bool OnEncounterCompleted(class AEncounterManager* Encounter);
    bool OnCombatStarted(class AEncounterManager* Encounter);
    bool OnCombatEnded(class AEncounterManager* Encounter);
}; // Size: 0x28

class IPhasmidEnemyObserverInterface : public IInterface
{

    void OnEnemyDeath(class AActor* Enemy);
}; // Size: 0x28

class IPhasmidHudDialogCallbackInterface : public IInterface
{

    void HudDialogOptionSelected(int32 selectedIndex);
}; // Size: 0x28

class IPhasmidHudDialogInterface : public IInterface
{

    void HudDialogShow(const class AActor* dialogCharacter, const FText& DialogText, float displaySeconds);
    void HudDialogHide();
    void HudDialogBalloonist(const class AActor* Owner, const FText& question, const TArray<FText>& destinations, int32 defaultDestinationIndex);
    void HudDialogAskQuestionAdv(const class AActor* Owner, const class AActor* dialogCharacter, const FText& question, float questionVOSecs, const TArray<FText>& answers, int32 defaultAnswerIndex);
    void HudDialogAskQuestion(const class AActor* Owner, const class AActor* dialogCharacter, const FText& question, const TArray<FText>& answers);
}; // Size: 0x28

class IPhasmidInventoryInterface : public IInterface
{

    int32 getInventory(TArray<FPhasmidInventoryItem>& Items);
}; // Size: 0x28

class IPhasmidInventoryItemInterface : public IInterface
{

    void setSpawnedData(class UObject* spawner, int32 ID);
    void setItemSaveData(bool serializeData, FString saveName, int32 ID);
    EInventoryType getInventoryType();
}; // Size: 0x28

class IPhasmidInventorySpawnerInterface : public IInterface
{

    void spawnedInventoryItemCollected(int32 ID);
}; // Size: 0x28

class IPhasmidManagedCameraInterface : public IInterface
{

    void PMCI_SetOffset(float Offset, float Time);
    float PMCI_GetCurrentOffset();
    void PMCI_ApplyCameraSettings(FCameraSettings Settings);
}; // Size: 0x28

class IPhasmidManagerSaveInterface : public IInterface
{

    bool SetGlobalFloatValue(FString Key, float Value);
    bool SetChangedKeybindValue(FString Key, FKey Value);
    void SetActiveSlot(int32 slotIndex);
    void SetActiveGame(int32 gameIndex);
    void restoreObjectDataFromSave(const class AActor* Actor);
    bool RemoveChangedKeybindValue(FString Key);
    void objectStoreSerializedDataByName(FString ObjectName, const FPhasmidObjectSaveDataList& dataList);
    void objectStoreSerializedData(const class AActor* Actor, const FPhasmidObjectSaveDataList& dataList);
    void objectStoreCheckpointDataByName(FString Name, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpoint);
    void objectStoreCheckpointData(const class AActor* Actor, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpoint);
    void objectSaveDataUpdated(const class AActor* Actor);
    bool getSaveDataForActorByName(FString ActorName, FString Level, FPhasmidObjectSaveDataList& dataList);
    bool getSaveDataForActor(const class AActor* Actor, FString Level, FPhasmidObjectSaveDataList& dataList);
    bool GetGlobalFloatValue(FString Key, float& Value);
    bool getCheckpointDataForActorByName(FString ActorName, FPhasmidObjectSaveDataList& dataList);
    bool GetChangedKeybindValue(FString Key, FKey& Value);
    void DeleteSave();
}; // Size: 0x28

class IPhasmidObjectSaveInterface : public IInterface
{

    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
}; // Size: 0x28

class IPhasmidObserverInterface : public IInterface
{

    void RegisterObserver(class UObject* Observer);
}; // Size: 0x28

class IPhasmidSquadMemberInterface : public IInterface
{

    bool SetTarget(class AActor* Target);
    bool SetSquadOrders(FString Orders, class AActor* Target);
    bool SetMoveToLocation(FVector Location);
    bool SetAllowedToTaunt(bool Allowed);
    bool SetAllowedToAttack(bool Allowed);
    bool SetAlerted(bool alerted);
    void OnFailedToFindCover();
    void OnCoverAssigned(FVector Start, FVector End, FRotator Orientation);
    bool IsDead();
    bool IsAlerted();
}; // Size: 0x28

class IPhasmidWorldEventHandlerInterface : public IInterface
{

    void OnEventLevelRemovedFromWorld(FString LevelName);
    void OnEventLevelAddedToWorld(FString LevelName);
}; // Size: 0x28

class IPooledActorInterface : public IInterface
{

    void SetPoolOwner(class AActor* Owner);
    void ReceiveStartSpawnFromPool();
    void ReceiveOnReleaseToPool();
    void ReceiveFinishSpawnAndEnable();
    class AActor* GetPoolOwner();
    bool DestroyWithOwner();
}; // Size: 0x28

class IPropertyChangeComponentInterface : public IInterface
{

    bool PropogatePropertyChange();
}; // Size: 0x28

class UAnimNotifyState_SpawnCollisionRegion : public UAnimNotifyState
{
    int32 RegionId;                                                                   // 0x0030 (size: 0x4)
    FPhasmidCollisionStruct CollisionData;                                            // 0x0040 (size: 0xF0)

}; // Size: 0x130

class UAnimNotify_PlayCameraShake : public UAnimNotify
{
    TSubclassOf<class UCameraShake> ShakeClass;                                       // 0x0038 (size: 0x8)
    float Scale;                                                                      // 0x0040 (size: 0x4)
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;                                // 0x0044 (size: 0x1)
    FRotator UserPlaySpaceRot;                                                        // 0x0048 (size: 0xC)

}; // Size: 0x58

class UAnimNotify_PlayForceFeedback : public UAnimNotify
{
    class UForceFeedbackEffect* ForceFeedbackEffect;                                  // 0x0038 (size: 0x8)
    bool bLooping;                                                                    // 0x0040 (size: 0x1)
    bool bIgnoreTimeDilation;                                                         // 0x0041 (size: 0x1)
    FName Tag;                                                                        // 0x0048 (size: 0x8)

}; // Size: 0x50

class UAnimNotify_SpawnProjectileActor : public UAnimNotify
{
    FName Description;                                                                // 0x0038 (size: 0x8)
    FPhasmidProjectileStruct ProjectileData;                                          // 0x0040 (size: 0x2F0)

}; // Size: 0x330

class UCombatPoolComponent : public UActorComponent
{
    int32 RegionCount;                                                                // 0x00F0 (size: 0x4)
    int32 ProjectileCount;                                                            // 0x00F4 (size: 0x4)
    int32 SplineProjectileCount;                                                      // 0x00F8 (size: 0x4)
    TMap<TSubclassOf<APhasmidProjectileActor>, int32> BlueprintProjectileCounts;      // 0x0100 (size: 0x50)
    TArray<class APhasmidCollisionRegion*> SpawnedRegions;                            // 0x0150 (size: 0x10)
    TArray<class APhasmidCollisionRegion*> Regions;                                   // 0x0160 (size: 0x10)
    TArray<class APhasmidProjectileActor*> BasicProjectiles;                          // 0x0170 (size: 0x10)
    TArray<class APhasmidProjectileActor*> SplineProjectiles;                         // 0x0180 (size: 0x10)
    TMap<class UClass*, class FProjectileArray> BlueprintProjectiles;                 // 0x0190 (size: 0x50)
    bool bForceSpawningRegionDuringInit;                                              // 0x01E0 (size: 0x1)
    TMap<UClass*, int32> PooledActorCounts;                                           // 0x01F0 (size: 0x50)
    TMap<class UClass*, class FPooledActorArray> PooledActors;                        // 0x0240 (size: 0x50)
    TArray<class AActor*> SpawnedActors;                                              // 0x0290 (size: 0x10)
    bool bGuaranteeAcquirePooled;                                                     // 0x02A0 (size: 0x1)

    void SpawnSplineProjectileRegion();
    void SpawnProjectileRegion();
    void SpawnPooledActor(UClass* Class);
    void SpawnCollisionRegion();
    void SpawnBlueprintProjectileRegion(UClass* Class);
    void ReleaseRegion(class APhasmidCollisionRegion* Region);
    void ReleaseProjectile(class APhasmidProjectileActor* Projectile);
    TArray<class AActor*> GetAllPooledActorsOfClass(TSubclassOf<class AActor> ActorClass);
    class APhasmidCollisionRegion* AcquireRegion(const FPhasmidCollisionStruct& Data, const FTransform& Transform);
    class APhasmidProjectileActor* AcquireProjectile(const FPhasmidProjectileStruct& Data, const FTransform& Transform);
}; // Size: 0x2A8

class UEnvQueryGenerator_NavMeshEdges : public UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue SearchRadius;                                           // 0x0080 (size: 0x30)
    FAIDataProviderFloatValue MinimumLineLength;                                      // 0x00B0 (size: 0x30)
    TSubclassOf<class UEnvQueryContext> GenerateAround;                               // 0x00E0 (size: 0x8)

}; // Size: 0xE8

class UFalconAIMovementCoordinator : public UFalconMovementCoordinator
{
    bool bOverridePhysBlend;                                                          // 0x0150 (size: 0x1)
    bool bDebug_EnableNewSplineMovement;                                              // 0x0151 (size: 0x1)
    uint8 bReachTestIncludesAgentRadius;                                              // 0x0154 (size: 0x1)
    uint8 bStopAtClosestPoint;                                                        // 0x0154 (size: 0x1)
    uint8 bOverrideOrientToMovement;                                                  // 0x0154 (size: 0x1)
    float SeekAcceptRadius;                                                           // 0x0158 (size: 0x4)
    uint8 bDebug_DrawSeekBehavior;                                                    // 0x015C (size: 0x1)
    float FleeCheckRadius;                                                            // 0x0160 (size: 0x4)
    float FleeCheckHalfAngle;                                                         // 0x0164 (size: 0x4)
    float FleeDebounceTime;                                                           // 0x0168 (size: 0x4)
    uint8 bDontStopFleeing;                                                           // 0x016C (size: 0x1)
    float WanderBFactor;                                                              // 0x0170 (size: 0x4)
    float WanderMinTurnTime;                                                          // 0x0174 (size: 0x4)
    float WanderMaxTurnTime;                                                          // 0x0178 (size: 0x4)
    float WanderMinStraightTime;                                                      // 0x017C (size: 0x4)
    float WanderMaxStraightTime;                                                      // 0x0180 (size: 0x4)
    float WanderReturnStrScale;                                                       // 0x0184 (size: 0x4)
    float WanderReturnStrExp;                                                         // 0x0188 (size: 0x4)
    uint8 bWanderTriggerMoveDone;                                                     // 0x018C (size: 0x1)
    uint8 bDebug_DrawWanderBehvior;                                                   // 0x018C (size: 0x1)
    uint8 bUsePathfindingToSpline;                                                    // 0x0194 (size: 0x1)
    uint8 bSetEventStartKeyOnFollowEvent;                                             // 0x0194 (size: 0x1)
    class UAITask* CurrentMoveTask;                                                   // 0x0220 (size: 0x8)

    void LaunchLandCompleted(const FHitResult& Hit);
    void LaunchCompleted(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
}; // Size: 0x230

class UFalconDeathStateComponent : public UFalconEnemyStateComponent
{
}; // Size: 0x310

class UFalconDialogueBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void GetDialogueTableRow(const FDataTableRowHandle& RowHandle, class UAkAudioEvent*& VoicedLine, FText& Text, EFalconDialogueRowResult& Result);
}; // Size: 0x28

class UFalconEnemyComponent : public UPhasmidEnemyComponent
{
    FName InitalStateName;                                                            // 0x0110 (size: 0x8)
    TArray<FFalconEverythingTrigger> GlobalTriggers;                                  // 0x0118 (size: 0x10)
    FGameplayTagContainer GlobalImmunities;                                           // 0x0128 (size: 0x20)
    bool bUpdateOnEnter;                                                              // 0x0148 (size: 0x1)
    float MoveDoneRadius;                                                             // 0x014C (size: 0x4)
    float MoveDoneHalfAngle;                                                          // 0x0150 (size: 0x4)
    uint8 bChangeMovementToWalkingAfterLaunch;                                        // 0x0154 (size: 0x1)
    uint8 bBroadcastSignalOnPlayerHurt;                                               // 0x0154 (size: 0x1)
    uint8 bEnableStateMachineLogic;                                                   // 0x0154 (size: 0x1)
    uint8 bDrawTriggerDistances;                                                      // 0x0154 (size: 0x1)
    uint8 bDebugDrawCurrentState;                                                     // 0x0154 (size: 0x1)
    uint8 bDebugDrawSightRadius;                                                      // 0x0154 (size: 0x1)
    uint8 bDebugDrawDistanceToPlayer;                                                 // 0x0154 (size: 0x1)
    uint8 bDebugReviewStateMachine;                                                   // 0x0154 (size: 0x1)
    uint8 bDebugDisplayStateMachineReviewToScreen;                                    // 0x0155 (size: 0x1)
    float SightRadius;                                                                // 0x0158 (size: 0x4)
    float SightHalfAngle;                                                             // 0x015C (size: 0x4)
    int32 OnScreenPercentage;                                                         // 0x0160 (size: 0x4)
    int32 HitPoints;                                                                  // 0x0164 (size: 0x4)
    bool bVisibleAfterDeath;                                                          // 0x0168 (size: 0x1)
    uint8 bMuteDuringCutscenes;                                                       // 0x0170 (size: 0x1)
    uint8 bIgnoreCutsceneMode;                                                        // 0x0170 (size: 0x1)
    bool bDisplaceGrass;                                                              // 0x0174 (size: 0x1)
    uint8 bStopPlayingMontagesOnEnter;                                                // 0x0178 (size: 0x1)
    bool bAllowTriggersToChangeWhileInTheAir;                                         // 0x017C (size: 0x1)
    FFalconEnemyComponentOnDeathState OnDeathState;                                   // 0x0180 (size: 0x10)
    FFalconEnemyComponentOnStateChange OnStateChange;                                 // 0x0190 (size: 0x10)
    uint8 bShowFlamedEffect;                                                          // 0x0230 (size: 0x1)
    uint8 bIsMetal;                                                                   // 0x0230 (size: 0x1)
    FName BlendBelowBone;                                                             // 0x0250 (size: 0x8)
    bool bIncludeBlendBelowBone;                                                      // 0x0258 (size: 0x1)
    TMap<class FGameplayTag, class FLaunchParams> DamageTypeLaunchParams;             // 0x0260 (size: 0x50)
    FLaunchParams DefaultLaunchParams;                                                // 0x02B0 (size: 0x24)
    float ZeroTickIntervalDistance;                                                   // 0x0328 (size: 0x4)
    class UFalconEnemyStateComponent* CurrentState;                                   // 0x0330 (size: 0x8)
    class UFalconEnemyStateComponent* BlueprintNextState;                             // 0x0338 (size: 0x8)
    class UParticleSystemComponent* Emitter;                                          // 0x0460 (size: 0x8)

    bool WillSpawnCollectibleOfType(UClass* Class);
    class UParticleSystemComponent* SpawnEmitter(FFalconStateEmitterStruct EmitterData);
    void SetDebugDrawCurrentStateOverrideState(EEnemyDebugDrawOverrideType overrideType);
    void SetDead();
    void ResetStateMachine();
    void RemoveImmunity(FGameplayTagContainer ImmunityTags);
    void OnTakeDamage(class AActor* Actor, const FGameplayEventData Payload);
    void OnReceiveHit(float Magnitude, FGameplayTagContainer DamageTags, const FHitResult& Hit, const class AActor* HitInstigator);
    void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void OnDealDamage(class AActor* Actor, const FGameplayEventData Payload);
    void OnCollisionVolumeExit(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnCollisionVolumeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnCollectibleSpawnedByState(class UFalconEnemyStateComponent* State, class AActor* Actor);
    TArray<class UMaterialInstanceDynamic*> GetMetalMaterials();
    FHitResult GetLastHitResult();
    class AActor* GetLastHitInstigator();
    bool GetIsMetal();
    EEnemyDebugDrawOverrideType GetDebugDrawCurrentStateOverrideState();
    float GetCurrentStateTime();
    bool CanBeDamagedByHit(const FGameplayTagContainer& DamageTypes, class UPrimitiveComponent* HitComponent);
    bool CanBeCharged();
    void BP_RestoreSaveData(const FPhasmidObjectSaveDataList& saveData);
    bool BP_IsDead(class AActor* Enemy);
    FGameplayTagContainer BP_GetLastDamageTypesTaken(class UObject* Enemy);
    FName BP_GetCurrentStateName();
    void BP_ForcePoseUpdate();
    void BP_ClearLastDamageTypesTaken(class UObject* Enemy);
    bool BP_ChangeState_StateComponent(class UFalconEnemyStateComponent* StateComponent, bool bForceImmediate);
    bool BP_ChangeState(FName stateName);
    void BP_AddSaveData(FPhasmidObjectSaveDataList& saveData);
    void BP_AddActorToWatchListByIndex(int32 Index, class AActor* Actor);
    void BP_AddActorToWatchList(FName NextStateName, class AActor* Actor);
    bool AllLootCollected();
    void AddImmunity(const FGameplayTagContainer& ImmunityTags);
}; // Size: 0x470

class UFalconEnemyStateComponent : public UActorComponent
{
    FFalconEverythingState State;                                                     // 0x00F8 (size: 0x1C8)
    FFalconEnemyStateComponentOnActorSpawned OnActorSpawned;                          // 0x02C0 (size: 0x10)
    FFalconEnemyStateComponentOnCollectibleSpawned OnCollectibleSpawned;              // 0x02D0 (size: 0x10)
    FFalconEnemyStateComponentOnEnterStateDelegate OnEnterStateDelegate;              // 0x02E0 (size: 0x10)
    FFalconEnemyStateComponentOnExitStateDelegate OnExitStateDelegate;                // 0x02F0 (size: 0x10)
    FFalconEnemyStateComponentOnProjectileSpawned OnProjectileSpawned;                // 0x0300 (size: 0x10)

    bool WillSpawnCollectibleOfType(UClass* Class);
    FName GetStateName();
    void BP_UpdateWanderParams(float Delay, float OuterRadius, float TurnRate);
    void BP_SetWaypoints(class ATargetPoint* Points);
    void BP_SetTarget(class AActor* Actor);
    void BP_OnExitState(class UFalconEnemyStateComponent* NextState);
    void BP_OnEnterState();
    void BP_AddActorToWatchListByIndex(int32 Index, class AActor* Actor);
    void BP_AddActorToWatchList(FName NextStateName, class AActor* Actor);
    bool AllLootCollected();
}; // Size: 0x310

class UFalconLevelActorStateComponent : public UFalconEnemyStateComponent
{
}; // Size: 0x310

class UFalconLevelActorStateMachineComponent : public UFalconEnemyComponent
{
}; // Size: 0x470

class UFalconLevelSequencePlayer : public ULevelSequencePlayer
{
}; // Size: 0x8B0

class UFalconMovementAttributeSet : public UPhasmidAttributeSet
{
    float GlideDescentMultiplier;                                                     // 0x0038 (size: 0x4)
    float FlyVerticalComponentMult;                                                   // 0x003C (size: 0x4)
    float JumpGravityFlyUp;                                                           // 0x0040 (size: 0x4)
    float RotationInterpSpeed;                                                        // 0x0044 (size: 0x4)
    float MaxFlySpeedBoost;                                                           // 0x0048 (size: 0x4)
    float UnderwaterPitchRate;                                                        // 0x004C (size: 0x4)
    float UnderwaterYawRate;                                                          // 0x0050 (size: 0x4)

}; // Size: 0x58

class UFalconMovementCoordinator : public UPhasmidStateMachineMovementCoordinator
{
}; // Size: 0x150

class UFalconMovieSceneDialogueSection : public UMovieSceneSection
{
    FDataTableRowHandle DialogueData;                                                 // 0x0110 (size: 0x10)

}; // Size: 0x120

class UFalconMovieSceneDialogueTrack : public UMovieSceneTrack
{
    class UDataTable* DialogueTable;                                                  // 0x00B8 (size: 0x8)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00C0 (size: 0x10)

}; // Size: 0xD0

class UFalconNavArea_Jump : public UNavArea
{
}; // Size: 0x40

class UFalconNavArea_SplineFly : public UNavArea
{
}; // Size: 0x40

class UFalconNavArea_SplineWalk : public UNavArea
{
}; // Size: 0x40

class UFalconNotifyState_EnemyNotify : public UAnimNotifyState
{
    FName PreviewStateName;                                                           // 0x0030 (size: 0x8)
    TSubclassOf<class APhasmidCharacter> PreviewClass;                                // 0x0038 (size: 0x8)

}; // Size: 0x40

class UFalconNotifyState_SpawnCollisionRegionFromStateMachine : public UFalconNotifyState_EnemyNotify
{
    int32 RegionId;                                                                   // 0x0040 (size: 0x4)

}; // Size: 0x48

class UFalconNotify_EnemyNotify : public UAnimNotify
{
    FName PreviewStateName;                                                           // 0x0038 (size: 0x8)
    TSubclassOf<class APhasmidCharacter> PreviewClass;                                // 0x0040 (size: 0x8)

}; // Size: 0x48

class UFalconNotify_Signal : public UAnimNotify
{
    FFalconSignalData Signal;                                                         // 0x0038 (size: 0x38)

}; // Size: 0x70

class UFalconNotify_SpawnProjectileFromStateMachine : public UFalconNotify_EnemyNotify
{
    FName ProjectileName;                                                             // 0x0048 (size: 0x8)

}; // Size: 0x50

class UFalconNotify_StartAttack : public UAnimNotify
{
}; // Size: 0x38

class UFalconPathFollowingComponent : public UPathFollowingComponent
{
    class UPhasmidCharacterMovementComponent* CharacterMoveComp;                      // 0x03A8 (size: 0x8)

}; // Size: 0x3B0

class UFalconSaveGame : public USaveGame
{
    TArray<FPhasmidGameSaveLevelObjectMap> saveDataMapArray;                          // 0x0078 (size: 0x10)
    TMap<FString, float> globalFloatMap;                                              // 0x0088 (size: 0x50)
    TMap<class FString, class FKey> changedKeybindingsMap;                            // 0x00D8 (size: 0x50)

    void StoreSaveObjectData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, const FPhasmidObjectSaveDataList& saveDataList);
    void SetSaveParam(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, int32 paramIndex, const FPhasmidSaveParam& inParam, FPhasmidObjectSaveDataList& outDataList, bool& paramUpdated);
    void SetItemCollected(const FPhasmidObjectSaveDataList& inSaveDataList, int32 ItemIndex, FPhasmidObjectSaveDataList& outSaveDataList, bool& itemUpdated);
    bool SetGlobalFloatValue(FString Key, float Value);
    bool SetChangedKeybindValue(FString Key, const FKey& ChangedKeybind);
    bool RemoveChangedKeybindValue(FString Key);
    bool MatchesTreasureType(EInventoryType inType);
    void IsGemCollectedForLevel(int32 slotIndex, int32 gameIndex, FString LevelName, EInventoryType inventoryType, FString GemObjectName, bool& Result);
    bool IsGem(EInventoryType Filter);
    void HashString(FString inString, int32& OutHash);
    int32 GetTreasureValue(EInventoryType inType);
    void GetSaveParam(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, int32 paramIndex, bool& paramFound, FString& outName, float& outValue);
    bool GetSaveObjectData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, FPhasmidObjectSaveDataList& saveDataList);
    void GetItemCollected(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, bool& itemCollected, bool& itemFound);
    void getInventoryType(const FPhasmidObjectSaveDataList& saveDataList, int32 ItemIndex, EInventoryType& Type, bool& itemFound);
    void GetInventoryItemList(int32 slotIndex, int32 gameIndex, FString Level, TArray<FPhasmidInventoryItem>& itemList);
    void GetInventoryCollectedCount(int32 slotIndex, int32 gameIndex, bool allLevels, FString Level, EInventoryType inventoryType, int32& Count);
    bool GetGlobalFloatValue(FString Key, float& Value);
    void GetGameSaveObjectDataListForInventoryType(int32 slotIndex, int32 gameIndex, EInventoryType inventoryType, bool allLevels, FString Level, TArray<FPhasmidGameSaveObjectData>& objectDataList);
    void GetGameSaveObjectDataList(int32 slotIndex, int32 gameIndex, FString Level, TArray<FPhasmidGameSaveObjectData>& objectDataList);
    void GetCollectedGemsForLevel(int32 slotIndex, int32 gameIndex, FString LevelName, TMap<class EInventoryType, class FGemHashArray>& gemCollectionMap);
    bool GetChangedKeybindData(FString Key, FKey& ChangedKeybind);
    void GetAllGlobalFloatData(TArray<FPhasmidSaveParam>& saveParams);
    void GetAllChangedKeybindsData(TArray<FPhasmidSaveKeybindParam>& saveKeybindParams);
    void DeleteSaveData(int32 slotIndex, int32 gameIndex);
    void debugPrintSave();
}; // Size: 0x150

class UFalconSplineMovementCoordinator : public UFalconMovementCoordinator
{
}; // Size: 0x158

class UFollowCameraComponent : public UCameraComponent
{
    FName CameraXAxisName;                                                            // 0x0840 (size: 0x8)
    FName CameraYAxisName;                                                            // 0x0848 (size: 0x8)
    FVector m_tgtOffset;                                                              // 0x0850 (size: 0xC)
    FVector m_gmblOffset;                                                             // 0x085C (size: 0xC)
    float m_radDefault;                                                               // 0x0868 (size: 0x4)
    float m_radDefaultAtLimit;                                                        // 0x086C (size: 0x4)
    float m_yawClamp;                                                                 // 0x0870 (size: 0x4)
    float m_rotSpeedH;                                                                // 0x0874 (size: 0x4)
    float m_rotSpeedV;                                                                // 0x0878 (size: 0x4)
    FVector m_rotInterpH;                                                             // 0x087C (size: 0xC)
    FVector m_rotInterpV;                                                             // 0x0888 (size: 0xC)
    FVector m_rotLimitV;                                                              // 0x0894 (size: 0xC)
    FVector m_fovInputScale;                                                          // 0x08A0 (size: 0xC)
    FVector2D m_clampZSoft;                                                           // 0x08AC (size: 0x8)
    FVector2D m_clampZHard;                                                           // 0x08B4 (size: 0x8)
    FVector m_posZInterp;                                                             // 0x08BC (size: 0xC)
    float m_colRadius;                                                                // 0x08C8 (size: 0x4)
    float m_camRadius;                                                                // 0x08CC (size: 0x4)
    bool bPullInOnCamCollisionOnly;                                                   // 0x08D0 (size: 0x1)
    float m_colClipMin;                                                               // 0x08D4 (size: 0x4)
    bool bcolSnapIn;                                                                  // 0x08D8 (size: 0x1)
    float m_snapInVelocity;                                                           // 0x08DC (size: 0x4)
    float m_snapBounceThreshold;                                                      // 0x08E0 (size: 0x4)
    FVector m_colInterpIn;                                                            // 0x08E4 (size: 0xC)
    FVector m_colInterpOut;                                                           // 0x08F0 (size: 0xC)
    float m_ceilingGmblOffset;                                                        // 0x08FC (size: 0x4)
    float m_ctrInterp;                                                                // 0x0900 (size: 0x4)
    float m_ctrSpeed;                                                                 // 0x0904 (size: 0x4)
    float m_ctrDecelAngle;                                                            // 0x0908 (size: 0x4)
    float m_ctrDecelAngleTurnModifier;                                                // 0x090C (size: 0x4)
    float m_ctrDecelTimeMultiplier;                                                   // 0x0910 (size: 0x4)
    float m_maxCtrDelta;                                                              // 0x0914 (size: 0x4)
    float m_ctrInterpV;                                                               // 0x0918 (size: 0x4)
    float m_ctrAngleV;                                                                // 0x091C (size: 0x4)
    float m_ctrYawClamp;                                                              // 0x0920 (size: 0x4)
    float m_ctrSecondTargetInterp;                                                    // 0x0924 (size: 0x4)
    class AActor* Target;                                                             // 0x0928 (size: 0x8)
    class AActor* SecondaryTarget;                                                    // 0x0930 (size: 0x8)
    FVector m_secondaryTgtOffset;                                                     // 0x0938 (size: 0xC)
    float m_secondaryTgtMinDistance;                                                  // 0x0944 (size: 0x4)
    float m_secondaryTgtDistance;                                                     // 0x0948 (size: 0x4)
    class UCurveFloat* m_returnToSecondaryTargetCurve;                                // 0x0950 (size: 0x8)
    uint8 bDebugDrawLocators;                                                         // 0x0958 (size: 0x1)
    float m_lookAheadScalar;                                                          // 0x095C (size: 0x4)
    float m_panAheadScalar;                                                           // 0x0960 (size: 0x4)
    float m_numFramesSmooth;                                                          // 0x0964 (size: 0x4)
    float m_numFramesSmoothPan;                                                       // 0x0968 (size: 0x4)
    FVector m_collisionOffset;                                                        // 0x096C (size: 0xC)
    bool m_useRawCamPos;                                                              // 0x0978 (size: 0x1)
    bool m_ignoreRightStickInput;                                                     // 0x0979 (size: 0x1)
    bool m_useBothSticksAsCamInput;                                                   // 0x097A (size: 0x1)
    bool m_complexTrace;                                                              // 0x097B (size: 0x1)
    float m_idleTime;                                                                 // 0x097C (size: 0x4)
    float m_idleRampTime;                                                             // 0x0980 (size: 0x4)
    float m_idleMoveTime;                                                             // 0x0984 (size: 0x4)
    uint8 bEnableIdleVerticalCenter;                                                  // 0x0988 (size: 0x1)
    FVector m_centerInterpParams;                                                     // 0x098C (size: 0xC)
    FVector m_centerHoldInterpParams;                                                 // 0x0998 (size: 0xC)
    FVector m_centerActiveInterpParams;                                               // 0x09A4 (size: 0xC)
    float m_centerToHoldTime;                                                         // 0x09B0 (size: 0x4)
    float ActiveCamAcceleration;                                                      // 0x09B4 (size: 0x4)
    float ActiveCamDeceleration;                                                      // 0x09B8 (size: 0x4)
    FVector m_centerIdleParams;                                                       // 0x09BC (size: 0xC)
    float m_centerInterpMin;                                                          // 0x09C8 (size: 0x4)
    FFollowCameraComponentOnTransitionDone OnTransitionDone;                          // 0x09D0 (size: 0x10)
    FVector m_tgtFPOffset;                                                            // 0x09E0 (size: 0xC)
    bool bRecordCamInfo;                                                              // 0x09EC (size: 0x1)
    EReenactCamInfo ReenactCamInfo;                                                   // 0x09ED (size: 0x1)
    bool bStabilizeCameraOnSettingsChange;                                            // 0x09EE (size: 0x1)
    bool m_traceToCeiling;                                                            // 0x09F4 (size: 0x1)
    float m_defaultPitchByHeight;                                                     // 0x09F8 (size: 0x4)
    float m_traceLength;                                                              // 0x09FC (size: 0x4)
    FVector m_useRotVInterpSettings;                                                  // 0x0A00 (size: 0xC)

    void UpdateTargetOffset(FVector NewOffset);
    void UpdateRecenterVerticalAngle(float NewAngle);
    void SetDefaultPitchByActorZ(class AActor* CameraActor, float ReferenceHeight, FVector2D MaxHeightDiff, FVector2D AngleClamp, FVector InterpSettings);
    void SetCameraYaw(float Yaw);
    void SetCameraPitchYaw(float Pitch, float Yaw);
    void SetActiveCenterMode(bool NewActive);
    void RetraceDebugInfo(int32 Index);
    void ResetBehind(float angle);
    void Reset();
    int32 PushCameraSettings(const FFollowCameraSettings& Settings, FVector TransitionSettings);
    bool PopCameraSettings(int32 SettingsId, FVector TransitionSettings);
    void PauseUpdate(bool bPause);
    void OnCameraSettingsTransition__DelegateSignature(class UFollowCameraComponent* Camera);
    bool IsTransitioning();
    FFollowCameraSettings GetDefaultCameraSettings();
    int32 GetDebugCamInfoNum();
    float GetCurrentRadiusTarget();
    bool GetCenteringBlocked();
    float GetCameraYaw();
    float GetCameraPitch();
    bool DrawDebugCamInfo(int32 Index, int32 PreviousCount, bool bDrawPullInTrace, bool bDrawPositionTrace);
    bool CutDebugCamInfo(int32 Index, int32 PreviousCount);
    void ClearYawOffsetClamp();
    void ClearDebugCaminfo();
    void ClearClampZByActorHeight(class AActor* CameraActor);
    void CenterCameraFromSpec(FGameplayEffectSpecHandle& SpecHandle);
}; // Size: 0xCB0

class UFollowCameraStatics : public UBlueprintFunctionLibrary
{

    int32 PushCameraSettingsWithTransition(const class UObject* WorldContextObject, FVector TransitionSettings, int32 PlayerIndex, const FFollowCameraSettings& NewCameraSettings);
    int32 PushCameraSettings(const class UObject* WorldContextObject, int32 PlayerIndex, const FFollowCameraSettings& NewCameraSettings);
    bool PopCameraSettingsWithTransition(const class UObject* WorldContextObject, FVector TransitionSettings, int32 PlayerIndex, int32 SettingsId);
    bool PopCameraSettings(const class UObject* WorldContextObject, int32 PlayerIndex, int32 SettingsId);
    FFollowCameraSettings GetDefaultCameraValues(const class UObject* WorldContextObject, int32 PlayerIndex);
    void CameraSetSecondaryTargetWithRelativeOffset(const class UObject* WorldContextObject, int32 PlayerIndex, class AActor* Target, FVector Offset, float MinDistance, float MaxDistance, class UCurveFloat* ReturnToTargetCurve);
    void CameraSetSecondaryTarget(const class UObject* WorldContextObject, int32 PlayerIndex, class AActor* Target, FVector Offset, class UCurveFloat* ReturnToTargetCurve);
    void CameraRemoveSecondaryTarget(const class UObject* WorldContextObject, int32 PlayerIndex, class AActor* Target);
    bool CameraHasSecondaryTarget(const class UObject* WorldContextObject, int32 PlayerIndex);
    class AActor* CameraGetSecondaryTarget(const class UObject* WorldContextObject, int32 PlayerIndex);
    bool CameraCannotCenter(const class UObject* WorldContextObject, int32 PlayerIndex);
}; // Size: 0x28

class UGameplayNotificationManager : public UUserWidget
{

    void RemoveNotification(const FGameplayNotificationDef& Def);
    void QueueNotification(const FGameplayNotificationDef& Def);
    bool HasNextNotification();
    int32 GetQueuedNotificationCount();
    void GetNextNotification(FGameplayNotificationDef& Def);
    bool compareNotificationDefs(const FGameplayNotificationDef& A, const FGameplayNotificationDef& B);
    void AddAndCreateNotification(TEnumAsByte<ENotificationPriority::Type> MyPriority, TEnumAsByte<ENotificationType::Type> MyType, const FText& NotificationText, int32 MyAdditionalInfo, FGameplayNotificationDef& Def, int32& multiIndex);
}; // Size: 0x218

class UObjectiveDataFunctionLibrary : public UBlueprintFunctionLibrary
{

    FSubObjectiveDefinition GetSubObjectiveDefinitionByName(class UDataTable* Table, FName RowName, bool& Result);
    FObjectiveDefinition GetObjectiveDefinitionByName(class UDataTable* Table, FName RowName, bool& Result);
}; // Size: 0x28

class UPhasmidAIConfiguratorComponent : public UActorComponent
{
    class UBlackboardData* Blackboard;                                                // 0x00F0 (size: 0x8)
    class UBehaviorTree* DefaultBehavior;                                             // 0x00F8 (size: 0x8)
    TMap<class FName, class UBehaviorTree*> OverrideBehaviors;                        // 0x0100 (size: 0x50)
    class UDataTable* DefaultBehaviorsTable;                                          // 0x0150 (size: 0x8)
    FGameplayTagContainer SquadProperties;                                            // 0x0158 (size: 0x20)
    EInitialOrderType InitialOrders;                                                  // 0x0178 (size: 0x1)
    class AActor* InitialTarget;                                                      // 0x0180 (size: 0x8)

    bool IssueOrder_Custom(FPhasmidAIOrdersHandle& OrderHandle);
    void IssueInitialOrders();
    class UBehaviorTree* GetBehaviorByName(FName behaviorName);
    bool CompleteOrder(const FPhasmidAIOrdersHandle& OrderHandle);
    EPhasmidAIOrdersStatus CheckOrderStatus(const FPhasmidAIOrdersHandle& OrderHandle);
}; // Size: 0x188

class UPhasmidAIManager : public UActorComponent
{
    int32 MaxSpawnsPerFrame;                                                          // 0x00F0 (size: 0x4)
    int32 InitialPoolSize;                                                            // 0x00F4 (size: 0x4)
    uint8 bAssignFreeOnRequest;                                                       // 0x00F8 (size: 0x1)
    TArray<class AFalconAIController*> AIControllers;                                 // 0x0100 (size: 0x10)
    TArray<class AFalconAIController*> FreeControllers;                               // 0x0110 (size: 0x10)

    void ScheduleSpawnRequest();
    void ControllerUnpossessed(class AFalconAIController* Controller);
}; // Size: 0x138

class UPhasmidAITask_BlueprintBase : public UAITask
{
    bool EnableTaskTicking;                                                           // 0x0070 (size: 0x1)

    void OnTaskTick(class AAIController* OwnerAIController, float DeltaTime);
    void OnTaskResume(class AAIController* OwnerAIController);
    void OnTaskPause(class AAIController* OwnerAIController);
    void OnTaskDestroyed(class AAIController* OwnerAIController, bool OwnerFinished);
    void OnTaskActivate(class AAIController* OwnerAIController);
    EGameplayTaskState GetTaskState();
}; // Size: 0x78

class UPhasmidAITask_FleeAlongPath : public UAITask
{
    float CheckRadius;                                                                // 0x0070 (size: 0x4)
    float CheckHalfAngle;                                                             // 0x0074 (size: 0x4)
    float DebounceTime;                                                               // 0x0078 (size: 0x4)

    void OnTurnAroundTimerExpired();
    class UPhasmidAITask_FleeAlongPath* FleeAlongPath(class AAIController* Controller, class APhasmidPatrolPath* Path, class AActor* FleeFromTarget, bool DontStop, bool FaceTowardsFacingTarget);
}; // Size: 0xC0

class UPhasmidAITask_FollowPath : public UAITask
{

    void OnCharacterMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PrevCustomMode);
    class UPhasmidAITask_FollowPath* FollowPathToSplineKey(class AAIController* Controller, class APhasmidPatrolPath* Path, FPhasmidPathFlags Flags, float Key);
    class UPhasmidAITask_FollowPath* FollowPath(class AAIController* Controller, class APhasmidPatrolPath* Path, FPhasmidPathFlags Flags);
}; // Size: 0xB8

class UPhasmidAITask_FollowSpline : public UAITask
{

    void OnChildTaskReachedWaypoint(class UPhasmidAITask_NavWalkSpline* Task, int32 WaypointIndex);
    class UPhasmidAITask_FollowSpline* FollowSplineToLocation(class AAIController* Controller, class AActor* SplineActor, const FVector& Destination, bool bStartAtBeginning);
    class UPhasmidAITask_FollowSpline* FollowSpline(class AAIController* Controller, class AActor* SplineActor, bool bLooping, bool bReverse, bool bStartAtBeginning);
    class UPhasmidAITask_FollowSpline* FollowActorOnSpline(class AAIController* Controller, class AActor* SplineActor, class AActor* ActorToFollow);
    class UPhasmidAITask_FollowSpline* AvoidActorOnSpline(class AAIController* Controller, class AActor* SplineActor, class AActor* ActorToAvoid);
}; // Size: 0xE0

class UPhasmidAITask_JumpSpline : public UAITask
{

    class UPhasmidAITask_JumpSpline* JumpSpline(class AAIController* Controller, class USplineComponent* Spline, bool bWalkToSpline);
    void CharacterLanded(const FHitResult& Hit);
}; // Size: 0x80

class UPhasmidAITask_NavWalkSpline : public UAITask_MoveTo
{
    FPhasmidAITask_NavWalkSplineOnWaypointReached OnWaypointReached;                  // 0x0110 (size: 0x10)

}; // Size: 0x140

class UPhasmidAITask_ReturnToOrigin : public UAITask
{
}; // Size: 0x90

class UPhasmidAITask_SeekAlongPath : public UAITask
{
    float AcceptRadius;                                                               // 0x0070 (size: 0x4)
    uint8 bStopAtClosestPoint;                                                        // 0x0074 (size: 0x1)
    uint8 bOverrideOrientToMovement;                                                  // 0x0074 (size: 0x1)
    uint8 bDebug_DrawSeekBehavior;                                                    // 0x0074 (size: 0x1)

    class UPhasmidAITask_SeekAlongPath* SeekAlongPath(class AAIController* Controller, class APhasmidPatrolPath* Path, class AActor* SeekTarget);
}; // Size: 0x90

class UPhasmidAITask_Wander : public UAITask
{

    class UPhasmidAITask_Wander* Wander(class AAIController* Controller, float InnerRadius, float OuterRadius, float Delay, class AActor* CenterActor, float TurnRate);
    void OnCapsuleOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0xD8

class UPhasmidAbilitySystemComponent : public UAbilitySystemComponent
{
    TArray<class UPhasmidAbilitySystemComponent*> ChildComponents;                    // 0x1770 (size: 0x10)
    TWeakObjectPtr<class UPhasmidAbilitySystemComponent> ParentComponent;             // 0x1780 (size: 0x8)
    TArray<FPhasmidDamageGroup> AppliedDamageGroups;                                  // 0x1788 (size: 0x10)
    int32 DamageGroupIndex;                                                           // 0x1798 (size: 0x4)

    void RemoveFromParentAbilitySystemComponent();
    void PostReplicated_OnDealDamageCharacter(float DamageMagnitude, class UPhasmidAbilitySystemComponent* DealingASC, class UPhasmidAbilitySystemComponent* SourceASC, bool isCrit, FVector HitLocation, FVector HitNormal);
    void PostReplicated_OnDealDamage(FGameplayEventData Payload);
    void PhasmidUnBlockAbilitiesWithTags(const FGameplayTagContainer& Tags);
    FGameplayEffectContextHandle PhasmidMakeEffectContext();
    void PhasmidBlockAbilitiesWithTags(const FGameplayTagContainer& Tags);
    void OnGameplayEffectAppliedToSelfDelegate(class UAbilitySystemComponent* SourceASC, const FGameplayEffectSpec& Spec, FActiveGameplayEffectHandle Handle);
    void OnAbilityActivated(const FGameplayAbilitySpecHandle Handle, class UGameplayAbility* Ability);
    void InitializeFromAttributeData(FGameplayAttribute Attribute, float Value);
    void IncrementDamageGroupIndex();
    bool HasAppliedDamageFromGroup(FPhasmidDamageGroup DamageGroup);
    int32 GetDamageGroupIndex();
    TSubclassOf<class UAttributeSet> GetAtttributeClass(FGameplayAttribute Attribute);
    FName GetAttributeName(FGameplayAttribute Attribute);
    void CopyAttributeSet(class UAbilitySystemComponent* TargetASC, TSubclassOf<class UAttributeSet> AttributeClass);
    void BPSetAvatarActor(class AActor* InAvatarActor);
    void BPRemoveLooseGameplayTags(const FGameplayTagContainer& GameplayTags);
    void BPRefreshAbilityActorInfo();
    void BPInitActorInfo(class AActor* Owner, class AActor* Avatar);
    void BPGiveAbility(TSubclassOf<class UGameplayAbility> GameplayAbilityClass, int32 Level, int32 InputID);
    class UAnimMontage* BPGetCurrentMontage();
    class UGameplayAbility* BPGetAnimatingAbility();
    void BPCancelAbilities(const FGameplayTagContainer& WithTags, const FGameplayTagContainer& WithoutTags);
    void BPAddUniqueAttributeSet(TSubclassOf<class UAttributeSet> AttributeClass);
    void BPAddLooseGameplayTags(const FGameplayTagContainer& GameplayTags);
    void BP_OnPlayerControllerSet();
    void BP_OnAbilityFailed(const class UGameplayAbility* Ability, const FGameplayTagContainer& TagContainer);
    void BP_OnAbilityCommited(class UGameplayAbility* Ability);
    void ApplyDamageGroupOnDamage(class UAbilitySystemComponent* SourceASC, const FGameplayEffectSpec& Spec, FActiveGameplayEffectHandle EffectHandle, FPhasmidDamageGroup DamageGroup);
    void AddParentAbilitySystemComponent(class UPhasmidAbilitySystemComponent* Parent);
    void AddAppliedDamageGroup(FPhasmidDamageGroup DamageGroup);
    bool AbilitySystemHandleGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);
}; // Size: 0x17A0

class UPhasmidAggroComponent : public UActorComponent
{
    FPhasmidAggroComponentOnAggroTargetLost OnAggroTargetLost;                        // 0x0148 (size: 0x10)
    float PriorityFactorForPathable;                                                  // 0x0158 (size: 0x4)
    float PriorityFactorForDistance;                                                  // 0x015C (size: 0x4)
    float PriorityFactorForEncounter;                                                 // 0x0160 (size: 0x4)
    float MaxTargetDistance;                                                          // 0x0164 (size: 0x4)
    uint8 MaxSimultaneousTargets;                                                     // 0x0168 (size: 0x1)
    float SightWeight;                                                                // 0x016C (size: 0x4)
    float HearingWeight;                                                              // 0x0170 (size: 0x4)
    float DamageWeight;                                                               // 0x0174 (size: 0x4)
    float CurrentTargetWeight;                                                        // 0x0178 (size: 0x4)
    uint8 bAlerted;                                                                   // 0x017C (size: 0x1)
    uint8 bIgnoreUnpathableTargets;                                                   // 0x017C (size: 0x1)

    void OnActorPerceptionUpdated(class AActor* Actor, FAIStimulus Stimulus);
    class AActor* GetCurrentTarget();
    void ForgetAllActors();
    void ForgetActor(class AActor* Target);
    FPhasmidActorAggroBlueprintInfo ChooseAggroTarget();
    void AddAggro(class AActor* Target, int32 Aggro);
}; // Size: 0x180

class UPhasmidAimDownSightsAttributeSet : public UPhasmidAttributeSet
{
    float AimAccuracyMult_X;                                                          // 0x0038 (size: 0x4)
    float AimAccuracyMult_Y;                                                          // 0x003C (size: 0x4)
    float AimTransitionInDuration;                                                    // 0x0040 (size: 0x4)
    float AimTransitionOutDuration;                                                   // 0x0044 (size: 0x4)
    float AimFOVMult;                                                                 // 0x0048 (size: 0x4)
    float AimTurnRateMult;                                                            // 0x004C (size: 0x4)
    float AimLookupRateMult;                                                          // 0x0050 (size: 0x4)
    float AimMoveSpeedMult;                                                           // 0x0054 (size: 0x4)

}; // Size: 0x58

class UPhasmidAimFrictionAttributeSet : public UPhasmidAttributeSet
{
    float FrictionInnerMult;                                                          // 0x0038 (size: 0x4)
    float FrictionOuterMult;                                                          // 0x003C (size: 0x4)

}; // Size: 0x40

class UPhasmidAttributeSet : public UAttributeSet
{

    void PropagateSetToOwner();
    void InitFieldFromDataTable(const class UDataTable* DataTable, FName RowName);
    bool ApplyStartingData(const class UDataTable* DataTable, FName RowName);
}; // Size: 0x38

class UPhasmidBPLibrary : public UBlueprintFunctionLibrary
{

    bool PhasmidProjectWorldToScreen(class APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool& bTargetBehindCamera, bool bPlayerViewportRelative);
    FMiniMapTextureData GetMiniMapTextureData(class UDataTable* Table, FName RowName, bool& Result);
}; // Size: 0x28

class UPhasmidBTComposite_UtilitySelector : public UBTCompositeNode
{
}; // Size: 0xD0

class UPhasmidBTDecorator_UtilityMethod : public UBTDecorator
{
    class AAIController* AIOwner;                                                     // 0x0068 (size: 0x8)
    class AActor* ActorOwner;                                                         // 0x0070 (size: 0x8)
    TArray<FName> ObservedKeyNames;                                                   // 0x0078 (size: 0x10)
    int32 SelectedVarient;                                                            // 0x0098 (size: 0x4)

    void BP_UpdateBlackboard(class AAIController* OwnerController, class APawn* ControlledPawn, int32 VarientId);
    void BP_CalculateUtility(class AAIController* OwnerController, class APawn* ControlledPawn, TArray<float>& UtilityValues);
}; // Size: 0xA0

class UPhasmidBTTask_ActivateAbilityByEvent : public UBTTaskNode
{
    FGameplayTag EventTag;                                                            // 0x0070 (size: 0x8)
    FBlackboardKeySelector InstigatorKey;                                             // 0x0078 (size: 0x28)
    FBlackboardKeySelector TargetKey;                                                 // 0x00A0 (size: 0x28)
    FBlackboardKeySelector OptionalObjectKey;                                         // 0x00C8 (size: 0x28)
    FBlackboardKeySelector OptionalObject2Key;                                        // 0x00F0 (size: 0x28)
    FBlackboardKeySelector EventMagnitudeKey;                                         // 0x0118 (size: 0x28)
    float EventMagnitude;                                                             // 0x0140 (size: 0x4)

}; // Size: 0x148

class UPhasmidBasicDamageAttributeSet : public UPhasmidAttributeSet
{
    float DamageBase;                                                                 // 0x0038 (size: 0x4)
    float CritMultiplier;                                                             // 0x003C (size: 0x4)
    float DamageRepeatInterval;                                                       // 0x0040 (size: 0x4)

}; // Size: 0x48

class UPhasmidBasicDamageExecution : public UGameplayEffectExecutionCalculation
{
}; // Size: 0x40

class UPhasmidBlueprintGameplayTagLibraryExtras : public UObject
{

    FGameplayTagContainer RequestGameplayTagChildren(const FGameplayTag& GameplayTag);
    void RemoveGameplayTags(FGameplayTagContainer& InOutTagContainer, const FGameplayTagContainer& InTagContainer);
    bool RemoveGameplayTag(FGameplayTagContainer& InOutTagContainer, FGameplayTag Tag);
    FGameplayTagContainer GetTagsWithSuffix(const FGameplayTagContainer& InTagContainer, const FString Suffix, bool GetParent);
    FGameplayTagContainer GetDamageRequirementTags(const FGameplayTagContainer& InTagContainer);
    FGameplayTagContainer GetDamageFilterTags(const FGameplayTagContainer& InTagContainer);
    FGameplayTagContainer GetDamageDodgeTags(const FGameplayTagContainer& InTagContainer);
    FGameplayTagContainer GetCollisionFilterTags(const FGameplayTagContainer& InTagContainer);
    FGameplayTagContainer FilterExact(const FGameplayTagContainer& InTagContainer, const FGameplayTagContainer& InFilterTagContainer);
    FGameplayTagContainer Filter(const FGameplayTagContainer& InTagContainer, const FGameplayTagContainer& InFilterTagContainer);
}; // Size: 0x28

class UPhasmidBlueprintLibrary : public UBlueprintFunctionLibrary
{

    class APhasmidProjectileActor* SpawnProjectileActor(const class UObject* WorldContextObject, const FTransform& Transform, class AActor* Owner, class APawn* Instigator, const FPhasmidProjectileStruct& ProjectileData, bool bSpawnWithCollisionDisabled);
    class APhasmidCollisionRegion* SpawnCollisionRegion(const class UObject* WorldContextObject, class AActor* Owner, class APawn* Instigator, const FPhasmidCollisionStruct& CollisionData, bool bSpawnWithCollisionDisabled);
    void SetCullComponentsEnabled(bool bEnabled);
    void ReleaseRegion(class APhasmidCollisionRegion* Region);
    void ReleaseProjectile(class APhasmidProjectileActor* Projectile);
    FGameplayTargetDataFilterHandle MakeTeamFilterHandle(FPhasmidTargetDataFilterByTeam Filter, class AActor* FilterActor);
    FGameplayTargetDataFilterHandle MakeCollisionTagFilterHandle(FPhasmidTargetDataFilterByCollisionTags Filter, class AActor* FilterActor);
    TArray<FHitResult> GetTargetsInRadius(const class UObject* WorldContextObject, const FVector& Origin, float Radius, const TArray<class AActor*>& IgnoreActors, class AActor* TargetingActor, TEnumAsByte<ECollisionChannel> TraceBlockChannel);
    FString GetSourceStringFromLocalizedText(const FText& InText);
    float GetServerWorldTime(const class UObject* WorldContextObject);
    class APlayerStart* GetPlayerStart(class UObject* WorldContextObject, FString PlayerStartName);
    FGameplayTag GetDamagePreventedTag();
    FGameplayTag GetDamagePreventedByGroupTag();
    FGameplayTag GetDamagePreventByInvulnerabilityTag();
    void GenerateEffectSpecs(FPhasmidEffectApplicationContainer& Container, class AActor* Source, float LevelOverride, int32 StackOverride);
    bool DamageWasPrevented(const FGameplayEventData& Payload, FGameplayTagContainer& PreventedTags);
    TArray<FActiveGameplayEffectHandle> ApplyEffectApplicationContainerToTarget(FPhasmidEffectApplicationContainer& Container, class AActor* Target);
    FActiveGameplayEffectHandle ApplyDamageGroupEffect(const class UObject* WorldContextObject, float DamageMagnitude, TSubclassOf<class UGameplayEffect> DamageEffectClass, class AActor* Instigator, class AActor* DamageCauser, class AActor* DamageTarget, FGameplayTagContainer DamageTags, FName DamageGroupName, const FHitResult& Hit);
    FActiveGameplayEffectHandle ApplyDamageEffect(const class UObject* WorldContextObject, float DamageMagnitude, TSubclassOf<class UGameplayEffect> DamageEffectClass, class AActor* Instigator, class AActor* DamageCauser, class AActor* DamageTarget, FGameplayTagContainer DamageTags, const FHitResult& Hit);
    void AddHitResult(FPhasmidEffectApplicationContainer& Container, FHitResult HitResult);
}; // Size: 0x28

class UPhasmidBurstFireAttributeSet : public UAttributeSet
{
    float BurstFireAmount;                                                            // 0x0030 (size: 0x4)
    float BurstFireDelay;                                                             // 0x0034 (size: 0x4)

}; // Size: 0x38

class UPhasmidButtonPanelFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SortStringSet(const TArray<FString>& stringSet, TArray<FString>& sortedStrings);
    FPhasmidPanelDefStruct GetRowByName(class UDataTable* DataTable, FName pName, bool& Result);
}; // Size: 0x28

class UPhasmidCameraArmComponent : public USpringArmComponent
{
    uint8 bUsePitchOffset;                                                            // 0x0330 (size: 0x1)
    float MaxPitch;                                                                   // 0x0334 (size: 0x4)
    float ArmAngularAccel;                                                            // 0x034C (size: 0x4)
    float ArmAngularDecel;                                                            // 0x0354 (size: 0x4)
    float MaxArmAngularSpeed;                                                         // 0x0358 (size: 0x4)
    float OuterProbeSize;                                                             // 0x035C (size: 0x4)
    float MinTimeScale;                                                               // 0x0360 (size: 0x4)

}; // Size: 0x370

class UPhasmidCharacterAttributeSet : public UPhasmidAttributeSet
{
    float JumpMaxHoldTime;                                                            // 0x0038 (size: 0x4)

}; // Size: 0x40

class UPhasmidCharacterDamageAttributeSet : public UAttributeSet
{
    float DealDamageMultiplier;                                                       // 0x0030 (size: 0x4)

}; // Size: 0x38

class UPhasmidCharacterMovementComponent : public UCharacterMovementComponent
{
    uint8 bDisableWallSliding;                                                        // 0x07C0 (size: 0x1)
    uint8 bMoveAnywaysWhenBlocked;                                                    // 0x07C0 (size: 0x1)
    uint8 bHorizontalPush;                                                            // 0x07C0 (size: 0x1)
    uint8 bDisableJumpCollisions;                                                     // 0x07C0 (size: 0x1)
    uint8 bSlideOffLevelObjects;                                                      // 0x07C0 (size: 0x1)
    uint8 bCanPushOtherPawns;                                                         // 0x07C0 (size: 0x1)
    uint8 bCannotBePushedByOthers;                                                    // 0x07C0 (size: 0x1)
    uint8 bCanTurnAroundInAir;                                                        // 0x07C0 (size: 0x1)
    uint8 bDisableLand;                                                               // 0x07C1 (size: 0x1)
    uint8 bCanAlwaysJump;                                                             // 0x07C1 (size: 0x1)
    uint8 bEnableSplineMovement;                                                      // 0x07C1 (size: 0x1)
    uint8 bPreciseFloorCheckingWhileFlying;                                           // 0x07C1 (size: 0x1)
    float MaxSplineSpeed;                                                             // 0x07C4 (size: 0x4)
    float SplineDistanceAcceptance;                                                   // 0x07C8 (size: 0x4)
    EPhasmidSplineTraversalMode DefaultSplineTraversalMode;                           // 0x07CC (size: 0x1)
    uint8 bEnableCarMovement;                                                         // 0x07D0 (size: 0x1)
    float CarTurningRate;                                                             // 0x07D4 (size: 0x4)
    FPhasmidCMSkateTuning SkateTuning;                                                // 0x07D8 (size: 0x140)
    TSubclassOf<class AActor> AttachBoardClass;                                       // 0x0918 (size: 0x8)
    TSubclassOf<class AActor> CrashBoardClass;                                        // 0x0920 (size: 0x8)
    FPhasmidCharacterMovementComponentOnSkateEvent onSkateEvent;                      // 0x0928 (size: 0x10)
    FPhasmidCharacterMovementComponentOnSkateTurboStart OnSkateTurboStart;            // 0x0938 (size: 0x10)
    FPhasmidCharacterMovementComponentOnSkateTurboEnd OnSkateTurboEnd;                // 0x0948 (size: 0x10)
    FPhasmidCharacterMovementComponentOnSkateAutoTurboStart OnSkateAutoTurboStart;    // 0x0958 (size: 0x10)
    FPhasmidCharacterMovementComponentOnSkateAutoTurboEnd OnSkateAutoTurboEnd;        // 0x0968 (size: 0x10)
    FPhasmidCharacterMovementComponentOnSkateTurboCancel OnSkateTurboCancel;          // 0x0978 (size: 0x10)
    FPhasmidCharacterMovementComponentOnStuckSpline OnStuckSpline;                    // 0x0988 (size: 0x10)
    bool bStepUpWhileFlying;                                                          // 0x0998 (size: 0x1)
    FVector2D MaxSpeedSmoothing;                                                      // 0x099C (size: 0x8)
    bool bUseMaxSpeedSmoothing;                                                       // 0x09A4 (size: 0x1)
    float SlideBounceRatio;                                                           // 0x09A8 (size: 0x4)
    float SlideClampMin;                                                              // 0x09AC (size: 0x4)
    float SlideAwayMultiplier;                                                        // 0x09B0 (size: 0x4)
    float SlideClampMax;                                                              // 0x09B4 (size: 0x4)
    bool bClampSlide;                                                                 // 0x09B8 (size: 0x1)
    bool bSlideAwayFromConvexWalls;                                                   // 0x09B9 (size: 0x1)
    float PushStrength;                                                               // 0x09BC (size: 0x4)
    float SelfPushVelocity;                                                           // 0x09C0 (size: 0x4)
    float SelfPushZMax;                                                               // 0x09C4 (size: 0x4)
    float SelfPushDuration;                                                           // 0x09C8 (size: 0x4)
    FVector LastPushLocation;                                                         // 0x09CC (size: 0xC)
    bool bNoLandOnInvalid;                                                            // 0x09D8 (size: 0x1)
    float DefaultJumpTraversalRate;                                                   // 0x09DC (size: 0x4)
    float DefaultApexHeight;                                                          // 0x09E0 (size: 0x4)
    float MinAnimSpeedInputMultiplier;                                                // 0x09E4 (size: 0x4)
    FVector DeltaBasedVelocity;                                                       // 0x09E8 (size: 0xC)
    uint8 bAllowSteppingOffNavMesh;                                                   // 0x0A00 (size: 0x1)
    uint8 bLimitSplineVelocity;                                                       // 0x0A00 (size: 0x1)
    uint8 bAllowTurningOffMovement;                                                   // 0x0A00 (size: 0x1)
    uint8 bUseSplineFlying2;                                                          // 0x0A00 (size: 0x1)
    FVector AverageFootNormal;                                                        // 0x0B0C (size: 0xC)
    TArray<FVector> IdleFootLocations;                                                // 0x0B18 (size: 0x10)
    float FootOffLedgeScale;                                                          // 0x0B38 (size: 0x4)
    float FootTraceLength;                                                            // 0x0B3C (size: 0x4)
    float IdleFootMeshYaw;                                                            // 0x0B40 (size: 0x4)
    float FootTraceDuration;                                                          // 0x0B44 (size: 0x4)
    float LedgePushDistanceRatio;                                                     // 0x0B48 (size: 0x4)
    float LedgePushDistance;                                                          // 0x0B4C (size: 0x4)
    float LedgePushAcceleration;                                                      // 0x0B50 (size: 0x4)
    float LedgePushDeceleration;                                                      // 0x0B54 (size: 0x4)

    bool UpdatePushOffLedge();
    void RestoreSkateTurboState();
    void ResetSkateTurbo();
    void OverrideSkateboardValues(float GroundSpeed, float GroundAccel, float TurboSpeed, float TurboAccel, float MaxTurboPoints, const FVector& BoardSize, const FVector& BoardOffset, float WheelRadius, float RollAngVert, float MaxSpeed, float MaxSpeedWhenTurboAllowed);
    bool IsUsingAutoSkateTurbo();
    bool IsSkateboardTurboEnabled();
    bool IsSkateboarding();
    bool IsSkateboardCrashing();
    bool IsMovingingTowardsLedge();
    bool IsBeingPushedOffLedge();
    bool HasFeetOffGround();
    void GiveSkateTurboPoints(int32 Points);
    float GetSkateTurboPoints();
    float GetSkateTurboPercent();
    void GetSkateboardAnimInfo(FName& Name, FVector2D& Input);
    float GetMovementSpeedForAnimation();
    float GetMaxSkateTurboPoints();
    int32 GetFeetOnGround();
    FVector GetAverageGroundNormal();
    void EnableSkateboardTurbo(bool Enable);
    void ClearSkateTurboState();
    void CheckNotOverlapping(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    bool CanUseSkateTurbo();
    bool CanConsumeSkateTurbo();
    bool AreFeetOffGround(int32 Feet, int32& FeetOffGround);
    void ActivateAutoSkateTurbo(float Seconds);
}; // Size: 0xB90

class UPhasmidCheatManager : public UCheatManager
{

    void Fnord();
    void Break();
}; // Size: 0x78

class UPhasmidCombatCoordinatorComponent : public UActorComponent
{
    uint8 bGenerateCover;                                                             // 0x0160 (size: 0x1)
    uint8 bDrawCover;                                                                 // 0x0160 (size: 0x1)
    float MaxTargetDistance;                                                          // 0x0164 (size: 0x4)
    float MeleePositioningRelaxationDist;                                             // 0x0168 (size: 0x4)
    float RepositionDistanceThresh;                                                   // 0x016C (size: 0x4)
    float OuterMeleeStandoffDistance;                                                 // 0x0170 (size: 0x4)
    int32 MaximumSimultaneousAttackers;                                               // 0x0174 (size: 0x4)
    int32 MaximumMeleePositions;                                                      // 0x0178 (size: 0x4)
    float InnerMeleeStandoffDistance;                                                 // 0x017C (size: 0x4)
    float MaximumMeleeAttackRate;                                                     // 0x0180 (size: 0x4)
    float MaximumRangedAttackRate;                                                    // 0x0184 (size: 0x4)
    float MeleeAttackInterval;                                                        // 0x0188 (size: 0x4)
    float MeleeAttackDuration;                                                        // 0x018C (size: 0x4)
    float RangedAttackInterval;                                                       // 0x0190 (size: 0x4)
    float RangedAttackDuration;                                                       // 0x0194 (size: 0x4)
    float MeleeTauntFrequency;                                                        // 0x0198 (size: 0x4)
    float TauntDuration;                                                              // 0x019C (size: 0x4)

    void RequestCoverPoint(class UObject* Target, class UEnvQuery* CoverSelectionQuery);
    void ReleaseCoverPoint(class UObject* Target);
    void NotifyFailedToFindCover(class UObject* RequestingObject);
    void NotifyEnemyAlerted(class AEncounterManager* Encounter, class AActor* AlertedEnemy, bool FirstAlert);
    void NotifyEncounterCompleted(class AEncounterManager* Encounter);
    void NotifyEncounterActivated(class AEncounterManager* Encounter);
    void NotifyCoverAssigned(class UObject* RequestingObject, const FPhasmidCoverLine& CoverPoint);
    void NotifyCombatStarted(class AEncounterManager* Encounter);
    void NotifyCombatEnded(class AEncounterManager* Encounter);
    void BP_RegisterRangedAttack(class AAIController* Controller);
    void BP_RegisterMeleeAttack(class AAIController* Controller);
}; // Size: 0x340

class UPhasmidCombatKnockDownAttributeSet : public UPhasmidAttributeSet
{
    float KnockDownSpeed;                                                             // 0x0038 (size: 0x4)
    float KnockDownDuration;                                                          // 0x003C (size: 0x4)

}; // Size: 0x40

class UPhasmidCombatLaunchAttributeSet : public UPhasmidAttributeSet
{
    float LaunchDirection;                                                            // 0x0038 (size: 0x4)
    float LaunchArcHeight;                                                            // 0x003C (size: 0x4)
    float LaunchArcLength;                                                            // 0x0040 (size: 0x4)
    float LaunchArcDuration;                                                          // 0x0044 (size: 0x4)
    float LaunchLandingDuration;                                                      // 0x0048 (size: 0x4)

}; // Size: 0x50

class UPhasmidCombatPushAttributeSet : public UPhasmidAttributeSet
{
    float PushDirection;                                                              // 0x0038 (size: 0x4)
    float PushDistance;                                                               // 0x003C (size: 0x4)
    float PushDuration;                                                               // 0x0040 (size: 0x4)
    float PushStunDuration;                                                           // 0x0044 (size: 0x4)

}; // Size: 0x48

class UPhasmidCombatStunAttributeSet : public UPhasmidAttributeSet
{
    float CombatStunDuration;                                                         // 0x0038 (size: 0x4)
    float CombatStunCooldownDuration;                                                 // 0x003C (size: 0x4)

}; // Size: 0x40

class UPhasmidCombatTakeHitAttributeSet : public UPhasmidAttributeSet
{
    float FlinchDuration;                                                             // 0x0038 (size: 0x4)
    float FlinchIntensity;                                                            // 0x003C (size: 0x4)

}; // Size: 0x40

class UPhasmidCombatVortexAttributeSet : public UPhasmidAttributeSet
{
    float VortexOuterRadius;                                                          // 0x0038 (size: 0x4)
    float VortexInnerRadius;                                                          // 0x003C (size: 0x4)
    float VortexDuration;                                                             // 0x0040 (size: 0x4)
    float VortexStunDuration;                                                         // 0x0044 (size: 0x4)

}; // Size: 0x48

class UPhasmidCullComponent : public UActorComponent
{
    float CullDistance;                                                               // 0x00F0 (size: 0x4)
    float CullDistanceSquared;                                                        // 0x00F4 (size: 0x4)
    float CullCheckTime;                                                              // 0x00F8 (size: 0x4)
    bool bCanActorBeDisabled;                                                         // 0x00FC (size: 0x1)
    bool bCanActorBeDisabledByVolume;                                                 // 0x00FD (size: 0x1)
    bool bCanActorBeZKilled;                                                          // 0x00FE (size: 0x1)
    bool bIgnoreZDistance;                                                            // 0x00FF (size: 0x1)
    float ReducedMoveInterval;                                                        // 0x0100 (size: 0x4)
    bool bUseCamAngle;                                                                // 0x0104 (size: 0x1)
    bool bAutoCull;                                                                   // 0x0105 (size: 0x1)
    bool bStillAutoCullWhenVolumeControlled;                                          // 0x010C (size: 0x1)
    uint8 bEnableCollisionCulling;                                                    // 0x0110 (size: 0x1)
    float CollisionCullDistance;                                                      // 0x0114 (size: 0x4)

    void UnbindFromCull(class AActor* EventOwner);
    void SetGameStateCullReady(bool bReady);
    void SetCullDistance(float NewCullDistance);
    void SetAutoUpdateCull(bool bNewEnabled);
    void SetActorEnabled(bool bNewEnabled);
    bool IsCulled();
    bool IsActorCulled();
    bool GetOffScreen();
    bool GetMeshOffScreen(class UMeshComponent* MeshComponent);
    bool GetGameStateCullReady();
    void CullEventDelegate__DelegateSignature(class AActor* Actor, bool bIsCulled);
    void CheckCull();
    void BindToCull(class AActor* EventOwner, const FBindToCullEvent& Event);
}; // Size: 0x1E0

class UPhasmidDamageGroupContainer : public UObject
{
    FPhasmidDamageGroup DamageGroup;                                                  // 0x0028 (size: 0x18)

}; // Size: 0x40

class UPhasmidDamageSettings : public UObject
{
    FName DamageTypeDeathTagName;                                                     // 0x0028 (size: 0x8)
    FName InvulnerableTagName;                                                        // 0x0030 (size: 0x8)
    FName RequiredDamageSuffix;                                                       // 0x0038 (size: 0x8)
    FName ImmuneToDamageSuffix;                                                       // 0x0040 (size: 0x8)
    FName DodgeDamageSuffix;                                                          // 0x0048 (size: 0x8)
    FName PreventedDamageBaseTagName;                                                 // 0x0050 (size: 0x8)
    FName PreventedByDamageGroupTagName;                                              // 0x0058 (size: 0x8)
    FName PreventedByInvulnerabilityTagName;                                          // 0x0060 (size: 0x8)
    TSubclassOf<class UGameplayEffect> DefaultDamageEffect;                           // 0x0068 (size: 0x8)
    TSubclassOf<class UGameplayAbility> DefaultDamageAbility;                         // 0x0070 (size: 0x8)
    FName DefaultCollisionChannel;                                                    // 0x0078 (size: 0x8)

}; // Size: 0x80

class UPhasmidDebuffAttributeSet : public UAttributeSet
{
    float TakeDamageMod;                                                              // 0x0030 (size: 0x4)
    float DealDamageMod;                                                              // 0x0034 (size: 0x4)
    float MoveSpeedMod;                                                               // 0x0038 (size: 0x4)
    float DebuffDuration;                                                             // 0x003C (size: 0x4)

}; // Size: 0x40

class UPhasmidEnemyBrainComponent : public UBehaviorTreeComponent
{
    class UBlackboardData* Blackboard;                                                // 0x0290 (size: 0x8)
    TArray<FPhasmidBehaviorUtilityEntry> Behaviors;                                   // 0x0298 (size: 0x10)
    FPhasmidEnemyBehaviorParams Parameters;                                           // 0x02A8 (size: 0x4)
    uint8 bEnableUtilityBehaviorSelection;                                            // 0x02AC (size: 0x1)
    uint8 bUnderScriptControl;                                                        // 0x02AC (size: 0x1)
    FPhasmidEnemyBrainComponentOnBehaviorChanged OnBehaviorChanged;                   // 0x02B0 (size: 0x10)

    void FinishScriptedBehavior();
    void BeginScriptedBehavior();
}; // Size: 0x2C8

class UPhasmidEnemyComponent : public UActorComponent
{

    void NotifyOnDeath();
}; // Size: 0x108

class UPhasmidEnvQueryItemType_CoverLine : public UEnvQueryItemType_VectorBase
{
}; // Size: 0x30

class UPhasmidEnvQueryTest_CanReachBefore : public UEnvQueryTest
{
    bool bUseDistance2D;                                                              // 0x01C0 (size: 0x1)
    TSubclassOf<class UEnvQueryContext> CanReachBefore;                               // 0x01C8 (size: 0x8)

}; // Size: 0x1D0

class UPhasmidEnvQueryTest_Directness : public UEnvQueryTest
{
    TEnumAsByte<EEnvTestDistance::Type> TestMode;                                     // 0x01C0 (size: 0x1)
    TSubclassOf<class UEnvQueryContext> DirectnessTo;                                 // 0x01C8 (size: 0x8)

}; // Size: 0x1D0

class UPhasmidEnvQueryTest_InFieldOfView : public UEnvQueryTest
{
    TSubclassOf<class UEnvQueryContext> Viewer;                                       // 0x01C0 (size: 0x8)

}; // Size: 0x1C8

class UPhasmidEnvQueryTest_NearWall : public UEnvQueryTest
{
    FEnvTraceData TraceData;                                                          // 0x01C0 (size: 0x30)
    FAIDataProviderFloatValue ItemHeightOffset;                                       // 0x01F0 (size: 0x30)
    FAIDataProviderFloatValue ContextHeightOffset;                                    // 0x0220 (size: 0x30)
    TSubclassOf<class UEnvQueryContext> Context;                                      // 0x0250 (size: 0x8)

}; // Size: 0x258

class UPhasmidFireModAttributeSet : public UPhasmidAttributeSet
{
    float FireDelayMultiplier;                                                        // 0x0038 (size: 0x4)

}; // Size: 0x40

class UPhasmidGameSaveComponent : public UActorComponent
{
    bool bSaveInProgress;                                                             // 0x00F0 (size: 0x1)
    class UFalconSaveGame* _falconSaveGame;                                           // 0x00F8 (size: 0x8)

    void SetPendingLevel(FString levelMain);
    void PhasmidSaveObjectToSlot(class USaveGame* SaveGameObject, FString SlotName, const int32 UserIndex);
    void PhasmidSaveCompleted();
    void LevelAddedEvent();
    class UFalconSaveGame* GetFalconSaveGameObject();
}; // Size: 0x110

class UPhasmidGameplayAbility : public UGameplayAbility
{
    bool SkipApplyCostOnCommit;                                                       // 0x05F8 (size: 0x1)
    bool SkipCheckCostOnCommit;                                                       // 0x05F9 (size: 0x1)
    bool SkipApplyCooldownOnCommit;                                                   // 0x05FA (size: 0x1)
    FGameplayTagContainer SourceOwnedTags;                                            // 0x0600 (size: 0x20)

    void ToggleDisableAbilityCooldowns();
    bool HasCooldown();
    bool GetAbilityCooldownsDisabled();
    void BP_GetCooldownTimeRemainingAndDuration(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo ActorInfo, float& TimeRemaining, float& CooldownDuration);
}; // Size: 0x620

class UPhasmidGameplayAbility_DamageTargets : public UPhasmidGameplayAbility
{
    TSubclassOf<class UGameplayEffect> DamageEffect;                                  // 0x0620 (size: 0x8)

}; // Size: 0x630

class UPhasmidGameplayStatics : public UBlueprintFunctionLibrary
{

    void SetGodMode(bool isGod);
    bool IsRightToLeftLanguage();
    bool GetGodMode();
}; // Size: 0x28

class UPhasmidGameplayTagCallbackComponent : public UActorComponent
{
    FPhasmidGameplayTagCallbackComponentOnGameplayEvent OnGameplayEvent;              // 0x00F0 (size: 0x10)
    FPhasmidGameplayTagCallbackComponentOnGameplayTagAdded OnGameplayTagAdded;        // 0x0100 (size: 0x10)
    FPhasmidGameplayTagCallbackComponentOnGameplayTagRemoved OnGameplayTagRemoved;    // 0x0110 (size: 0x10)

    void WaitForGameplayTagRemoved(FGameplayTag Tag);
    void WaitForGameplayTagAdded(FGameplayTag Tag);
    void WaitForGameplayEvent(FGameplayTag Tag);
}; // Size: 0x120

class UPhasmidGameplayTask_BlueprintBase : public UGameplayTask
{

    void OnTaskTick(float DeltaTime);
    void OnTaskResume();
    void OnTaskPause();
    void OnTaskDestroyed(bool OwnerFinished);
    void OnTaskActivate();
    EGameplayTaskState GetTaskState();
}; // Size: 0x68

class UPhasmidGlyphSystem : public UObject
{

    bool SynthesizeKeyDownEventFromControlCommand(FString ControlCommand, class UObject* ContextObject);
    FPhasmidIconReturnData GetIconFromControlCommand(FString ControlCommand, class UObject* ContextObject);
    FPhasmidIconReturnData GetIconFromAction(EPhasmidAction Action, class UObject* ContextObject, EKeybindingEntry KeybindingEntry, EInputSource ForceInputSource);
    EPhasmidAction GetActionFromControlCommand(FString ControlCommand, class UObject* ContextObject);
}; // Size: 0x28

class UPhasmidGunFireAttributeSet : public UAttributeSet
{
    float FireDelay;                                                                  // 0x0030 (size: 0x4)
    float FireNoiseLevel;                                                             // 0x0034 (size: 0x4)
    float BaseAccuracy_X;                                                             // 0x0038 (size: 0x4)
    float BaseAccuracy_Y;                                                             // 0x003C (size: 0x4)
    float Recoil_X;                                                                   // 0x0040 (size: 0x4)
    float Recoil_Y;                                                                   // 0x0044 (size: 0x4)
    float RecoilRecoverTime;                                                          // 0x0048 (size: 0x4)
    float RecoilFirstShotMultiplier;                                                  // 0x004C (size: 0x4)
    float MaxAccuracy_X;                                                              // 0x0050 (size: 0x4)
    float MaxAccuracy_Y;                                                              // 0x0054 (size: 0x4)
    float AccuracyChangePerShot;                                                      // 0x0058 (size: 0x4)
    float AccuracyShotThreshold;                                                      // 0x005C (size: 0x4)
    float AccuracyRecoverTime;                                                        // 0x0060 (size: 0x4)
    float AccuracyRecoverDelay;                                                       // 0x0064 (size: 0x4)
    float FireModeAutomatic;                                                          // 0x0068 (size: 0x4)
    float PelletAmount;                                                               // 0x006C (size: 0x4)

}; // Size: 0x70

class UPhasmidHealAttributeSet : public UAttributeSet
{
    float HealHealth;                                                                 // 0x0030 (size: 0x4)
    float HealShield;                                                                 // 0x0034 (size: 0x4)
    float HealRepeatInterval;                                                         // 0x0038 (size: 0x4)
    float HealRepeatDuration;                                                         // 0x003C (size: 0x4)

}; // Size: 0x40

class UPhasmidHealthSystemAttributeSet : public UPhasmidAttributeSet
{
    float HealthMax;                                                                  // 0x0038 (size: 0x4)
    float HealthCurrent;                                                              // 0x003C (size: 0x4)
    float ShieldMax;                                                                  // 0x0040 (size: 0x4)
    float ShieldRegenRate;                                                            // 0x0044 (size: 0x4)
    float ShieldRegenDelay;                                                           // 0x0048 (size: 0x4)
    float ShieldCurrent;                                                              // 0x004C (size: 0x4)
    float TakeDamageMultiplier;                                                       // 0x0050 (size: 0x4)
    float LowHealthThreshold;                                                         // 0x0054 (size: 0x4)
    float MaxDamagePerHit;                                                            // 0x0058 (size: 0x4)

    void OnRep_TakeDamageMult();
    void OnRep_ShieldRegenRate();
    void OnRep_ShieldRegenDelay();
    void OnRep_ShieldMax();
    void OnRep_ShieldCurrent();
    void OnRep_MaxDamagePerHit();
    void OnRep_LowHealthThreshold();
    void OnRep_HealthMax();
    void OnRep_HealthCurrent();
}; // Size: 0x60

class UPhasmidInputGlyphSettings : public UObject
{
    FSoftObjectPath DisplayActionsTableObjectPath;                                    // 0x0028 (size: 0x18)
    FSoftObjectPath ConsoleIconImagesTableObjectPath;                                 // 0x0040 (size: 0x18)
    FSoftObjectPath ControlCommandToActionTableObjectPath;                            // 0x0058 (size: 0x18)
    FSoftObjectPath KeyboardMouseIconMapTableObjectPath;                              // 0x0070 (size: 0x18)
    FSoftObjectPath BulletPointTextureObjectPath;                                     // 0x0088 (size: 0x18)
    FSoftObjectPath MouseTextureObjectPath;                                           // 0x00A0 (size: 0x18)
    TSubclassOf<class UPhasmidKeyboardIconWidget> KeyboardIconWidgetClass;            // 0x00B8 (size: 0x8)
    FVector2D KeyboardIconSize;                                                       // 0x00C0 (size: 0x8)
    TArray<FKey> DoNotUseKeyboardIconForTheseKeys;                                    // 0x00C8 (size: 0x10)
    float ChargeSensitivity;                                                          // 0x00D8 (size: 0x4)
    float Fly_X_Sensitivity;                                                          // 0x00DC (size: 0x4)
    float Fly_Y_Sensitivity;                                                          // 0x00E0 (size: 0x4)
    float MouseSensitivity;                                                           // 0x00E4 (size: 0x4)
    float UseMouseForFlying;                                                          // 0x00E8 (size: 0x4)
    float ChargeModifier;                                                             // 0x00EC (size: 0x4)
    float TimeToHideMouseInCutscenes;                                                 // 0x00F0 (size: 0x4)
    float DefaultInvertMouseYForFly;                                                  // 0x00F4 (size: 0x4)

    float GetDefaultUseMouseForFlying();
    float GetDefaultTimeToHideMouseInCutscenes();
    float GetDefaultMouseSensitivity();
    float GetDefaultInvertMouseYForFly();
    float GetDefaultFlyYSensitivity();
    float GetDefaultFlyXSensitivity();
    float GetDefaultChargeSensitivity();
    float GetDefaultChargeModifier();
}; // Size: 0xF8

class UPhasmidInteractableComponent : public UActorComponent
{
    bool bIsInteractable;                                                             // 0x00F0 (size: 0x1)
    FPhasmidInteractableComponentOnInteract OnInteract;                               // 0x00F8 (size: 0x10)
    FPhasmidInteractableComponentOnEnableInteraction OnEnableInteraction;             // 0x0108 (size: 0x10)
    FPhasmidInteractableComponentOnDisableInteraction OnDisableInteraction;           // 0x0118 (size: 0x10)
    FGameplayTag InteractTrigger;                                                     // 0x0128 (size: 0x8)
    bool bRequiresLineOfSight;                                                        // 0x0130 (size: 0x1)
    bool bRequiresCollision;                                                          // 0x0131 (size: 0x1)
    bool bRequiresInput;                                                              // 0x0132 (size: 0x1)
    FName LinkedSceneComponentTag;                                                    // 0x0138 (size: 0x8)
    FGameplayTagQuery RequiredInteractorTagQuery;                                     // 0x0140 (size: 0x48)
    EPhasmidTeamId RequiredTeam;                                                      // 0x0188 (size: 0x1)

    void Unhighlight(class AActor* Interactor);
    void SetInteractable(bool Interactable);
    void OnRep_IsInteractable();
    void Multicast_Interact(class AActor* Interactor);
    bool Interact(class AActor* Interactor);
    void Highlight(class AActor* Interactor);
    bool GetInteractableByActor(class AActor* Interactor);
    bool GetInteractable();
}; // Size: 0x190

class UPhasmidInteractorComponent : public UActorComponent
{
    FGameplayTagContainer SourceBlockedTags;                                          // 0x00F0 (size: 0x20)
    TArray<class UPhasmidInteractableComponent*> Interactables;                       // 0x0110 (size: 0x10)

    void RemoveInteractable(class UPhasmidInteractableComponent* Interactable);
    void OnActorEndOverlap(class AActor* MyOverlappedActor, class AActor* OtherActor);
    void OnActorBeginOverlap(class AActor* MyOverlappedActor, class AActor* OtherActor);
    void InteractWith(class UPhasmidInteractableComponent* Interactable);
    void Interact();
    bool CanInteractWith(class UPhasmidInteractableComponent* Interactable);
    bool CanInteract();
    void AddInteractable(class UPhasmidInteractableComponent* Interactable);
}; // Size: 0x120

class UPhasmidInterpToMovementComponent : public UInterpToMovementComponent
{
    FPhasmidInterpToMovementComponentOnReachedControlPoint OnReachedControlPoint;     // 0x01E0 (size: 0x10)
    bool DoMovement;                                                                  // 0x01F0 (size: 0x1)
    bool bPushObstacles;                                                              // 0x01F1 (size: 0x1)
    FVector LastVelocity;                                                             // 0x01F4 (size: 0xC)
    float ReplicatedSplineTime;                                                       // 0x0208 (size: 0x4)

    bool TryPushObstacle(const FHitResult& Hit, float Time, FVector MoveDelta);
    void SyncCurrentTime(float ServerTime);
    void SetSpeed(float Speed);
    void OnRep_ReplicatedSplineTime();
    void OnReachedControlPointDelegate__DelegateSignature(int32 ControlPointIndex, float Precentage);
    FVector GetLastVelocity();
    float GetCurrentTime();
}; // Size: 0x228

class UPhasmidInventoryComponent : public UActorComponent
{
    TMap<EInventoryType, int32> inventoryItems;                                       // 0x00F8 (size: 0x50)

    int32 getInventory(TArray<FPhasmidInventoryItem>& Items);
}; // Size: 0x148

class UPhasmidKeyboardIconWidget : public UUserWidget
{

    void SetSize(FVector2D NewSize);
    void SetKeyForIconText(FKey Key);
}; // Size: 0x208

class UPhasmidMovementAttributeSet : public UPhasmidAttributeSet
{
    float GravityScale;                                                               // 0x0038 (size: 0x4)
    float MaxAcceleration;                                                            // 0x003C (size: 0x4)
    float CrouchedHalfHeight;                                                         // 0x0040 (size: 0x4)
    float MaxWalkSpeed;                                                               // 0x0044 (size: 0x4)
    float MaxWalkSpeedCrouched;                                                       // 0x0048 (size: 0x4)
    float BrakingDecelerationWalking;                                                 // 0x004C (size: 0x4)
    float JumpZVelocity;                                                              // 0x0050 (size: 0x4)
    float SecondJumpZVelocity;                                                        // 0x0054 (size: 0x4)
    float BrakingDecelerationFalling;                                                 // 0x0058 (size: 0x4)
    float AirControl;                                                                 // 0x005C (size: 0x4)
    float AirControlBoostThreshold;                                                   // 0x0060 (size: 0x4)
    float GroundFriction;                                                             // 0x0064 (size: 0x4)
    float FallingLateralFriction;                                                     // 0x0068 (size: 0x4)
    float JumpOffJumpZFactor;                                                         // 0x006C (size: 0x4)
    float MaxFlySpeed;                                                                // 0x0070 (size: 0x4)
    float BrakingDecelerationFlying;                                                  // 0x0074 (size: 0x4)
    float NavAgentRadius;                                                             // 0x0078 (size: 0x4)
    float NavAgentHeight;                                                             // 0x007C (size: 0x4)
    float MaxStepHeight;                                                              // 0x0080 (size: 0x4)
    float WalkableFloorAngle;                                                         // 0x0084 (size: 0x4)
    float RotationRateYaw;                                                            // 0x0088 (size: 0x4)
    float FlightYawRate;                                                              // 0x008C (size: 0x4)
    float FlightPitchRate;                                                            // 0x0090 (size: 0x4)
    float FlightMaxPitchAngle;                                                        // 0x0094 (size: 0x4)

}; // Size: 0x98

class UPhasmidNoiseAttributeSet : public UPhasmidAttributeSet
{
    float FootstepLoudness;                                                           // 0x0038 (size: 0x4)
    float FootstepMaxRange;                                                           // 0x003C (size: 0x4)

}; // Size: 0x40

class UPhasmidObjectSaveComponent : public UActorComponent
{
    FPhasmidObjectSaveDataList objectSaveData;                                        // 0x00F0 (size: 0x10)

    bool SetSaveParam(int32 dataIndex, int32 paramIndex, const FPhasmidSaveParam& saveParam, bool updateSave);
    void SetCollected(int32 dataIndex, bool updateSave);
    bool GetSaveParam(int32 dataIndex, int32 paramIndex, FPhasmidSaveParam& saveParam);
    int32 GetParamCount(int32 dataIndex);
    int32 GetItemCount();
    EInventoryType getInventoryType(int32 dataIndex);
    bool GetCollected(int32 dataIndex);
}; // Size: 0x100

class UPhasmidProjectileAttributeSet : public UAttributeSet
{
    float ProjectileSpeed;                                                            // 0x0030 (size: 0x4)
    float ProjectileGravityMultiplier;                                                // 0x0034 (size: 0x4)
    float ProjectileLifespan;                                                         // 0x0038 (size: 0x4)
    float ProjectileBounce;                                                           // 0x003C (size: 0x4)
    float ProjectilePiercing;                                                         // 0x0040 (size: 0x4)
    float MediumRangeMultiplier;                                                      // 0x0044 (size: 0x4)
    float MediumRangeThreshold;                                                       // 0x0048 (size: 0x4)
    float LongRangeMultiplier;                                                        // 0x004C (size: 0x4)
    float LongRangeThreshold;                                                         // 0x0050 (size: 0x4)

}; // Size: 0x58

class UPhasmidProjectileMovementComponent : public UProjectileMovementComponent
{
    class UCurveFloat* HorizontalHomingDegreeCurve;                                   // 0x01A8 (size: 0x8)
    class UCurveFloat* VerticalHomingDegreeCurve;                                     // 0x01B0 (size: 0x8)

}; // Size: 0x1B8

class UPhasmidRadialDamageAttributeSet : public UPhasmidAttributeSet
{
    float Radius;                                                                     // 0x0038 (size: 0x4)
    float InnerDamageMult;                                                            // 0x003C (size: 0x4)
    float OuterDamageMult;                                                            // 0x0040 (size: 0x4)

}; // Size: 0x48

class UPhasmidReloadExecution : public UGameplayEffectExecutionCalculation
{
}; // Size: 0x40

class UPhasmidResourceAttributeSet : public UAttributeSet
{
    float ResourceCurrent;                                                            // 0x0030 (size: 0x4)
    float ResourceMax;                                                                // 0x0034 (size: 0x4)
    float ReloadPoolCurrent;                                                          // 0x0038 (size: 0x4)
    float ReloadPoolMax;                                                              // 0x003C (size: 0x4)
    float ReloadSpeedMultiplier;                                                      // 0x0040 (size: 0x4)
    float ResourceRegenDelay;                                                         // 0x0044 (size: 0x4)
    float ResourceRegenInterval;                                                      // 0x0048 (size: 0x4)
    float ResourceConsumedPerUse;                                                     // 0x004C (size: 0x4)
    float ResourceConsumeInterval;                                                    // 0x0050 (size: 0x4)
    float ResourceGainedPerRegen;                                                     // 0x0054 (size: 0x4)

    void OnRep_ResourceMax();
    void OnRep_ResourceCurrent();
    void OnRep_ReloadPoolMax();
    void OnRep_ReloadPoolCurrent();
}; // Size: 0x58

class UPhasmidRichTextBox : public UCanvasPanel
{
    FText Text;                                                                       // 0x0130 (size: 0x18)
    bool forceRTL;                                                                    // 0x0148 (size: 0x1)
    bool force_centered;                                                              // 0x0149 (size: 0x1)
    FPhasmidRichTextBoxTextDelegate TextDelegate;                                     // 0x0150 (size: 0x10)
    FText GetText();
    bool sizeToFit;                                                                   // 0x0160 (size: 0x1)
    FSlateColor ColorAndOpacity;                                                      // 0x0168 (size: 0x28)
    FSlateFontInfo Font;                                                              // 0x0190 (size: 0x58)
    FVector2D ShadowOffset;                                                           // 0x01E8 (size: 0x8)
    FLinearColor ShadowColorAndOpacity;                                               // 0x01F0 (size: 0x10)
    float marqueeTime;                                                                // 0x0200 (size: 0x4)
    bool bWrapWithInvalidationPanel;                                                  // 0x0204 (size: 0x1)
    TEnumAsByte<ETextJustify::Type> Justification;                                    // 0x0205 (size: 0x1)
    FMargin LineMargin;                                                               // 0x0208 (size: 0x10)
    class UDataTable* ControlImageTable;                                              // 0x0218 (size: 0x8)
    float imageScalar;                                                                // 0x0220 (size: 0x4)
    class UDataTable* colorTable;                                                     // 0x0228 (size: 0x8)
    uint8 bEnableVerticalScroll;                                                      // 0x0230 (size: 0x1)
    float verticalScrollRate;                                                         // 0x0234 (size: 0x4)

    void SetTextAndRebuild(const FText& InText);
    void SetText(FText InText);
    void SetShadowOffset(FVector2D InShadowOffset);
    void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    void SetOpacity(float InOpacity);
    void SetMarqueeTime(float durationSeconds);
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    void SetFontSize(int32 FontSize);
    void SetFont(FSlateFontInfo InFontInfo);
    void SetColorAndOpacity(FSlateColor InColorAndOpacity);
    void RebuildTextBox();
    void MarqueeSkipToEndOfSection();
    void MarqueeSkipToEnd();
    bool MarqueeAllTextShown();
    void MarqueeAdvanceSection();
    void HandleOnNewInputSource(EInputSource NewSource);
    FText GetText();
    TEnumAsByte<ETextJustify::Type> GetJustification();
}; // Size: 0x2D8

class UPhasmidSecondaryDamageAttributeSet : public UPhasmidAttributeSet
{
    float DamageSecondary;                                                            // 0x0038 (size: 0x4)
    float CritMultiplierSecondary;                                                    // 0x003C (size: 0x4)
    float DamageRepeatIntervalSecondary;                                              // 0x0040 (size: 0x4)

}; // Size: 0x48

class UPhasmidSettings : public UObject
{

    void GetSettingAsVector2D(FString Name, bool& found, FVector2D& Value, bool& wrongType);
    void GetSettingAsVector(FString Name, bool& found, FVector& Value, bool& wrongType);
    void GetSettingAsString(FString Name, bool& found, FString& Value, bool& wrongType);
    void GetSettingAsInt(FString Name, bool& found, int32& Value, bool& wrongType);
    void GetSettingAsFloat(FString Name, bool& found, float& Value, bool& wrongType);
    void GetSettingAsColor(FString Name, bool& found, FLinearColor& Value, bool& wrongType);
    void GetSettingAsBool(FString Name, bool& found, bool& Value, bool& wrongType);
}; // Size: 0x38

class UPhasmidSoftReferenceLibrary : public UBlueprintFunctionLibrary
{

    class AActor* ResolveReference(FPhasmidSoftReference PhasmidSoftRef);
}; // Size: 0x28

class UPhasmidSplinePathJumpComponent : public UPrimitiveComponent
{
}; // Size: 0x690

class UPhasmidStateComponent : public UActorComponent
{
    bool bCanEnterFromSelf;                                                           // 0x00F0 (size: 0x1)
    FPhasmidStateComponentOnEnterState OnEnterState;                                  // 0x00F8 (size: 0x10)
    FPhasmidStateComponentOnReplicatedEnterState OnReplicatedEnterState;              // 0x0108 (size: 0x10)
    FPhasmidStateComponentOnExitState OnExitState;                                    // 0x0118 (size: 0x10)

    void SetNextState(FName NextStateName, class AActor* TriggeringActor, class AController* TriggeringController);
    void ReceiveTickState(float DeltaTime);
    void ReceiveReplicatedEnterState(float Timestamp);
    void ReceiveExitState();
    void ReceiveEnterState(class UPhasmidStateComponent* PreviousState, class AActor* TriggeringActor, class AController* TriggeringController, float EnterTime);
    void ReceiveDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, class AActor* DamagingActor, class AController* Instigator);
    bool GetTriggeredState(FName& Name, class AActor*& TriggeringActor, class AController*& TriggeringController, bool& bReplicateTrigger);
}; // Size: 0x130

class UPhasmidStateMachineComponent : public UActorComponent
{
    bool bDebugPrintStateChanges;                                                     // 0x00F8 (size: 0x1)
    FName BlueprintNextStateName;                                                     // 0x0100 (size: 0x8)
    TWeakObjectPtr<class AActor> LastPlayerOverlapped;                                // 0x0108 (size: 0x8)
    TWeakObjectPtr<class AActor> PreviousTriggeringActor;                             // 0x0110 (size: 0x8)
    TWeakObjectPtr<class AController> PreviousTriggeringController;                   // 0x0118 (size: 0x8)
    TWeakObjectPtr<class AActor> NextTriggeringActor;                                 // 0x0120 (size: 0x8)
    TWeakObjectPtr<class AController> NextTriggeringController;                       // 0x0128 (size: 0x8)
    FName InitialStateName;                                                           // 0x0130 (size: 0x8)
    FName GlobalStateName;                                                            // 0x0138 (size: 0x8)
    FStateReplicationInfo ReplicatedState;                                            // 0x0140 (size: 0x10)
    class UPhasmidStateComponent* CurrentState;                                       // 0x0150 (size: 0x8)
    class UPhasmidStateComponent* PreviousState;                                      // 0x0158 (size: 0x8)
    TWeakObjectPtr<class UPhasmidStateComponent> GlobalState;                         // 0x0160 (size: 0x8)

    void SetNextStateByName(FName stateName, class AActor* TriggeringActor, class AController* TriggeringController);
    void SetLastPlayerOverlapped(class AActor* Actor);
    bool SetCurrentStateByName(FName stateName, class AActor* TriggeringActor, class AController* TriggeringController, bool bReplicate);
    bool SetCurrentState(class UPhasmidStateComponent* State, class AActor* TriggeringActor, class AController* TriggeringController, bool bReplicate);
    void OnStateChange(class UPhasmidStateComponent* OldState, class UPhasmidStateComponent* NextState, class AActor* TriggeringActor, class AController* TriggeringController);
    void OnRep_CurrentState();
    void OnRep_CurrentGlobalState();
    void OnReceiveHit(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, class AActor* AttackingActor, class AController* Instigator);
    class AController* GetPreviousTriggeringController();
    class AActor* GetPreviousTriggeringActor();
    class UPhasmidStateComponent* GetPrevioustate();
    class AActor* GetLastPlayerOverlapped();
    class UPhasmidStateComponent* GetCurrentState();
}; // Size: 0x168

class UPhasmidStateMachineMovementCoordinator : public UActorComponent
{

    FVector GetOriginalPosition();
}; // Size: 0x148

class UPhasmidTask_ActivateAbilityByEvent : public UGameplayTask
{
    FGameplayTag EventTag;                                                            // 0x0068 (size: 0x8)
    FGameplayEventData Payload;                                                       // 0x0070 (size: 0xA8)
    class UPhasmidAbilitySystemComponent* AbilitySystemComponent;                     // 0x0118 (size: 0x8)
    float MaxTime;                                                                    // 0x0120 (size: 0x4)
    FPhasmidTask_ActivateAbilityByEventOnAbilityCommitted OnAbilityCommitted;         // 0x0128 (size: 0x10)
    FPhasmidTask_ActivateAbilityByEventOnAbilityFailed OnAbilityFailed;               // 0x0138 (size: 0x10)
    FPhasmidTask_ActivateAbilityByEventOnAbilityFinished OnAbilityFinished;           // 0x0148 (size: 0x10)

    class UPhasmidTask_ActivateAbilityByEvent* ActivateAbilityByInputAction(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, class UActorComponent* AbilityManager, int32 InputAction, float MaxTime);
    class UPhasmidTask_ActivateAbilityByEvent* ActivateAbilityByEvent(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, class UPhasmidAbilitySystemComponent* AbilitySystemComponent, FGameplayTag EventTag, FGameplayEventData Payload, float MaxTime);
}; // Size: 0x168

class UPhasmidTask_ConsumeCost : public UAbilityTask
{
    FPhasmidTask_ConsumeCostOnOutOfResource OnOutOfResource;                          // 0x0080 (size: 0x10)

    class UPhasmidTask_ConsumeCost* ApplyCostOnIntervalCancelable(class UGameplayAbility* OwningAbility, FName TaskName, FGameplayAttribute IntervalAttribute, bool ConsumeOnActivation);
    class UPhasmidTask_ConsumeCost* ApplyCostOnInterval(class UGameplayAbility* OwningAbility, FGameplayAttribute IntervalAttribute, bool ConsumeOnActivation);
}; // Size: 0xB8

class UPhasmidTask_JumpWithConfirm : public UGameplayTask
{
    FPhasmidTask_JumpWithConfirmSuccess Success;                                      // 0x0068 (size: 0x10)
    FPhasmidTask_JumpWithConfirmFail Fail;                                            // 0x0078 (size: 0x10)

    class UPhasmidTask_JumpWithConfirm* JumpWithConfirm(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, class ACharacter* Character);
    void JumpConfirmCallback(class ACharacter* Character, bool bSuccess);
}; // Size: 0xA0

class UPhasmidTask_RepeatActionInState : public UAbilityTask
{
    FPhasmidTask_RepeatActionInStateRepeatAction RepeatAction;                        // 0x0080 (size: 0x10)
    FPhasmidTask_RepeatActionInStateOnStateEnded OnStateEnded;                        // 0x0090 (size: 0x10)
    FPhasmidTask_RepeatActionInStateOnStateInterrupted OnStateInterrupted;            // 0x00A0 (size: 0x10)

    class UPhasmidTask_RepeatActionInState* StartRepeatActionInState(class UGameplayAbility* OwningAbility, FName stateName, float TimeBetweenActions, bool bRunActionImmediately, bool bEndCurrentState);
}; // Size: 0xD8

class UPhasmidTask_StartAbilityTickState : public UAbilityTask
{
    FPhasmidTask_StartAbilityTickStateTickDelegate TickDelegate;                      // 0x0080 (size: 0x10)
    FPhasmidTask_StartAbilityTickStateOnStateEnded OnStateEnded;                      // 0x0090 (size: 0x10)
    FPhasmidTask_StartAbilityTickStateOnStateInterrupted OnStateInterrupted;          // 0x00A0 (size: 0x10)

    class UPhasmidTask_StartAbilityTickState* StartTickingAbilityState(class UGameplayAbility* OwningAbility, FName stateName, bool bEndCurrentState);
}; // Size: 0xC8

class UPhasmidUtilityMethod : public UObject
{

    void TickUtilityMethod(float DeltaTime, bool CurrentlySelected);
    void OnUtilityMethodSelected();
    void OnUtilityMethodExited();
    float CalculateUtility(class AAIController* Controller, class APawn* ControlledPawn, const FPhasmidEnemyBehaviorParams& Parameters);
}; // Size: 0x28

class UPhasmidWaveSpawnerComponent : public UActorComponent
{
    TArray<FPhasmidWaveData> Waves;                                                   // 0x00F8 (size: 0x10)
    FPhasmidWaveSpawnerComponentOnWaveSpawned OnWaveSpawned;                          // 0x0108 (size: 0x10)
    FPhasmidWaveSpawnerComponentOnReinforcementSpawned OnReinforcementSpawned;        // 0x0118 (size: 0x10)
    uint8 bStartEnabled;                                                              // 0x0158 (size: 0x1)
    uint8 bLoopSpawner;                                                               // 0x0158 (size: 0x1)

    void StopSpawner();
    void StartSpawner();
    void PauseSpawner();
    TArray<class AActor*> GetCurrentWaveActors();
    void ExecuteSpawnerCommand(EPhasmidWaveSpawnerCommand Command);
    void EndCurrentWave();
    int32 CurrentWaveIndex();
    EPhasmidWaveSpawnerState CurrentState();
    void AddActorsToSpawnerFast(TArray<class AActor*> Actors);
    void AddActorsToSpawner(TArray<class AActor*> Actors);
}; // Size: 0x160

class UPhasmidWeaponLibrary : public UBlueprintFunctionLibrary
{

    class UDecalComponent* SpawnDecalAtLocationWithFadeSize(const class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan, float FadedScreenSize);
}; // Size: 0x28

class UPhasmidWorldEventListenerComponent : public UActorComponent
{
    bool eventLevelAddedToWorld;                                                      // 0x00F0 (size: 0x1)
    bool eventLevelRemovedFromWorld;                                                  // 0x00F1 (size: 0x1)

    void subscribeEventLevelRemovedFromWorld(bool listen);
    void subscribeEventLevelAddedToWorld(bool listen);
}; // Size: 0xF8

class UPlayerInteractorComponent : public UPhasmidInteractorComponent
{
    class UPhasmidInteractableComponent* HighlightedComponent;                        // 0x0120 (size: 0x8)

    void UpdateHighlighted();
    void SortInteractables();
    void Multicast_HighlightInteractable(class UPhasmidInteractableComponent* NewInteractable);
    void Interact();
}; // Size: 0x128

class UPooledActorBlueprintLibrary : public UBlueprintFunctionLibrary
{

    class AActor* StartSpawnPooledActor(TSubclassOf<class AActor> ActorClass, const FTransform& Transform, class AActor* PoolOwner);
    class AActor* SpawnPooledActor(TSubclassOf<class AActor> ActorClass, const FTransform& Transform, class AActor* PoolOwner);
    void ReleasePooledActor(class AActor* Actor);
    void InitPoolForActor(class AActor* Actor);
    class AActor* FinishSpawnPooledActor(class AActor* SpawnedActor);
    void AddActorToPool(class AActor* Actor);
}; // Size: 0x28

class USplineMovementComponent : public UMovementComponent
{
    FSplineMovementComponentOnFinished OnFinished;                                    // 0x0140 (size: 0x10)
    bool bStartAtClosestPoint;                                                        // 0x0150 (size: 0x1)
    ESplineSnapType SnapToSpline;                                                     // 0x0154 (size: 0x4)
    bool bRotateWithSpline;                                                           // 0x0158 (size: 0x1)
    bool bMove;                                                                       // 0x0159 (size: 0x1)
    bool bSweepOnMove;                                                                // 0x015A (size: 0x1)
    bool bClampTime;                                                                  // 0x015B (size: 0x1)
    class AActor* InitialSplineActor;                                                 // 0x0160 (size: 0x8)
    EFollowSplineType FollowType;                                                     // 0x0168 (size: 0x4)
    float OverrideSplineTime;                                                         // 0x016C (size: 0x4)
    class UCurveFloat* SplineTimeCurve;                                               // 0x0170 (size: 0x8)
    FTransform TransformOffset;                                                       // 0x0180 (size: 0x30)
    bool bSyncToWorldTime;                                                            // 0x01C4 (size: 0x1)

    void SetSplineTime(float Time, bool bNewMove);
    bool SetFollowSplineByName(class AActor* SplineHolder, const FName& SplineName);
    void SetFollowSpline(class USplineComponent* Spline);
    void Client_FollowSplineWithParams(class USplineComponent* Spline, bool bReverseSpline, bool bLooping, bool bStartAtNearestWaypoint, float TimeOffset);
}; // Size: 0x1D0

class UUPhasmidAbilityTask_SpawnBullet : public UAbilityTask
{
    FUPhasmidAbilityTask_SpawnBulletSuccess Success;                                  // 0x0080 (size: 0x10)
    FUPhasmidAbilityTask_SpawnBulletDidNotSpawn DidNotSpawn;                          // 0x0090 (size: 0x10)

    class UUPhasmidAbilityTask_SpawnBullet* SpawnProjectileFromTarget(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<class AActor> Class);
    class UUPhasmidAbilityTask_SpawnBullet* SpawnProjectile(class UGameplayAbility* OwningAbility, const FTransform& Transform, TSubclassOf<class AActor> Class);
    void FinishSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class AActor* SpawnedActor);
    bool BeginSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<class AActor> Class, class AActor*& SpawnedActor);
}; // Size: 0xD0

class UVisibilityComponent : public UActorComponent
{
    FString level_name;                                                               // 0x00F0 (size: 0x10)
    bool bIgnoreRequestToMakeVisible;                                                 // 0x0100 (size: 0x1)

    void BeginPlay();
}; // Size: 0x108

#endif
