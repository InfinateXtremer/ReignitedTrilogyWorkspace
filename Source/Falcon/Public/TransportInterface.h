

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TransportInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTransportInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FALCON_API ITransportInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TI_TurnOnOrbs();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TI_TriggerPreload();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TI_TransitionTriggerDetectedTarget();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TI_TransitionTriggerDetectedSource();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TI_TransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TI_TransitionCompleteSource();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TI_TransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TI_TransitionBeginSource();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TI_ReturnHomeMenu();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TI_LoadNextHomeworld();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TI_LevelEndItemCollected();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SavePortalRotation(FRotator CurrentRotation);
	
	
};
