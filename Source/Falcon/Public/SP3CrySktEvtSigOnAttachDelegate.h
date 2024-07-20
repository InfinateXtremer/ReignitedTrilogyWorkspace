#pragma once
#include "CoreMinimal.h"
#include "SP3CrySktEvtSigOnAttachDelegate.generated.h"

class AActor;
class USP3_CarrySocketComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSP3CrySktEvtSigOnAttach, USP3_CarrySocketComponent*, socket, AActor*, carryObj);

