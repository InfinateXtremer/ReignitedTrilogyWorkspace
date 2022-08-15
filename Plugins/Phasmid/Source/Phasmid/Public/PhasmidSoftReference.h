

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "UObject/SoftObjectPtr.h"
#include "PhasmidSoftReference.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidSoftReferenceStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};

USTRUCT(BlueprintType)
struct FPhasmidSoftReference
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<AActor> SoftPtr;                                                   // 0x0000 (size: 0x28)

};