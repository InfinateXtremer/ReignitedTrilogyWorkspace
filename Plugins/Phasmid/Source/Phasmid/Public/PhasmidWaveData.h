#pragma once
#include "CoreMinimal.h"
#include "PhasmidWaveEndConditions.h"
#include "PhasmidWaveSpawnData.h"
#include "PhasmidWaveData.generated.h"

USTRUCT(BlueprintType)
struct FPhasmidWaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhasmidWaveSpawnData> SpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCurrentSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxReinforcements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidWaveEndConditions NextWaveConditions;
    
    PHASMID_API FPhasmidWaveData();
};

