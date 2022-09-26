

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VisibilityComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent),Blueprintable, BlueprintType)
class PHASMID_API UVisibilityComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVisibilityComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString level_name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnoreRequestToMakeVisible;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
