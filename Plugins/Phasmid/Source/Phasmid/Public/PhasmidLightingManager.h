

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhasmidLightingManager.generated.h"

UCLASS()
class PHASMID_API APhasmidLightingManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APhasmidLightingManager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> Lights;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor LevelTransitionColor;

	UFUNCTION(BlueprintCallable)
	void TransitionLightingManagers(float fadeTime, class APhasmidLightingManager* OutgoingLightingManager, class APhasmidLightingManager* IncomingLightingManager);
	UFUNCTION(BlueprintCallable)
	void SetNewLightingManager(class APhasmidLightingManager* OutgoingLightingManager, class APhasmidLightingManager* IncomingLightingManager, bool Delay);
	UFUNCTION(BlueprintCallable)
	void SetEnableSkylight(bool Enabled);
	UFUNCTION(BlueprintCallable)
	void ScaleIntensity(float IntensityCoefficient);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
