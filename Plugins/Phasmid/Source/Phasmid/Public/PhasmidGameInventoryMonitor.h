

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhasmidInventoryMap.h"
#include "PhasmidGameInventoryMonitor.generated.h"

UCLASS()
class PHASMID_API APhasmidGameInventoryMonitor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APhasmidGameInventoryMonitor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool autoUpdate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FPhasmidInventoryMap> gameMap;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
