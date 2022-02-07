

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemComponent.h"
#include "PhasmidBeamDamage.generated.h"

UCLASS()
class PHASMID_API APhasmidBeamDamage : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APhasmidBeamDamage();

	UFUNCTION(BlueprintCallable)
		float GetTimeAliveRatio() const;
	UFUNCTION(BlueprintCallable)
		bool IsDelayOver() const;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UAbilitySystemComponent* AbilitySystemComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bDebugDraw;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 TraceChannel;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float StartDamagingDelay;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName DamageGroupName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bDoAllTracesEveryFrame;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float TraceRadius;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FVector> TraceEndPoints;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FVector StartPointOffset;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
