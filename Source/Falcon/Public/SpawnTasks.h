#pragma once
#include "CoreMinimal.h"
#include "SequenceTask.h"
#include "SpawnTasks.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable)
class USpawnTasks : public USequenceTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* m_spawned;
    
public:
    USpawnTasks();
};

