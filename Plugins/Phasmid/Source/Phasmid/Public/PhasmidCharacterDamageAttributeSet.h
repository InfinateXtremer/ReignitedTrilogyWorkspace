#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PhasmidCharacterDamageAttributeSet.generated.h"

UCLASS(Blueprintable)
class PHASMID_API UPhasmidCharacterDamageAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DealDamageMultiplier;
    
    UPhasmidCharacterDamageAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

