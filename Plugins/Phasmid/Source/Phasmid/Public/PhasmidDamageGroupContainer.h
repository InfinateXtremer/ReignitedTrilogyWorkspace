#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PhasmidDamageGroup.h"
#include "PhasmidDamageGroupContainer.generated.h"

UCLASS(Blueprintable)
class UPhasmidDamageGroupContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidDamageGroup DamageGroup;
    
    UPhasmidDamageGroupContainer();
};

