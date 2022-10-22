

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhasmidAIManager.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PHASMID_API UPhasmidAIManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPhasmidAIManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSpawnsPerFrame;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InitialPoolSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAssignFreeOnRequest;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AFalconAIController*> AIControllers;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AFalconAIController*> FreeControllers;

	UFUNCTION(BlueprintCallable)
	void ScheduleSpawnRequest();
	UFUNCTION(BlueprintCallable)
	void ControllerUnpossessed(class AFalconAIController* Controller);
	
};
