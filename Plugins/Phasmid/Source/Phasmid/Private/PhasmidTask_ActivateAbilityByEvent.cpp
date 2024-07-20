#include "PhasmidTask_ActivateAbilityByEvent.h"

class IGameplayTaskOwnerInterface;
class UGameplayTaskOwnerInterface;
class UActorComponent;
class UPhasmidAbilitySystemComponent;
class UPhasmidTask_ActivateAbilityByEvent;

UPhasmidTask_ActivateAbilityByEvent* UPhasmidTask_ActivateAbilityByEvent::ActivateAbilityByInputAction(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UActorComponent* AbilityManager, int32 InputAction, float NewMaxTime) {
    return NULL;
}

UPhasmidTask_ActivateAbilityByEvent* UPhasmidTask_ActivateAbilityByEvent::ActivateAbilityByEvent(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UPhasmidAbilitySystemComponent* NewAbilitySystemComponent, FGameplayTag NewEventTag, FGameplayEventData NewPayload, float NewMaxTime) {
    return NULL;
}

