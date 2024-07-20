#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Agent9Spawner.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class FALCON_API UAgent9Spawner : public UInterface {
    GENERATED_BODY()
};

class FALCON_API IAgent9Spawner : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMinigameStart(AActor* minigame);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* OnMinigameSpawn();
    
};

