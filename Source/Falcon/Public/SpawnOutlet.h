#pragma once
#include "CoreMinimal.h"
#include "SpawnOutlet.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSpawnOutlet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Outlet;
    
public:
    FALCON_API FSpawnOutlet();
};

