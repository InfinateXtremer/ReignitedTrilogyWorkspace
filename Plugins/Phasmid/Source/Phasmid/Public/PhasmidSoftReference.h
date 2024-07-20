#pragma once
#include "CoreMinimal.h"
#include "PhasmidSoftReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct PHASMID_API FPhasmidSoftReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> SoftPtr;
    
public:
    FPhasmidSoftReference();
};

