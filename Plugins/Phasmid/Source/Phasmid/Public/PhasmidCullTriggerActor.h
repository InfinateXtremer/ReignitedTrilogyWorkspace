#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhasmidCullTriggerActor.generated.h"

class APhasmidCullVolumeActor;
class UBoxComponent;

UCLASS(Blueprintable)
class PHASMID_API APhasmidCullTriggerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APhasmidCullVolumeActor*> EnableOnExitRedSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APhasmidCullVolumeActor*> EnableOnExitBlueSide;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerVolume;
    
public:
    APhasmidCullTriggerActor();
};

