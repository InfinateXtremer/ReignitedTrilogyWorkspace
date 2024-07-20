#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpyroCullTriggerOverlapActor.generated.h"

class APhasmidCullVolumeActor;
class UBoxComponent;

UCLASS(Blueprintable)
class FALCON_API ASpyroCullTriggerOverlapActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckOnStartOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStartTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APhasmidCullVolumeActor*> TriggerOnOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APhasmidCullVolumeActor*> DisableOnOverlap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerVolume;
    
public:
    ASpyroCullTriggerOverlapActor();
};

