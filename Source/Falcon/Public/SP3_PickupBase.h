#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SP3PickupEvtSigOnPickupDelegate.h"
#include "SP3_PickupBase.generated.h"

class ASP3_PickupBase;

UCLASS(Blueprintable)
class FALCON_API ASP3_PickupBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_type;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3PickupEvtSigOnPickup OnPickup;
    
    ASP3_PickupBase();
    UFUNCTION(BlueprintCallable)
    bool Pickup(AActor* sender);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVFXPickup(AActor* sender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetType() const;
    
    UFUNCTION(BlueprintCallable)
    static ASP3_PickupBase* FindPickup(const AActor* sender, const FVector& posSrcWS, float distMax, FName Type);
    
};

