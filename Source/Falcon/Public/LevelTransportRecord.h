

#pragma once

#include "CoreMinimal.h"
#include "Portal.h"
#include "Engine/UserDefinedStruct.h"
#include "LevelTransportRecord.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API ULevelTransportRecordUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};

USTRUCT(BlueprintType)
struct FLevelTransportRecord
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class ULevelStreaming*> streamObjects;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APortal* sourcePortal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APortal* targetPortal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APawn* playerCharacter;

};
