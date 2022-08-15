

#pragma once

#include "CoreMinimal.h"
#include "FalconSaveGame.h"
#include "PhasmidGameSaveLevelObjectMap.h"
#include "Components/ActorComponent.h"
#include "FanfareComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FALCON_API UFanfareComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFanfareComponent();

	UFUNCTION(BlueprintCallable)
	void OnStoreSaveData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap);
	UFUNCTION(BlueprintCallable)
	void OnChangeSaveGame(class UFalconSaveGame* incomingSaveGame);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
