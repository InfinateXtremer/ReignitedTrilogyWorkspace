#include "PhasmidLevelActor.h"
#include "PhasmidAbilitySystemComponent.h"

class AActor;
class UPrimitiveComponent;

void APhasmidLevelActor::TriggerOverlapAbility(AActor* OtherActor, FGameplayTag TriggerTag) {
}

void APhasmidLevelActor::Client_OnShieldBreak_Implementation(const FGameplayEventData Payload) {
}

void APhasmidLevelActor::Client_OnDeath_Implementation(const FGameplayEventData Payload) {
}

void APhasmidLevelActor::Client_OnDamage_Implementation(const FGameplayEventData Payload) {
}


void APhasmidLevelActor::AbilityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FGameplayTag TriggerTag) {
}

APhasmidLevelActor::APhasmidLevelActor() {
    this->AbilitySystem = CreateDefaultSubobject<UPhasmidAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->bDead = false;
}

