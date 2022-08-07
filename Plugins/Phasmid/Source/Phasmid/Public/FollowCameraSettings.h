

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "FollowCameraSettings.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFollowCameraSettingsUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};


USTRUCT(BlueprintType)
struct FFollowCameraSettings
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_tgtOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_tgtOffset1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_tgtOffset2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_gmblOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_radDefault;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_radDefaultAtLimit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_yawClamp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_rotSpeedH;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_rotSpeedV;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_rotInterpH;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_rotInterpV;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_rotLimitV;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool m_ignoreRightStickInput;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool m_useBothSticksAsCamInput;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_fovInputScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D m_clampZSoft;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D m_clampZHard;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_posZInterp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_colRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_colClipMin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_colInterpIn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_colInterpOut;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_ceilingGmblOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_ctrInterp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_ctrSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_ctrDecelAngle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_maxCtrDelta;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_ctrInterpV;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_ctrAngleV;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool m_noCentering;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_maxCtrDeltaFromInput;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_centerInterpParams;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_ctrYawClamp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_lookAheadScalar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_panAheadScalar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_numFramesSmooth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_numFramesSmoothPan;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_collisionOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool m_useRawCamPos;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FieldOfView;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bEnableIdleVerticalCenter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool m_traceToCeiling;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_defaultPitchByHeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_traceLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_useRotVInterpSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bHighPriority;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 m_settingsID;

}; // Size: 0x130