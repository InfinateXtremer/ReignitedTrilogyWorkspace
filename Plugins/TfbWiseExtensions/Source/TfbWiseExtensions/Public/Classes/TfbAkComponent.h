

#pragma once

#include "CoreMinimal.h"
#include "AkComponent.h"
#include "TfbAkComponent.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class TFBWISEEXTENSIONS_API UTfbAkComponent : public UAkComponent
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TfbWwiseEnable;
	
};
