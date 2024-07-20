#pragma once
#include "CoreMinimal.h"
#include "Agent9TopDownSpawnPoint.h"
#include "Agent9TopDownRoom.generated.h"

class AActor;
class ATargetPoint;
class ATriggerBase;

USTRUCT(BlueprintType)
struct FAgent9TopDownRoom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAgent9TopDownSpawnPoint> SpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBase* RoomTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATargetPoint* RoomCenterTargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ExitGate;
    
    FALCON_API FAgent9TopDownRoom();
};

