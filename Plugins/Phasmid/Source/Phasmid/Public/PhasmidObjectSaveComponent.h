

#pragma once

#include "CoreMinimal.h"
#include "InventoryType.h"
#include "PhasmidObjectSaveStruct.h"
#include "Components/ActorComponent.h"
#include "PhasmidObjectSaveComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PHASMID_API UPhasmidObjectSaveComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPhasmidObjectSaveComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidObjectSaveDataList objectSaveData;

	UFUNCTION(BlueprintCallable)
	bool SetSaveParam(int32 dataIndex, int32 paramIndex, const FPhasmidSaveParam& saveParam, bool updateSave);
	UFUNCTION(BlueprintCallable)
	void SetCollected(int32 dataIndex, bool updateSave);
	UFUNCTION(BlueprintCallable)
	bool GetSaveParam(int32 dataIndex, int32 paramIndex, FPhasmidSaveParam& saveParam);
	UFUNCTION(BlueprintCallable)
	int32 GetParamCount(int32 dataIndex);
	UFUNCTION(BlueprintCallable)
	int32 GetItemCount();
	UFUNCTION(BlueprintCallable)
	EInventoryType getInventoryType(int32 dataIndex);
	UFUNCTION(BlueprintCallable)
	bool GetCollected(int32 dataIndex);


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
