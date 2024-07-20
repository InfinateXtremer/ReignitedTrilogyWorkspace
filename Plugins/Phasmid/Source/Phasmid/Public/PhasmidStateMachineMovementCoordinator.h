#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PhasmidStateMachineMovementCoordinator.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UPhasmidStateMachineMovementCoordinator : public UActorComponent {
    GENERATED_BODY()
public:
    UPhasmidStateMachineMovementCoordinator();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOriginalPosition() const;
    
};

