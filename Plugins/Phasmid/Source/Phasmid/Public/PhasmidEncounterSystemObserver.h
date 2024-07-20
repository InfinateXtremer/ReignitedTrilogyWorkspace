#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PhasmidEncounterSystemObserver.generated.h"

class AActor;
class AEncounterManager;

UINTERFACE(Blueprintable, MinimalAPI)
class UPhasmidEncounterSystemObserver : public UInterface {
    GENERATED_BODY()
};

class IPhasmidEncounterSystemObserver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnEnemyAlerted(AEncounterManager* Encounter, AActor* AlertedEnemy, bool FirstAlert);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnEncounterStarted(AEncounterManager* Encounter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnEncounterCompleted(AEncounterManager* Encounter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnCombatStarted(AEncounterManager* Encounter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnCombatEnded(AEncounterManager* Encounter);
    
};

