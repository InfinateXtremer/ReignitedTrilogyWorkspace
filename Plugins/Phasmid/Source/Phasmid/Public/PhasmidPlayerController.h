

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PhasmidPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API APhasmidPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameplayTags)
	bool bUseBlueprintCameraInput;

	UFUNCTION(BlueprintCallable)
	void SetInputCameraAxisY(float Val);
	UFUNCTION(BlueprintCallable)
	void SetInputCameraAxisX(float Val);
	UFUNCTION(BlueprintCallable)
	void SetEnemyTickInterval(float Interval);
	UFUNCTION(BlueprintCallable)
	void GetSkateInputs(bool& trick, bool& Jump, bool& turbo);
	//UFUNCTION(BlueprintCallable)
	//void GetPlayerImage(EImageSize DesiredSize, FGetPlayerImageOnGetPlayerImageComplete OnGetPlayerImageComplete);
	UFUNCTION(BlueprintCallable)
	FVector2D GetMoveAxes();
	UFUNCTION(BlueprintCallable)
	FVector2D GetCameraAxes();
	
	
};
