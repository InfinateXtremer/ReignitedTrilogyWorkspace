

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Actor.h"
#include "FalconSignalData.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFalconSignalDataUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};


USTRUCT(BlueprintType)
struct FFalconSignalData
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag TargetActorsTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BroadcastRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer Signals;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> FilterClass;

};
