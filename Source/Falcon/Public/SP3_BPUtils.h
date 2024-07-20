#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "SP3_BPUtils.generated.h"

class AActor;
class USplineComponent;

UCLASS(Blueprintable)
class FALCON_API USP3_BPUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USP3_BPUtils();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDistanceAlongSplineForWorldLocation(const USplineComponent* SplineComponent, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastSignal(AActor* SenderActor, FGameplayTag TargetActorsTag, float BroadcastRadius, FGameplayTagContainer Signals, TSubclassOf<AActor> FilterClass);
    
};

