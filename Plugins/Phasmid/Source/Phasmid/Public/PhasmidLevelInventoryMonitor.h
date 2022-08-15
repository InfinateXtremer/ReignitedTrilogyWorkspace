

#pragma once

#include "CoreMinimal.h"
#include "InventoryType.h"
#include "GameFramework/Actor.h"
#include "PhasmidLevelInventoryMonitor.generated.h"

UCLASS()
class PHASMID_API APhasmidLevelInventoryMonitor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APhasmidLevelInventoryMonitor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TEnumAsByte<EInventoryType>, int32> itemMap;
	
	UFUNCTION(BlueprintCallable)
	void doUpdateInventory();
};
