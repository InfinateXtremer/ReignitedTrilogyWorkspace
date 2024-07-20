#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhasmidSkateboard.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class PHASMID_API APhasmidSkateboard : public AActor {
    GENERATED_BODY()
public:
    APhasmidSkateboard();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVFXUpdate(ACharacter* charOwner, float dt, FName State, float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVFXEvent(ACharacter* charOwner, FName evtName);
    
};

