

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "PhasmidCollisionEmitterStruct.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidCollisionEmitterUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};


USTRUCT(BlueprintType)
struct FPhasmidCollisionEmitterStruct
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* EmitterTemplate; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName socket;     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)                      
	bool bAttached;     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)                    
	FVector Location;      
	UPROPERTY(EditAnywhere, BlueprintReadWrite)                 
	FRotator Rotation;     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)                 
	FVector Scale;                          

};