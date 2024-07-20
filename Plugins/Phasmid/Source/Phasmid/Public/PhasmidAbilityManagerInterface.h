#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "PhasmidAbilityManagerInterface.generated.h"

class UPhasmidAbilitySystemComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UPhasmidAbilityManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IPhasmidAbilityManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetAbilityDataForInput(int32 InputAction, UPhasmidAbilitySystemComponent*& AbilitySystemComponent, FGameplayTag& EventTag, FGameplayEventData& Payload);
    
};

