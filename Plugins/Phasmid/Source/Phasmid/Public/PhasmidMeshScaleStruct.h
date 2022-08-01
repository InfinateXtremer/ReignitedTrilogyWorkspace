

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "PhasmidMeshScaleStruct.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidMeshScaleUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};


USTRUCT(BlueprintType)
struct FPhasmidMeshScaleStruct
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpringFrequency;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpringDampening;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpringMaxSpeed;
};