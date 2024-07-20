#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_LayeredBoneBlend.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "TfbAnimNode_LipSyncBlend.generated.h"

USTRUCT(BlueprintType)
struct TFBPLUGIN_API FTfbAnimNode_LipSyncBlend : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink LipSyncPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimNode_LayeredBoneBlend BoneBlend;
    
    FTfbAnimNode_LipSyncBlend();
};

