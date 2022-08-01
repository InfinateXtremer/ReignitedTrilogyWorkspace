

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "FalconStateEmitterStruct.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UFalconStateEmitterUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};

USTRUCT(BlueprintType)
struct FFalconStateEmitterStruct
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* EmitterTemplate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AttachPointName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Scale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAttachToOwner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoDestroy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDestroyOnStateChange;

};