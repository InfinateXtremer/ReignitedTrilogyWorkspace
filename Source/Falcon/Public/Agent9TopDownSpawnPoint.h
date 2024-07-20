#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Agent9TopDownSpawnPoint.generated.h"

class AActor;
class ATargetPoint;

USTRUCT(BlueprintType)
struct FAgent9TopDownSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> EnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATargetPoint* TargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Optional;
    
    FALCON_API FAgent9TopDownSpawnPoint();
};

