#pragma once
#include "CoreMinimal.h"
#include "PhasmidTaggedTargetPoint.h"
#include "PhasmidSniperPoint.generated.h"

UCLASS(Blueprintable)
class APhasmidSniperPoint : public APhasmidTaggedTargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    APhasmidSniperPoint();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeClaimed() const;
    
};

