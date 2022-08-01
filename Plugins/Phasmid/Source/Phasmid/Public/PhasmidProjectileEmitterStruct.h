

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "PhasmidProjectileEmitterStruct.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidProjectileEmitterUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};

USTRUCT(BlueprintType)
struct FPhasmidProjectileEmitterStruct
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* EmitterTemplate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Scale;

};