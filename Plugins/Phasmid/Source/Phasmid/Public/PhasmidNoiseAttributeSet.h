#pragma once
#include "CoreMinimal.h"
#include "PhasmidAttributeSet.h"
#include "PhasmidNoiseAttributeSet.generated.h"

UCLASS(Blueprintable)
class PHASMID_API UPhasmidNoiseAttributeSet : public UPhasmidAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FootstepLoudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FootstepMaxRange;
    
    UPhasmidNoiseAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

