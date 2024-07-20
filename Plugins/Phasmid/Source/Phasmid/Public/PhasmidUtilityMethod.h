#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PhasmidEnemyBehaviorParams.h"
#include "PhasmidUtilityMethod.generated.h"

class AAIController;
class APawn;

UCLASS(Abstract, Blueprintable)
class UPhasmidUtilityMethod : public UObject {
    GENERATED_BODY()
public:
    UPhasmidUtilityMethod();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickUtilityMethod(float DeltaTime, bool CurrentlySelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUtilityMethodSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUtilityMethodExited();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalculateUtility(AAIController* Controller, APawn* ControlledPawn, const FPhasmidEnemyBehaviorParams& Parameters);
    
};

