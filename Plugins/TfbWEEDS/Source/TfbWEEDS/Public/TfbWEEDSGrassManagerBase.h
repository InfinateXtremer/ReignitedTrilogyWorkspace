

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TfbWEEDSGrassManagerBase.generated.h"

UCLASS()
class TFBWEEDS_API ATfbWEEDSGrassManagerBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATfbWEEDSGrassManagerBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
