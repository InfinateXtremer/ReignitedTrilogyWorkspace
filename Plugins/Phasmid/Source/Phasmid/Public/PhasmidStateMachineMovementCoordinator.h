

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhasmidStateMachineMovementCoordinator.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PHASMID_API UPhasmidStateMachineMovementCoordinator : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPhasmidStateMachineMovementCoordinator();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	FVector GetOriginalPosition();
	
};
