#pragma once
#include "CoreMinimal.h"
#include "ComponentSetEnableInteractSignatureDelegate.generated.h"

class AActor;
class UPhasmidInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FComponentSetEnableInteractSignature, UPhasmidInteractableComponent*, InteractableComopnent, AActor*, Interactable);

