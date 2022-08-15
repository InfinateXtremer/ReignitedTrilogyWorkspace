

#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Engine/UserDefinedStruct.h"
#include "PhasmidSaveKeybindParam.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidSaveKeybindParamUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};




USTRUCT(BlueprintType)
struct FPhasmidSaveKeybindParam
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString paramName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FKey paramValue;
};