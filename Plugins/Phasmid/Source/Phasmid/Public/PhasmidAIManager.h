#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhasmidAIManager.generated.h"

class AFalconAIController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UPhasmidAIManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpawnsPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAssignFreeOnRequest: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFalconAIController*> AIControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFalconAIController*> FreeControllers;
    
public:
    UPhasmidAIManager();
private:
    UFUNCTION(BlueprintCallable)
    void ScheduleSpawnRequest();
    
    UFUNCTION(BlueprintCallable)
    void ControllerUnpossessed(AFalconAIController* Controller);
    
};

