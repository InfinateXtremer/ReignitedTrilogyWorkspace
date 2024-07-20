#pragma once
#include "CoreMinimal.h"
#include "ActivatedAbilityCommittedDelegate.generated.h"

class UGameplayAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActivatedAbilityCommitted, UGameplayAbility*, Ability);

