#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PhasmidTaggedTargetPoint.h"
#include "PhasmidSpawnPoint.generated.h"

UCLASS(Blueprintable)
class APhasmidSpawnPoint : public APhasmidTaggedTargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    APhasmidSpawnPoint();
    UFUNCTION(BlueprintCallable)
    FTransform GetSpawnTransform(const FVector& AdditionalOffset);
    
};

