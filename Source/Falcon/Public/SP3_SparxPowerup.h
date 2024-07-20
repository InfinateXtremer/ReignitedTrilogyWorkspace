#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SP3_PickupBase.h"
#include "SP3_SparxPowerup.generated.h"

UCLASS(Blueprintable)
class FALCON_API ASP3_SparxPowerup : public ASP3_PickupBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_retSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_collectTime;
    
    ASP3_SparxPowerup();
    UFUNCTION(BlueprintCallable)
    void SetStartTransform(const FTransform& xfmWS);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVFXSetState(FName State);
    
};

