#pragma once
#include "CoreMinimal.h"
#include "SP3_PickupBase.h"
#include "SP3_SparxKey.generated.h"

UCLASS(Blueprintable)
class FALCON_API ASP3_SparxKey : public ASP3_PickupBase {
    GENERATED_BODY()
public:
    ASP3_SparxKey();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVFXSetState(FName State);
    
};

