#pragma once
#include "CoreMinimal.h"
#include "LevelTransportRecord.generated.h"

class APawn;
class APortal;
class ULevelStreaming;

USTRUCT(BlueprintType)
struct FLevelTransportRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> streamObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APortal* sourcePortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APortal* targetPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* playerCharacter;
    
    FALCON_API FLevelTransportRecord();
};

