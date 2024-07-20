#pragma once
#include "CoreMinimal.h"
#include "PhasmidWaveEndConditions.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidWaveEndConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyCount;
    
    PHASMID_API FPhasmidWaveEndConditions();
};

