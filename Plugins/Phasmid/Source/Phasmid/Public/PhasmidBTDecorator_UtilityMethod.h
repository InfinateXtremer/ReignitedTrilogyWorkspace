#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "PhasmidBTDecorator_UtilityMethod.generated.h"

class AAIController;
class AActor;
class APawn;

UCLASS(Abstract, Blueprintable)
class PHASMID_API UPhasmidBTDecorator_UtilityMethod : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ObservedKeyNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectedVarient;
    
public:
    UPhasmidBTDecorator_UtilityMethod();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateBlackboard(AAIController* OwnerController, APawn* ControlledPawn, int32 VarientId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CalculateUtility(AAIController* OwnerController, APawn* ControlledPawn, TArray<float>& UtilityValues);
    
};

