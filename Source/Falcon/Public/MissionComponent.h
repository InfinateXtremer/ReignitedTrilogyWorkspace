#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MissionComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UMissionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMissionComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopChallenge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartChallenge();
    
};

