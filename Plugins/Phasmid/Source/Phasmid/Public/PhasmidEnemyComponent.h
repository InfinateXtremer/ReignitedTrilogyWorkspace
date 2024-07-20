#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhasmidObserverInterface.h"
#include "PhasmidEnemyComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UPhasmidEnemyComponent : public UActorComponent, public IPhasmidObserverInterface {
    GENERATED_BODY()
public:
    UPhasmidEnemyComponent();
    UFUNCTION(BlueprintCallable)
    void NotifyOnDeath();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void RegisterObserver(UObject* Observer) override PURE_VIRTUAL(RegisterObserver,);
    
};

