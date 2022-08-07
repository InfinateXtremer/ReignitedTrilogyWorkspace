

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpyroCharacterInitialData.h"
#include "GameplayTagContainer.h"
#include "FalconCharacterInputComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FALCON_API UFalconCharacterInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFalconCharacterInputComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag DisableInputTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRetroControls;                       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APawn* ControlledPawn;               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ASpyroPlayerController* PlayerController;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DeltaSeconds;                        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationMult_GroundMovement;         
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationMult_SideRoll;               
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationMult_CameraRightStick;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationMult_FreeLook;                                                      

	UFUNCTION(BlueprintCallable)
	void UpdateReferences();
	UFUNCTION(BlueprintCallable)
	void SetPlayerCharacterContext(const FSpyroCharacterInitialData& InitialData);
	UFUNCTION(BlueprintCallable)
	void PlayerControllerTick(float newDeltaSeconds);
	UFUNCTION(BlueprintCallable)
	bool IsControllable(FGameplayTag DisablingTag);
	UFUNCTION(BlueprintCallable)
	void InputAxis_TriggerRight(float AxisValue);
	UFUNCTION(BlueprintCallable)
	void InputAxis_TriggerLeft(float AxisValue);
	UFUNCTION(BlueprintCallable)
	void InputAxis_RightStick_Y(float AxisValue);
	UFUNCTION(BlueprintCallable)
	void InputAxis_RightStick_X(float AxisValue);
	UFUNCTION(BlueprintCallable)
	void InputAxis_LeftStick_Y(float AxisValue);
	UFUNCTION(BlueprintCallable)
	void InputAxis_LeftStick_X(float AxisValue);
	UFUNCTION(BlueprintCallable)
	void InputAction_TriggerRight(bool Pressed);
	UFUNCTION(BlueprintCallable)
	void InputAction_TriggerLeft(bool Pressed);
	UFUNCTION(BlueprintCallable)
	void InputAction_ShoulderRight(bool Pressed);
	UFUNCTION(BlueprintCallable)
	void InputAction_ShoulderLeft(bool Pressed);
	UFUNCTION(BlueprintCallable)
	void InputAction_RightThumbstickButton(bool Pressed);
	UFUNCTION(BlueprintCallable)
	void InputAction_LeftThumbstickButton(bool Pressed);
	UFUNCTION(BlueprintCallable)
	void InputAction_FaceTop(bool Pressed);
	UFUNCTION(BlueprintCallable)
	void InputAction_FaceRight(bool Pressed);
	UFUNCTION(BlueprintCallable)
	void InputAction_FaceLeft(bool Pressed);
	UFUNCTION(BlueprintCallable)
	void InputAction_FaceBottom(bool Pressed);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
