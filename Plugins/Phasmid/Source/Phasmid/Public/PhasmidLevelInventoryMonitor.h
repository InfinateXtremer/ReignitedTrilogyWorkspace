#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInventoryType.h"
#include "PhasmidLevelInventoryMonitor.generated.h"

UCLASS(Blueprintable)
class PHASMID_API APhasmidLevelInventoryMonitor : public AActor {
	GENERATED_BODY()
public:
	//UPROPERTY()
	//	TMap<EInventoryType, int32> itemMap;
	//
	APhasmidLevelInventoryMonitor();
	//
	//UFUNCTION(BlueprintCallable)
	//	void doUpdateInventory();

};

