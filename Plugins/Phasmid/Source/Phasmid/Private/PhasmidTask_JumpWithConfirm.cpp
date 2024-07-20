#include "PhasmidTask_JumpWithConfirm.h"

class ACharacter;
class IGameplayTaskOwnerInterface;
class UGameplayTaskOwnerInterface;
class UPhasmidTask_JumpWithConfirm;

UPhasmidTask_JumpWithConfirm* UPhasmidTask_JumpWithConfirm::JumpWithConfirm(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, ACharacter* Character) {
    return NULL;
}

void UPhasmidTask_JumpWithConfirm::JumpConfirmCallback(ACharacter* Character, bool bSuccess) {
}

