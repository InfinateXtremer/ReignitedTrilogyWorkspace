#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EInitialOrderType.h"
#include "EPhasmidAIOrdersStatus.h"
#include "PhasmidAIOrdersHandle.h"
#include "PhasmidAIConfiguratorComponent.generated.h"

class AActor;
class UBehaviorTree;
class UBlackboardData;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UPhasmidAIConfiguratorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* Blackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DefaultBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UBehaviorTree*> OverrideBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultBehaviorsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SquadProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInitialOrderType InitialOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InitialTarget;
    
    UPhasmidAIConfiguratorComponent();
    UFUNCTION(BlueprintCallable)
    bool IssueOrder_Custom(FPhasmidAIOrdersHandle& OrderHandle);
    
    UFUNCTION(BlueprintCallable)
    void IssueInitialOrders();
    
    UFUNCTION(BlueprintCallable)
    UBehaviorTree* GetBehaviorByName(FName behaviorName);
    
    UFUNCTION(BlueprintCallable)
    bool CompleteOrder(const FPhasmidAIOrdersHandle& OrderHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPhasmidAIOrdersStatus CheckOrderStatus(const FPhasmidAIOrdersHandle& OrderHandle) const;
    
};

