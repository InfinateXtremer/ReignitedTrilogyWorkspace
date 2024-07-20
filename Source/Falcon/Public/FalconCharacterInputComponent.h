#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "SpyroCharacterInitialData.h"
#include "FalconCharacterInputComponent.generated.h"

class APawn;
class ASpyroPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UFalconCharacterInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DisableInputTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetroControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* ControlledPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpyroPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationMult_GroundMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationMult_SideRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationMult_CameraRightStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationMult_FreeLook;
    
    UFalconCharacterInputComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateReferences();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerCharacterContext(const FSpyroCharacterInitialData& InitialData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerControllerTick(float newDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllable(FGameplayTag DisablingTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxis_TriggerRight(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxis_TriggerLeft(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxis_RightStick_Y(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxis_RightStick_X(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxis_LeftStick_Y(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAxis_LeftStick_X(float AxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAction_TriggerRight(bool Pressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAction_TriggerLeft(bool Pressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAction_ShoulderRight(bool Pressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAction_ShoulderLeft(bool Pressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAction_RightThumbstickButton(bool Pressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAction_LeftThumbstickButton(bool Pressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAction_FaceTop(bool Pressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAction_FaceRight(bool Pressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAction_FaceLeft(bool Pressed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAction_FaceBottom(bool Pressed);
    
};

