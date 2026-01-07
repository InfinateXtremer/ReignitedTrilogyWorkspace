#ifndef UE4SS_SDK_AnimGraphRuntime_HPP
#define UE4SS_SDK_AnimGraphRuntime_HPP

#include "AnimGraphRuntime_enums.hpp"

struct FAnimLegIKData
{
}; // Size: 0x70

struct FAnimLegIKDefinition
{
    FBoneReference IKFootBone;                                                        // 0x0000 (size: 0x18)
    FBoneReference FKFootBone;                                                        // 0x0018 (size: 0x18)
    int32 NumBonesInLimb;                                                             // 0x0030 (size: 0x4)
    TEnumAsByte<EAxis::Type> FootBoneForwardAxis;                                     // 0x0034 (size: 0x1)
    bool bEnableRotationLimit;                                                        // 0x0035 (size: 0x1)
    float MinRotationAngle;                                                           // 0x0038 (size: 0x4)
    bool bEnableKneeTwistCorrection;                                                  // 0x003C (size: 0x1)

}; // Size: 0x40

struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
    FPoseLink BasePose;                                                               // 0x0128 (size: 0x18)
    int32 LODThreshold;                                                               // 0x0140 (size: 0x4)
    bool bIsLODEnabled;                                                               // 0x0144 (size: 0x1)
    FVector LookAtLocation;                                                           // 0x0148 (size: 0xC)
    FName SourceSocketName;                                                           // 0x0158 (size: 0x8)
    FName PivotSocketName;                                                            // 0x0160 (size: 0x8)
    FVector SocketAxis;                                                               // 0x0168 (size: 0xC)
    float Alpha;                                                                      // 0x0174 (size: 0x4)
    FBoneReference SocketBoneReference;                                               // 0x0178 (size: 0x18)
    FTransform SocketLocalTransform;                                                  // 0x0190 (size: 0x30)
    FBoneReference PivotSocketBoneReference;                                          // 0x01C0 (size: 0x18)
    FTransform PivotSocketLocalTransform;                                             // 0x01E0 (size: 0x30)

}; // Size: 0x210

struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
    AnimPhysSimSpaceType SimulationSpace;                                             // 0x0070 (size: 0x1)
    FBoneReference RelativeSpaceBone;                                                 // 0x0078 (size: 0x18)
    bool bChain;                                                                      // 0x0090 (size: 0x1)
    FBoneReference BoundBone;                                                         // 0x0098 (size: 0x18)
    FBoneReference ChainEnd;                                                          // 0x00B0 (size: 0x18)
    FVector BoxExtents;                                                               // 0x00C8 (size: 0xC)
    FVector LocalJointOffset;                                                         // 0x00D4 (size: 0xC)
    float GravityScale;                                                               // 0x00E0 (size: 0x4)
    bool bLinearSpring;                                                               // 0x00E4 (size: 0x1)
    bool bAngularSpring;                                                              // 0x00E5 (size: 0x1)
    float LinearSpringConstant;                                                       // 0x00E8 (size: 0x4)
    float AngularSpringConstant;                                                      // 0x00EC (size: 0x4)
    bool bEnableWind;                                                                 // 0x00F0 (size: 0x1)
    bool bWindWasEnabled;                                                             // 0x00F1 (size: 0x1)
    float WindScale;                                                                  // 0x00F4 (size: 0x4)
    bool bOverrideLinearDamping;                                                      // 0x00F8 (size: 0x1)
    float LinearDampingOverride;                                                      // 0x00FC (size: 0x4)
    bool bOverrideAngularDamping;                                                     // 0x0100 (size: 0x1)
    float AngularDampingOverride;                                                     // 0x0104 (size: 0x4)
    bool bOverrideAngularBias;                                                        // 0x0108 (size: 0x1)
    float AngularBiasOverride;                                                        // 0x010C (size: 0x4)
    bool bDoUpdate;                                                                   // 0x0110 (size: 0x1)
    bool bDoEval;                                                                     // 0x0111 (size: 0x1)
    int32 NumSolverIterationsPreUpdate;                                               // 0x0114 (size: 0x4)
    int32 NumSolverIterationsPostUpdate;                                              // 0x0118 (size: 0x4)
    FAnimPhysConstraintSetup ConstraintSetup;                                         // 0x011C (size: 0x5C)
    bool bUsePlanarLimit;                                                             // 0x0178 (size: 0x1)
    TArray<FAnimPhysPlanarLimit> PlanarLimits;                                        // 0x0180 (size: 0x10)
    bool bUseSphericalLimits;                                                         // 0x0190 (size: 0x1)
    TArray<FAnimPhysSphericalLimit> SphericalLimits;                                  // 0x0198 (size: 0x10)
    AnimPhysCollisionType CollisionType;                                              // 0x01A8 (size: 0x1)
    float SphereCollisionRadius;                                                      // 0x01AC (size: 0x4)
    FVector ExternalForce;                                                            // 0x01B0 (size: 0xC)

}; // Size: 0x280

struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
    FPoseLink Base;                                                                   // 0x0030 (size: 0x18)
    FPoseLink Additive;                                                               // 0x0048 (size: 0x18)
    float Alpha;                                                                      // 0x0060 (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0064 (size: 0x8)
    int32 LODThreshold;                                                               // 0x006C (size: 0x4)
    float ActualAlpha;                                                                // 0x0070 (size: 0x4)

}; // Size: 0x78

struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
    FPoseLink A;                                                                      // 0x0030 (size: 0x18)
    FPoseLink B;                                                                      // 0x0048 (size: 0x18)
    float Alpha;                                                                      // 0x0060 (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0064 (size: 0x8)
    TArray<FBlendBoneByChannelEntry> BoneDefinitions;                                 // 0x0070 (size: 0x10)
    TEnumAsByte<EBoneControlSpace> TransformsSpace;                                   // 0x0080 (size: 0x1)
    float InternalBlendAlpha;                                                         // 0x0084 (size: 0x4)
    bool bBIsRelevant;                                                                // 0x0088 (size: 0x1)
    TArray<FBlendBoneByChannelEntry> ValidBoneEntries;                                // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FAnimNode_BlendListBase : public FAnimNode_Base
{
    TArray<FPoseLink> BlendPose;                                                      // 0x0030 (size: 0x10)
    TArray<float> BlendTime;                                                          // 0x0040 (size: 0x10)
    EAlphaBlendOption BlendType;                                                      // 0x0050 (size: 0x1)
    class UCurveFloat* CustomBlendCurve;                                              // 0x0058 (size: 0x8)
    class UBlendProfile* BlendProfile;                                                // 0x0060 (size: 0x8)
    TArray<FAlphaBlend> Blends;                                                       // 0x0068 (size: 0x10)
    TArray<float> BlendWeights;                                                       // 0x0078 (size: 0x10)
    TArray<float> RemainingBlendTimes;                                                // 0x0088 (size: 0x10)
    int32 LastActiveChildIndex;                                                       // 0x0098 (size: 0x4)
    TArray<FBlendSampleData> PerBoneSampleData;                                       // 0x00A0 (size: 0x10)
    bool bResetChildOnActivation;                                                     // 0x00C0 (size: 0x1)

}; // Size: 0xC8

struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
    bool bActiveValue;                                                                // 0x00C8 (size: 0x1)

}; // Size: 0xD0

struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
    TArray<int32> EnumToPoseIndex;                                                    // 0x00C8 (size: 0x10)
    uint8 ActiveEnumValue;                                                            // 0x00D8 (size: 0x1)

}; // Size: 0xE0

struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
    int32 ActiveChildIndex;                                                           // 0x00C8 (size: 0x4)

}; // Size: 0xD0

struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
    float NormalizedTime;                                                             // 0x0128 (size: 0x4)

}; // Size: 0x130

struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
    float X;                                                                          // 0x0058 (size: 0x4)
    float Y;                                                                          // 0x005C (size: 0x4)
    float Z;                                                                          // 0x0060 (size: 0x4)
    float PlayRate;                                                                   // 0x0064 (size: 0x4)
    bool bLoop;                                                                       // 0x0068 (size: 0x1)
    float StartPosition;                                                              // 0x006C (size: 0x4)
    class UBlendSpaceBase* BlendSpace;                                                // 0x0070 (size: 0x8)
    bool bResetPlayTimeWhenBlendSpaceChanges;                                         // 0x0078 (size: 0x1)
    FBlendFilter BlendFilter;                                                         // 0x0080 (size: 0x90)
    TArray<FBlendSampleData> BlendSampleDataCache;                                    // 0x0110 (size: 0x10)
    class UBlendSpaceBase* PreviousBlendSpace;                                        // 0x0120 (size: 0x8)

}; // Size: 0x128

struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;                                                        // 0x0070 (size: 0x18)
    TEnumAsByte<EComponentType::Type> SourceComponent;                                // 0x0088 (size: 0x1)
    class UCurveFloat* DrivingCurve;                                                  // 0x0090 (size: 0x8)
    float Multiplier;                                                                 // 0x0098 (size: 0x4)
    bool bUseRange;                                                                   // 0x009C (size: 0x1)
    float RangeMin;                                                                   // 0x00A0 (size: 0x4)
    float RangeMax;                                                                   // 0x00A4 (size: 0x4)
    float RemappedMin;                                                                // 0x00A8 (size: 0x4)
    float RemappedMax;                                                                // 0x00AC (size: 0x4)
    EDrivenDestinationMode DestinationMode;                                           // 0x00B0 (size: 0x1)
    FName ParameterName;                                                              // 0x00B8 (size: 0x8)
    FBoneReference TargetBone;                                                        // 0x00C0 (size: 0x18)
    TEnumAsByte<EComponentType::Type> TargetComponent;                                // 0x00D8 (size: 0x1)
    uint8 bAffectTargetTranslationX;                                                  // 0x00DC (size: 0x1)
    uint8 bAffectTargetTranslationY;                                                  // 0x00DC (size: 0x1)
    uint8 bAffectTargetTranslationZ;                                                  // 0x00DC (size: 0x1)
    uint8 bAffectTargetRotationX;                                                     // 0x00DC (size: 0x1)
    uint8 bAffectTargetRotationY;                                                     // 0x00DC (size: 0x1)
    uint8 bAffectTargetRotationZ;                                                     // 0x00DC (size: 0x1)
    uint8 bAffectTargetScaleX;                                                        // 0x00DC (size: 0x1)
    uint8 bAffectTargetScaleY;                                                        // 0x00DC (size: 0x1)
    uint8 bAffectTargetScaleZ;                                                        // 0x00DD (size: 0x1)
    EDrivenBoneModificationMode ModificationMode;                                     // 0x00E0 (size: 0x1)

}; // Size: 0xE8

struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;                                                      // 0x0070 (size: 0x18)
    TArray<FConstraint> ConstraintSetup;                                              // 0x0088 (size: 0x10)
    TArray<float> ConstraintWeights;                                                  // 0x0098 (size: 0x10)

}; // Size: 0xB8

struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;                                                        // 0x0070 (size: 0x18)
    FBoneReference TargetBone;                                                        // 0x0088 (size: 0x18)
    bool bCopyTranslation;                                                            // 0x00A0 (size: 0x1)
    bool bCopyRotation;                                                               // 0x00A1 (size: 0x1)
    bool bCopyScale;                                                                  // 0x00A2 (size: 0x1)
    TEnumAsByte<EBoneControlSpace> ControlSpace;                                      // 0x00A3 (size: 0x1)

}; // Size: 0xA8

struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;                                                        // 0x0070 (size: 0x18)
    FBoneReference TargetBone;                                                        // 0x0088 (size: 0x18)
    bool bCopyTranslation;                                                            // 0x00A0 (size: 0x1)
    bool bCopyRotation;                                                               // 0x00A1 (size: 0x1)
    bool bCopyScale;                                                                  // 0x00A2 (size: 0x1)
    CopyBoneDeltaMode CopyMode;                                                       // 0x00A3 (size: 0x1)
    float TranslationMultiplier;                                                      // 0x00A4 (size: 0x4)
    float RotationMultiplier;                                                         // 0x00A8 (size: 0x4)
    float ScaleMultiplier;                                                            // 0x00AC (size: 0x4)

}; // Size: 0xB0

struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
    TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                 // 0x0030 (size: 0x8)
    bool bUseAttachedParent;                                                          // 0x0038 (size: 0x1)
    bool bCopyCurves;                                                                 // 0x0039 (size: 0x1)

}; // Size: 0xE8

struct FAnimNode_CurveSource : public FAnimNode_Base
{
    FPoseLink SourcePose;                                                             // 0x0030 (size: 0x18)
    FName SourceBinding;                                                              // 0x0048 (size: 0x8)
    float Alpha;                                                                      // 0x0050 (size: 0x4)
    TScriptInterface<class ICurveSourceInterface> CurveSource;                        // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
    FTransform EffectorTransform;                                                     // 0x0070 (size: 0x30)
    TEnumAsByte<EBoneControlSpace> EffectorTransformSpace;                            // 0x00A0 (size: 0x1)
    FBoneReference EffectorTransformBone;                                             // 0x00A8 (size: 0x18)
    FBoneSocketTarget EffectorTarget;                                                 // 0x00C0 (size: 0x60)
    TEnumAsByte<EBoneRotationSource> EffectorRotationSource;                          // 0x0120 (size: 0x1)
    FBoneReference TipBone;                                                           // 0x0128 (size: 0x18)
    FBoneReference RootBone;                                                          // 0x0140 (size: 0x18)
    float Precision;                                                                  // 0x0158 (size: 0x4)
    int32 MaxIterations;                                                              // 0x015C (size: 0x4)
    bool bEnableDebugDraw;                                                            // 0x0160 (size: 0x1)

}; // Size: 0x170

struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
    FBoneReference RightHandFK;                                                       // 0x0070 (size: 0x18)
    FBoneReference LeftHandFK;                                                        // 0x0088 (size: 0x18)
    FBoneReference RightHandIK;                                                       // 0x00A0 (size: 0x18)
    FBoneReference LeftHandIK;                                                        // 0x00B8 (size: 0x18)
    TArray<FBoneReference> IKBonesToMove;                                             // 0x00D0 (size: 0x10)
    float HandFKWeight;                                                               // 0x00E0 (size: 0x4)

}; // Size: 0xE8

struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
    FPoseLink BasePose;                                                               // 0x0030 (size: 0x18)
    TArray<FPoseLink> BlendPoses;                                                     // 0x0048 (size: 0x10)
    TArray<FInputBlendPose> LayerSetup;                                               // 0x0058 (size: 0x10)
    TArray<float> BlendWeights;                                                       // 0x0068 (size: 0x10)
    bool bMeshSpaceRotationBlend;                                                     // 0x0078 (size: 0x1)
    TEnumAsByte<ECurveBlendOption::Type> CurveBlendOption;                            // 0x0079 (size: 0x1)
    bool bBlendRootMotionBasedOnRootBone;                                             // 0x007A (size: 0x1)
    bool bHasRelevantPoses;                                                           // 0x007B (size: 0x1)
    TArray<FPerBoneBlendWeight> PerBoneBlendWeights;                                  // 0x0080 (size: 0x10)
    FGuid SkeletonGuid;                                                               // 0x0090 (size: 0x10)
    FGuid VirtualBoneGuid;                                                            // 0x00A0 (size: 0x10)

}; // Size: 0xE0

struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
    float ReachPrecision;                                                             // 0x0070 (size: 0x4)
    int32 MaxIterations;                                                              // 0x0074 (size: 0x4)
    TArray<FAnimLegIKDefinition> LegsDefinition;                                      // 0x0078 (size: 0x10)
    TArray<FAnimLegIKData> LegsData;                                                  // 0x0088 (size: 0x10)

}; // Size: 0x98

struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;                                                      // 0x0070 (size: 0x18)
    FBoneReference LookAtBone;                                                        // 0x0088 (size: 0x18)
    FName LookAtSocket;                                                               // 0x00A0 (size: 0x8)
    FBoneSocketTarget LookAtTarget;                                                   // 0x00B0 (size: 0x60)
    FVector LookAtLocation;                                                           // 0x0110 (size: 0xC)
    TEnumAsByte<EAxisOption::Type> LookAtAxis;                                        // 0x011C (size: 0x1)
    FVector CustomLookAtAxis;                                                         // 0x0120 (size: 0xC)
    FAxis LookAt_Axis;                                                                // 0x012C (size: 0x10)
    bool bUseLookUpAxis;                                                              // 0x013C (size: 0x1)
    TEnumAsByte<EAxisOption::Type> LookUpAxis;                                        // 0x013D (size: 0x1)
    FVector CustomLookUpAxis;                                                         // 0x0140 (size: 0xC)
    FAxis LookUp_Axis;                                                                // 0x014C (size: 0x10)
    float LookAtClamp;                                                                // 0x015C (size: 0x4)
    TEnumAsByte<EInterpolationBlend::Type> InterpolationType;                         // 0x0160 (size: 0x1)
    float InterpolationTime;                                                          // 0x0164 (size: 0x4)
    float InterpolationTriggerThreashold;                                             // 0x0168 (size: 0x4)

}; // Size: 0x1A0

struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
    FPoseLink Base;                                                                   // 0x0030 (size: 0x18)
    FPoseLink Additive;                                                               // 0x0048 (size: 0x18)
    bool bMeshSpaceAdditive;                                                          // 0x0060 (size: 0x1)

}; // Size: 0x68

struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{
}; // Size: 0x30

struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;                                                      // 0x0070 (size: 0x18)
    FVector Translation;                                                              // 0x0088 (size: 0xC)
    FRotator Rotation;                                                                // 0x0094 (size: 0xC)
    FVector Scale;                                                                    // 0x00A0 (size: 0xC)
    TEnumAsByte<EBoneModificationMode> TranslationMode;                               // 0x00AC (size: 0x1)
    TEnumAsByte<EBoneModificationMode> RotationMode;                                  // 0x00AD (size: 0x1)
    TEnumAsByte<EBoneModificationMode> ScaleMode;                                     // 0x00AE (size: 0x1)
    TEnumAsByte<EBoneControlSpace> TranslationSpace;                                  // 0x00AF (size: 0x1)
    TEnumAsByte<EBoneControlSpace> RotationSpace;                                     // 0x00B0 (size: 0x1)
    TEnumAsByte<EBoneControlSpace> ScaleSpace;                                        // 0x00B1 (size: 0x1)

}; // Size: 0xB8

struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
    FPoseLink SourcePose;                                                             // 0x0030 (size: 0x18)
    EModifyCurveApplyMode ApplyMode;                                                  // 0x0048 (size: 0x1)
    TArray<float> CurveValues;                                                        // 0x0050 (size: 0x10)
    TArray<FName> CurveNames;                                                         // 0x0060 (size: 0x10)
    float Alpha;                                                                      // 0x0070 (size: 0x4)

}; // Size: 0x78

struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
    TArray<FPoseLink> Poses;                                                          // 0x0030 (size: 0x10)
    TArray<float> DesiredAlphas;                                                      // 0x0040 (size: 0x10)
    bool bAdditiveNode;                                                               // 0x0050 (size: 0x1)
    bool bNormalizeAlpha;                                                             // 0x0051 (size: 0x1)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0054 (size: 0x8)

}; // Size: 0x70

struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToObserve;                                                     // 0x0070 (size: 0x18)
    TEnumAsByte<EBoneControlSpace> DisplaySpace;                                      // 0x0088 (size: 0x1)
    bool bRelativeToRefPose;                                                          // 0x0089 (size: 0x1)
    FVector Translation;                                                              // 0x008C (size: 0xC)
    FRotator Rotation;                                                                // 0x0098 (size: 0xC)
    FVector Scale;                                                                    // 0x00A4 (size: 0xC)

}; // Size: 0xB0

struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
    FPoseLink SourcePose;                                                             // 0x00A0 (size: 0x18)
    EAlphaBlendOption BlendOption;                                                    // 0x00B8 (size: 0x1)
    class UCurveFloat* CustomCurve;                                                   // 0x00C0 (size: 0x8)

}; // Size: 0xC8

struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
    FName PoseName;                                                                   // 0x00A0 (size: 0x8)
    float PoseWeight;                                                                 // 0x00A8 (size: 0x4)

}; // Size: 0xB0

struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
    FPoseLink SourcePose;                                                             // 0x00A0 (size: 0x18)
    TArray<FBoneReference> SourceBones;                                               // 0x00B8 (size: 0x10)
    bool bOnlyDriveSelectedBones;                                                     // 0x00C8 (size: 0x1)
    TArray<FBoneReference> OnlyDriveBones;                                            // 0x00D0 (size: 0x10)
    FBoneReference EvalSpaceBone;                                                     // 0x00E0 (size: 0x18)
    FRBFParams RBFParams;                                                             // 0x00F8 (size: 0x10)
    EPoseDriverSource DriveSource;                                                    // 0x0108 (size: 0x1)
    EPoseDriverOutput DriveOutput;                                                    // 0x0109 (size: 0x1)
    TArray<FPoseDriverTarget> PoseTargets;                                            // 0x0110 (size: 0x10)
    FBoneReference SourceBone;                                                        // 0x0120 (size: 0x18)
    TEnumAsByte<EBoneAxis> TwistAxis;                                                 // 0x0138 (size: 0x1)
    EPoseDriverType Type;                                                             // 0x0139 (size: 0x1)
    float RadialScaling;                                                              // 0x013C (size: 0x4)

}; // Size: 0x178

struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
    class UPoseAsset* PoseAsset;                                                      // 0x0058 (size: 0x8)

}; // Size: 0xA0

struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
    ESnapshotSourceMode Mode;                                                         // 0x0030 (size: 0x1)
    FName SnapshotName;                                                               // 0x0038 (size: 0x8)
    FPoseSnapshot Snapshot;                                                           // 0x0040 (size: 0x38)

}; // Size: 0xB0

struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
    bool bShuffleMode;                                                                // 0x0030 (size: 0x1)
    TArray<FRandomPlayerSequenceEntry> Entries;                                       // 0x0038 (size: 0x10)

}; // Size: 0x90

struct FAnimNode_RefPose : public FAnimNode_Base
{
    TEnumAsByte<ERefPoseType> RefPoseType;                                            // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FAnimNode_Root : public FAnimNode_Base
{
    FPoseLink Result;                                                                 // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
    FPoseLink BasePose;                                                               // 0x0030 (size: 0x18)
    float Pitch;                                                                      // 0x0048 (size: 0x4)
    float Yaw;                                                                        // 0x004C (size: 0x4)
    FRotator MeshToComponent;                                                         // 0x0050 (size: 0xC)

}; // Size: 0x60

struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
    FBoneReference TargetBone;                                                        // 0x0070 (size: 0x18)
    FBoneReference SourceBone;                                                        // 0x0088 (size: 0x18)
    float Multiplier;                                                                 // 0x00A0 (size: 0x4)
    TEnumAsByte<EBoneAxis> RotationAxisToRefer;                                       // 0x00A4 (size: 0x1)
    bool bIsAdditive;                                                                 // 0x00A5 (size: 0x1)

}; // Size: 0xA8

struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
    FPoseLink BasePose;                                                               // 0x0128 (size: 0x18)
    int32 LODThreshold;                                                               // 0x0140 (size: 0x4)
    bool bIsLODEnabled;                                                               // 0x0144 (size: 0x1)
    float Alpha;                                                                      // 0x0148 (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x014C (size: 0x8)
    float ActualAlpha;                                                                // 0x0154 (size: 0x4)

}; // Size: 0x158

struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
    FPoseLink InputPose;                                                              // 0x0030 (size: 0x18)
    float DefaultChainLength;                                                         // 0x0048 (size: 0x4)
    FBoneReference ChainStartBone;                                                    // 0x0050 (size: 0x18)
    FBoneReference ChainEndBone;                                                      // 0x0068 (size: 0x18)
    EScaleChainInitialLength ChainInitialLength;                                      // 0x0080 (size: 0x1)
    FVector TargetLocation;                                                           // 0x0084 (size: 0xC)
    float Alpha;                                                                      // 0x0090 (size: 0x4)
    float ActualAlpha;                                                                // 0x0094 (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0098 (size: 0x8)
    bool bBoneIndicesCached;                                                          // 0x00A0 (size: 0x1)

}; // Size: 0xB8

struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
    class UAnimSequenceBase* Sequence;                                                // 0x0058 (size: 0x8)
    float ExplicitTime;                                                               // 0x0060 (size: 0x4)
    bool bShouldLoop;                                                                 // 0x0064 (size: 0x1)
    bool bTeleportToExplicitTime;                                                     // 0x0065 (size: 0x1)
    float StartPosition;                                                              // 0x0068 (size: 0x4)
    TEnumAsByte<ESequenceEvalReinit::Type> ReinitializationBehavior;                  // 0x006C (size: 0x1)
    bool bReinitialized;                                                              // 0x006D (size: 0x1)

}; // Size: 0x70

struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
    FComponentSpacePoseLink ComponentPose;                                            // 0x0030 (size: 0x18)
    float Alpha;                                                                      // 0x0048 (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x004C (size: 0x8)
    int32 LODThreshold;                                                               // 0x0054 (size: 0x4)
    float ActualAlpha;                                                                // 0x0058 (size: 0x4)

}; // Size: 0x70

struct FAnimNode_Slot : public FAnimNode_Base
{
    FPoseLink Source;                                                                 // 0x0030 (size: 0x18)
    FName SlotName;                                                                   // 0x0048 (size: 0x8)
    bool bAlwaysUpdateSourcePose;                                                     // 0x0050 (size: 0x1)

}; // Size: 0x68

struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
    FBoneReference StartBone;                                                         // 0x0070 (size: 0x18)
    FBoneReference EndBone;                                                           // 0x0088 (size: 0x18)
    ESplineBoneAxis BoneAxis;                                                         // 0x00A0 (size: 0x1)
    bool bAutoCalculateSpline;                                                        // 0x00A1 (size: 0x1)
    int32 PointCount;                                                                 // 0x00A4 (size: 0x4)
    TArray<FTransform> ControlPoints;                                                 // 0x00A8 (size: 0x10)
    float Roll;                                                                       // 0x00B8 (size: 0x4)
    float TwistStart;                                                                 // 0x00BC (size: 0x4)
    float TwistEnd;                                                                   // 0x00C0 (size: 0x4)
    FAlphaBlend TwistBlend;                                                           // 0x00C8 (size: 0x38)
    float Stretch;                                                                    // 0x0100 (size: 0x4)
    float Offset;                                                                     // 0x0104 (size: 0x4)
    FSplineCurves BoneSpline;                                                         // 0x0178 (size: 0x60)
    float OriginalSplineLength;                                                       // 0x01D8 (size: 0x4)
    TArray<FSplineIKCachedBoneData> CachedBoneReferences;                             // 0x01E0 (size: 0x10)
    TArray<float> CachedBoneLengths;                                                  // 0x01F0 (size: 0x10)
    TArray<FQuat> CachedOffsetRotations;                                              // 0x0200 (size: 0x10)

}; // Size: 0x210

struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference SpringBone;                                                        // 0x0070 (size: 0x18)
    bool bLimitDisplacement;                                                          // 0x0088 (size: 0x1)
    float MaxDisplacement;                                                            // 0x008C (size: 0x4)
    float SpringStiffness;                                                            // 0x0090 (size: 0x4)
    float SpringDamping;                                                              // 0x0094 (size: 0x4)
    float ErrorResetThresh;                                                           // 0x0098 (size: 0x4)
    bool bNoZSpring;                                                                  // 0x009C (size: 0x1)
    bool bTranslateX;                                                                 // 0x009D (size: 0x1)
    bool bTranslateY;                                                                 // 0x009E (size: 0x1)
    bool bTranslateZ;                                                                 // 0x009F (size: 0x1)
    bool bRotateX;                                                                    // 0x00A0 (size: 0x1)
    bool bRotateY;                                                                    // 0x00A1 (size: 0x1)
    bool bRotateZ;                                                                    // 0x00A2 (size: 0x1)

}; // Size: 0xD8

struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
    FBoneReference TrailBone;                                                         // 0x0070 (size: 0x18)
    int32 ChainLength;                                                                // 0x0088 (size: 0x4)
    TEnumAsByte<EAxis::Type> ChainBoneAxis;                                           // 0x008C (size: 0x1)
    bool bInvertChainBoneAxis;                                                        // 0x008D (size: 0x1)
    float TrailRelaxation;                                                            // 0x0090 (size: 0x4)
    FRuntimeFloatCurve TrailRelaxationSpeed;                                          // 0x0098 (size: 0x78)
    bool bLimitStretch;                                                               // 0x0110 (size: 0x1)
    float StretchLimit;                                                               // 0x0114 (size: 0x4)
    FVector FakeVelocity;                                                             // 0x0118 (size: 0xC)
    bool bActorSpaceFakeVel;                                                          // 0x0124 (size: 0x1)
    FBoneReference BaseJoint;                                                         // 0x0128 (size: 0x18)

}; // Size: 0x1B0

struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
    FReferenceBoneFrame BaseFrame;                                                    // 0x0070 (size: 0x28)
    FReferenceBoneFrame TwistFrame;                                                   // 0x0098 (size: 0x28)
    FAxis TwistPlaneNormalAxis;                                                       // 0x00C0 (size: 0x10)
    float RangeMax;                                                                   // 0x00D0 (size: 0x4)
    float RemappedMin;                                                                // 0x00D4 (size: 0x4)
    float RemappedMax;                                                                // 0x00D8 (size: 0x4)
    FAnimCurveParam Curve;                                                            // 0x00E0 (size: 0x10)

}; // Size: 0xF8

struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
    FBoneReference IKBone;                                                            // 0x0070 (size: 0x18)
    uint8 bAllowStretching;                                                           // 0x0088 (size: 0x1)
    float StartStretchRatio;                                                          // 0x008C (size: 0x4)
    float MaxStretchScale;                                                            // 0x0090 (size: 0x4)
    FVector2D StretchLimits;                                                          // 0x0094 (size: 0x8)
    uint8 bTakeRotationFromEffectorSpace;                                             // 0x009C (size: 0x1)
    uint8 bMaintainEffectorRelRot;                                                    // 0x009C (size: 0x1)
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;                             // 0x00A0 (size: 0x1)
    FName EffectorSpaceBoneName;                                                      // 0x00A8 (size: 0x8)
    FVector EffectorLocation;                                                         // 0x00B0 (size: 0xC)
    FBoneSocketTarget EffectorTarget;                                                 // 0x00C0 (size: 0x60)
    TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace;                          // 0x0120 (size: 0x1)
    FVector JointTargetLocation;                                                      // 0x0124 (size: 0xC)
    FName JointTargetSpaceBoneName;                                                   // 0x0130 (size: 0x8)
    FBoneSocketTarget JointTarget;                                                    // 0x0140 (size: 0x60)
    bool bAllowTwist;                                                                 // 0x01A0 (size: 0x1)
    FAxis TwistAxis;                                                                  // 0x01A4 (size: 0x10)
    bool bNoTwist;                                                                    // 0x01B4 (size: 0x1)

}; // Size: 0x1C0

struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
    FPoseLink A;                                                                      // 0x0030 (size: 0x18)
    FPoseLink B;                                                                      // 0x0048 (size: 0x18)
    float Alpha;                                                                      // 0x0060 (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0064 (size: 0x8)
    float InternalBlendAlpha;                                                         // 0x006C (size: 0x4)
    bool bAIsRelevant;                                                                // 0x0070 (size: 0x1)
    bool bBIsRelevant;                                                                // 0x0071 (size: 0x1)
    bool bResetChildOnActivation;                                                     // 0x0072 (size: 0x1)

}; // Size: 0x78

struct FAnimPhysConstraintSetup
{
    AnimPhysLinearConstraintType LinearXLimitType;                                    // 0x0000 (size: 0x1)
    AnimPhysLinearConstraintType LinearYLimitType;                                    // 0x0001 (size: 0x1)
    AnimPhysLinearConstraintType LinearZLimitType;                                    // 0x0002 (size: 0x1)
    FVector LinearAxesMin;                                                            // 0x0004 (size: 0xC)
    FVector LinearAxesMax;                                                            // 0x0010 (size: 0xC)
    AnimPhysAngularConstraintType AngularConstraintType;                              // 0x001C (size: 0x1)
    AnimPhysTwistAxis TwistAxis;                                                      // 0x001D (size: 0x1)
    float ConeAngle;                                                                  // 0x0020 (size: 0x4)
    float AngularXAngle;                                                              // 0x0024 (size: 0x4)
    float AngularYAngle;                                                              // 0x0028 (size: 0x4)
    float AngularZAngle;                                                              // 0x002C (size: 0x4)
    FVector AngularLimitsMin;                                                         // 0x0030 (size: 0xC)
    FVector AngularLimitsMax;                                                         // 0x003C (size: 0xC)
    AnimPhysTwistAxis AngularTargetAxis;                                              // 0x0048 (size: 0x1)
    FVector AngularTarget;                                                            // 0x004C (size: 0xC)
    bool bLinearFullyLocked;                                                          // 0x0058 (size: 0x1)

}; // Size: 0x5C

struct FAnimPhysPlanarLimit
{
    FBoneReference DrivingBone;                                                       // 0x0000 (size: 0x18)
    FTransform PlaneTransform;                                                        // 0x0020 (size: 0x30)

}; // Size: 0x50

struct FAnimPhysSphericalLimit
{
    FBoneReference DrivingBone;                                                       // 0x0000 (size: 0x18)
    FVector SphereLocalOffset;                                                        // 0x0018 (size: 0xC)
    float LimitRadius;                                                                // 0x0024 (size: 0x4)
    ESphericalLimitType LimitType;                                                    // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
}; // Size: 0x6D0

struct FBlendBoneByChannelEntry
{
    FBoneReference SourceBone;                                                        // 0x0000 (size: 0x18)
    FBoneReference TargetBone;                                                        // 0x0018 (size: 0x18)
    bool bBlendTranslation;                                                           // 0x0030 (size: 0x1)
    bool bBlendRotation;                                                              // 0x0031 (size: 0x1)
    bool bBlendScale;                                                                 // 0x0032 (size: 0x1)

}; // Size: 0x38

struct FBoneSocketTarget
{
    bool bUseSocket;                                                                  // 0x0000 (size: 0x1)
    FBoneReference BoneReference;                                                     // 0x0008 (size: 0x18)
    FSocketReference SocketReference;                                                 // 0x0020 (size: 0x40)

}; // Size: 0x60

struct FConstraint
{
    FBoneReference TargetBone;                                                        // 0x0000 (size: 0x18)
    EConstraintOffsetOption OffsetOption;                                             // 0x0018 (size: 0x1)
    ETransformConstraintType TransformType;                                           // 0x0019 (size: 0x1)
    FFilterOptionPerAxis PerAxis;                                                     // 0x001A (size: 0x3)

}; // Size: 0x28

struct FIKChain
{
}; // Size: 0x30

struct FIKChainLink
{
}; // Size: 0x1C

struct FPoseDriverTarget
{
    TArray<FPoseDriverTransform> BoneTransforms;                                      // 0x0000 (size: 0x10)
    FRotator TargetRotation;                                                          // 0x0010 (size: 0xC)
    float TargetScale;                                                                // 0x001C (size: 0x4)
    bool bApplyCustomCurve;                                                           // 0x0020 (size: 0x1)
    FRichCurve CustomCurve;                                                           // 0x0028 (size: 0x70)
    FName DrivenName;                                                                 // 0x0098 (size: 0x8)

}; // Size: 0xA8

struct FPoseDriverTransform
{
    FVector TargetTranslation;                                                        // 0x0000 (size: 0xC)
    FRotator TargetRotation;                                                          // 0x000C (size: 0xC)

}; // Size: 0x18

struct FRBFEntry
{
    TArray<float> Values;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRBFParams
{
    int32 TargetDimensions;                                                           // 0x0000 (size: 0x4)
    float Radius;                                                                     // 0x0004 (size: 0x4)
    ERBFFunctionType Function;                                                        // 0x0008 (size: 0x1)
    ERBFDistanceMethod DistanceMethod;                                                // 0x0009 (size: 0x1)
    TEnumAsByte<EBoneAxis> TwistAxis;                                                 // 0x000A (size: 0x1)
    float WeightThreshold;                                                            // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRBFTarget : public FRBFEntry
{
    float ScaleFactor;                                                                // 0x0010 (size: 0x4)
    bool bApplyCustomCurve;                                                           // 0x0014 (size: 0x1)
    FRichCurve CustomCurve;                                                           // 0x0018 (size: 0x70)

}; // Size: 0x88

struct FRandomPlayerSequenceEntry
{
    class UAnimSequence* Sequence;                                                    // 0x0000 (size: 0x8)
    float ChanceToPlay;                                                               // 0x0008 (size: 0x4)
    int32 MinLoopCount;                                                               // 0x000C (size: 0x4)
    int32 MaxLoopCount;                                                               // 0x0010 (size: 0x4)
    float MinPlayRate;                                                                // 0x0014 (size: 0x4)
    float MaxPlayRate;                                                                // 0x0018 (size: 0x4)
    FAlphaBlend BlendIn;                                                              // 0x0020 (size: 0x38)

}; // Size: 0x58

struct FReferenceBoneFrame
{
    FBoneReference Bone;                                                              // 0x0000 (size: 0x18)
    FAxis Axis;                                                                       // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FSocketReference
{
    FName SocketName;                                                                 // 0x0000 (size: 0x8)

}; // Size: 0x40

struct FSplineIKCachedBoneData
{
    FBoneReference Bone;                                                              // 0x0000 (size: 0x18)
    int32 RefSkeletonIndex;                                                           // 0x0018 (size: 0x4)

}; // Size: 0x20

class UAnimCustomInstance : public UAnimInstance
{
}; // Size: 0x3C0

class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
    FName NotifyName;                                                                 // 0x0038 (size: 0x8)

}; // Size: 0x40

class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
    FName NotifyName;                                                                 // 0x0030 (size: 0x8)

}; // Size: 0x38

class UAnimSequencerInstance : public UAnimCustomInstance
{
}; // Size: 0x3C0

class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{

    void K2_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
    FTransform K2_LookAt(const FTransform& CurrentTransform, const FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree);
}; // Size: 0x28

class UPlayMontageCallbackProxy : public UObject
{
    FPlayMontageCallbackProxyOnCompleted OnCompleted;                                 // 0x0028 (size: 0x10)
    FPlayMontageCallbackProxyOnBlendOut OnBlendOut;                                   // 0x0038 (size: 0x10)
    FPlayMontageCallbackProxyOnInterrupted OnInterrupted;                             // 0x0048 (size: 0x10)
    FPlayMontageCallbackProxyOnNotifyBegin OnNotifyBegin;                             // 0x0058 (size: 0x10)
    FPlayMontageCallbackProxyOnNotifyEnd OnNotifyEnd;                                 // 0x0068 (size: 0x10)

    void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
    class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection);
}; // Size: 0x110

#endif
