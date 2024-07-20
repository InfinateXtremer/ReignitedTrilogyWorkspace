#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GemFinderRegion.generated.h"

class AActor;

UCLASS(Blueprintable)
class AGemFinderRegion : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> RegionLinks;
    
    AGemFinderRegion();
};

