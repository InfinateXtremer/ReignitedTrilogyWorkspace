#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFlightLevelTargetType.h"
#include "FlightObjectUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFlightObjectUIData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlightLevelTargetType Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* iconEmpty;
    
    FALCON_API FFlightObjectUIData();
};

