#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityEndOverlapSignatureDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAbilityEndOverlapSignature, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, FGameplayTag, TriggerTag);

