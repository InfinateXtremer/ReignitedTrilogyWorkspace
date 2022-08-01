

#pragma once

#include "CoreMinimal.h"
#include "PhasmidCharacter.h"
#include "SpyroCharacter.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSpyroCharacterAbilityActionDispatcher);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSpyroCharacterOnCustomProjectileFiredDispatcher);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSpyroCharacterOnRapidFireAbilityActivatedDispatcher);
UCLASS()
class PHASMID_API ASpyroCharacter : public APhasmidCharacter
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UFollowCameraComponent* FollowCamera;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsChargePressed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDivingDisabledVolume;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDivingDisabledShallow;


	UPROPERTY(BlueprintAssignable)
	FSpyroCharacterAbilityActionDispatcher AbilityActionDispatcher;
	UPROPERTY(BlueprintAssignable)
	FSpyroCharacterOnCustomProjectileFiredDispatcher OnCustomProjectileFiredDispatcher;
	UPROPERTY(BlueprintAssignable)
	FSpyroCharacterOnRapidFireAbilityActivatedDispatcher OnRapidFireAbilityActivatedDispatcher;
	
	
};
