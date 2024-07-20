#pragma once
#include "CoreMinimal.h"
#include "SpawnOutlet.h"
#include "SpawnOutlets.generated.h"

USTRUCT(BlueprintType)
struct FSpawnOutlets {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnOutlet> OutletList;
    
public:
    FALCON_API FSpawnOutlets();
};

