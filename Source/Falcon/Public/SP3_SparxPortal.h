#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SP3_PickupBase.h"
#include "SP3_SparxPortal.generated.h"

UCLASS(Blueprintable)
class FALCON_API ASP3_SparxPortal : public ASP3_PickupBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_dataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_portalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_tTrigger;
    
    ASP3_SparxPortal();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVFXSetState(FName State);
    
};

