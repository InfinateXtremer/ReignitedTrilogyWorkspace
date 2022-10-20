

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "ManagedExponentialHeightFog.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API AManagedExponentialHeightFog : public AInfo
{
	GENERATED_BODY()
	
public:

	AManagedExponentialHeightFog();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true))
	class UExponentialHeightFogComponent* Component;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true))
	//class UExponentialHeightFogScaleIntensityComponent* ExponentialHeightFogScaleIntensityComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true))
	bool bEnabled;
	
};
