

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/PlayerCameraManager.h"
#include "StackCameraManager.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FCameraSettings
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SpringArmLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FOV;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector LocationOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRotator AngularOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bUpdateTransformWithOwner;

};

USTRUCT(BlueprintType)
struct FCameraContext
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class AActor* CameraActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FCameraSettings CameraSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FViewTargetTransitionParams TransitionParams;

};

UCLASS()
class PHASMID_API AStackCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCameraContext> CameraContextStack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCameraContext> PendingDeleteContexts;
	

	UFUNCTION(BlueprintCallable)
	void ShowCameraDebugInfo(bool bShowDebugInfo);
	UFUNCTION(BlueprintCallable)
	bool PopViewTargetWithBlendOverride(class AActor* ExistingViewTarget, float TimeToBlendOut, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool bDeleteActorAfterBlend);
	UFUNCTION(BlueprintCallable)
	bool PopViewTarget(class AActor* ExistingViewTarget, float TimeToBlendOut, bool bDeleteActorAfterBlend, bool bUnlockViewTarget);
	UFUNCTION(BlueprintCallable)
	void ClearStackToDefault();
	UFUNCTION(BlueprintCallable)
	void BP_PushViewTarget(class AActor* NewViewTarget, FViewTargetTransitionParams TransitionParams);
	UFUNCTION(BlueprintCallable)
	void BP_PushManagedCamera(class AActor* ManagedCamera, FCameraSettings Settings, FViewTargetTransitionParams TransitionParams);
};
