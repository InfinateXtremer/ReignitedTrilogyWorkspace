#pragma once
#include "CoreMinimal.h"
#include "EInitialOrderType.h"
#include "EncounterInitialOrders.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FEncounterInitialOrders {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Combatant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInitialOrderType Orders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    PHASMID_API FEncounterInitialOrders();
};

