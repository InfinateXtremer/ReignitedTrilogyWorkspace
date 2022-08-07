

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Camera/PlayerCameraManager.h"
#include "PhasmidCameraManager.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPhasmidCameraManager : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PHASMID_API IPhasmidCameraManager
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PCM_PushViewTarget(class AActor* ViewTarget, float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PCM_PopViewTarget(class AActor* ViewTarget, float BlendTime);
};
