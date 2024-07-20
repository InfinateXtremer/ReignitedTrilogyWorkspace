#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhasmidCollisionRegion.h"
#include "PhasmidBoxRegion.generated.h"

UCLASS(Blueprintable)
class PHASMID_API APhasmidBoxRegion : public APhasmidCollisionRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialBoxExtent;
    
    APhasmidBoxRegion();
};

