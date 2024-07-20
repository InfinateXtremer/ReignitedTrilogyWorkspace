#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PhasmidBurstFireAttributeSet.generated.h"

UCLASS(Blueprintable)
class PHASMID_API UPhasmidBurstFireAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BurstFireAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BurstFireDelay;
    
    UPhasmidBurstFireAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

