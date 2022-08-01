

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "PhasmidDamageGroup.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidDamageGroupStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};

USTRUCT(BlueprintType)
struct FPhasmidDamageGroup
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName GroupName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName SourceName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Index;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Timestamp;
};