#pragma once
#include "CoreMinimal.h"
#include "ComponentInteractSignatureDelegate.generated.h"

class AActor;
class UPhasmidInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FComponentInteractSignature, UPhasmidInteractableComponent*, InteractableComopnent, AActor*, Interactable, AActor*, Interactor);

