

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "LaunchParams.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API ULaunchParamsStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};


USTRUCT(BlueprintType)
struct FLaunchParams
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Magnitude;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AngleDegrees;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLaunchToTheHeavens;

};