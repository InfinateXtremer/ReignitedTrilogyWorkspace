

#pragma once

#include "CoreMinimal.h"
#include "PhasmidLightingManager.h"
#include "LevelTransportRecord.h"
#include "GameFramework/Actor.h"
#include "TransportManager.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTransportManagerLoadCompleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTransportManagerLevelActivated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTransportManagerLevelDeactivated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTransportManagerLevelVisibilityEvent);

UCLASS()
class FALCON_API ATransportManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATransportManager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeInOutTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LevelOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector BaseLevelPosition;

	UPROPERTY(BlueprintAssignable)
	FTransportManagerLoadCompleted LoadCompleted;
	UPROPERTY(BlueprintAssignable)
	FTransportManagerLevelActivated LevelActivated;
	UPROPERTY(BlueprintAssignable)
	FTransportManagerLevelDeactivated LevelDeactivated;
	UPROPERTY(BlueprintAssignable)
	FTransportManagerLevelVisibilityEvent LevelVisibilityEvent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<APhasmidLightingManager> GlobalLightingManager;
	
	//TArray<FLevelTransportRecord> records;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> PhasmidActorsToTick;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APhasmidLightingManager* IncomingLightingManager;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
