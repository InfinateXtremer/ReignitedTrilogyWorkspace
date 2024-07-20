#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PhasmidEnemyObserverInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UPhasmidEnemyObserverInterface : public UInterface {
    GENERATED_BODY()
};

class IPhasmidEnemyObserverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnemyDeath(AActor* Enemy);
    
};

