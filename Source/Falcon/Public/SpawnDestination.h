#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SpawnDestination.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSpawnDestination {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference MoveOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Spline;
    
    FALCON_API FSpawnDestination();
};

