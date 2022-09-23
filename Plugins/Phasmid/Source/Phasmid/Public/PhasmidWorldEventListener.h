

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhasmidWorldEventListener.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PHASMID_API UPhasmidWorldEventListenerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPhasmidWorldEventListenerComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool eventLevelAddedToWorld;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool eventLevelRemovedFromWorld;

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void subscribeEventLevelRemovedFromWorld(bool listen);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	void subscribeEventLevelAddedToWorld(bool listen);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
