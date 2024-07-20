#include "SpyroAbility.h"

class UAbilityTask;

void USpyroAbility::RemoveAsyncTaskProxyFromList(UAbilityTask* AsyncTaskProxy) {
}



void USpyroAbility::ClearAsyncTaskProxyList() {
}

void USpyroAbility::AddAsyncTaskProxyToList(UAbilityTask* AsyncTaskProxy) {
}


USpyroAbility::USpyroAbility() {
    this->Owner = NULL;
    this->OwnerCharacter = NULL;
    this->AnimInstance = NULL;
    this->PlayerController = NULL;
    this->AbilitySystemComponent = NULL;
    this->SkeletalMeshComponent = NULL;
}

