#pragma once
#include "CoreMinimal.h"
#include "SP3_PickupBase.h"
#include "SP3_SparxGem.generated.h"

UCLASS(Blueprintable)
class FALCON_API ASP3_SparxGem : public ASP3_PickupBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    ASP3_SparxGem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVFXSetState(FName State);
    
};

