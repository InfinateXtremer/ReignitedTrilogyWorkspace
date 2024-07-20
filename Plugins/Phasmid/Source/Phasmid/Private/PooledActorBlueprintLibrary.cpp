#include "PooledActorBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class AActor;

AActor* UPooledActorBlueprintLibrary::StartSpawnPooledActor(TSubclassOf<AActor> ActorClass, const FTransform& Transform, AActor* PoolOwner) {
    return NULL;
}

AActor* UPooledActorBlueprintLibrary::SpawnPooledActor(TSubclassOf<AActor> ActorClass, const FTransform& Transform, AActor* PoolOwner) {
    return NULL;
}

void UPooledActorBlueprintLibrary::ReleasePooledActor(AActor* Actor) {
}

void UPooledActorBlueprintLibrary::InitPoolForActor(AActor* Actor) {
}

AActor* UPooledActorBlueprintLibrary::FinishSpawnPooledActor(AActor* SpawnedActor) {
    return NULL;
}

void UPooledActorBlueprintLibrary::AddActorToPool(AActor* Actor) {
}

UPooledActorBlueprintLibrary::UPooledActorBlueprintLibrary() {
}

