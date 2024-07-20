#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "PooledActorBlueprintLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class PHASMID_API UPooledActorBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPooledActorBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static AActor* StartSpawnPooledActor(TSubclassOf<AActor> ActorClass, const FTransform& Transform, AActor* PoolOwner);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnPooledActor(TSubclassOf<AActor> ActorClass, const FTransform& Transform, AActor* PoolOwner);
    
    UFUNCTION(BlueprintCallable)
    static void ReleasePooledActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void InitPoolForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FinishSpawnPooledActor(AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    static void AddActorToPool(AActor* Actor);
    
};

