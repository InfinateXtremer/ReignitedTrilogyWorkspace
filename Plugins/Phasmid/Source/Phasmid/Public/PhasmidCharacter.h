

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include "EPhasmidTeamId.h"
#include "PhasmidCharacter.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPhasmidCharacterOnTakeDamageDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPhasmidCharacterOnDeathDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPhasmidCharacterOnDealDamageDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPhasmidCharacterOnInput);


UCLASS()
class PHASMID_API APhasmidCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APhasmidCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BaseTurnRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BaseLookUpRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName InitialAttributeRowName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UDataTable* InitialAttributeDataTable;
	UPROPERTY(BlueprintAssignable)
	FPhasmidCharacterOnInput OnInput;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bForceSpawnAIController;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer InitialGameplayTags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UGameplayAbilitySet* AbilitySet;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCombatPoolComponent* CombatPool;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPhasmidTeamId TeamId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhasmidAbilitySystemComponent* AbilitySystem;
		
	UPROPERTY(BlueprintAssignable)
	FPhasmidCharacterOnTakeDamageDelegate OnTakeDamageDelegate;
	UPROPERTY(BlueprintAssignable)
	FPhasmidCharacterOnDeathDelegate OnDeathDelegate;
	UPROPERTY(BlueprintAssignable)
	FPhasmidCharacterOnDealDamageDelegate OnDealDamageDelegate;
	
	UFUNCTION(BlueprintCallable)
	void SplineJump(class USplineComponent* Spline);
	UFUNCTION(BlueprintCallable)
	bool ShouldCheckPushOffLedge();
	UFUNCTION(BlueprintCallable)
	void SetTeamId(EPhasmidTeamId newTeamId);
	UFUNCTION(BlueprintCallable)
	void PredictTagAdded(FGameplayTag TagAdded, float Time);
	UFUNCTION(BlueprintCallable)
	void PredictRootMotionMoveToForce(FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
	UFUNCTION(BlueprintCallable)
	void PredictRootMotionJumpForce(FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
	UFUNCTION(BlueprintCallable)
	void OnRep_TeamId(EPhasmidTeamId oldTeamId);
	UFUNCTION(BlueprintCallable)
	void OnInputDelegate__DelegateSignature(class APhasmidCharacter* Character, FGameplayTag InputTag, bool bPressed);
	UFUNCTION(BlueprintCallable)
	bool IsPressed(FGameplayTag Input);
	UFUNCTION(BlueprintCallable)
	bool IsJumpProvidingForce();
	UFUNCTION(BlueprintCallable)
	void HandleInput(FGameplayTag Input, bool bPressed);
	UFUNCTION(BlueprintCallable)
	void BP_FellOutOfWorld();

};
