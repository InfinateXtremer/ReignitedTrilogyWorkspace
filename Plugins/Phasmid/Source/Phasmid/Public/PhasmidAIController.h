#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "EPhasmidTeamId.h"
#include "PhasmidAIOrdersHandle.h"
#include "PhasmidAIOrdersInterface.h"
#include "PhasmidAIController.generated.h"

class UPhasmidAIConfiguratorComponent;
class UPhasmidEnemyBrainComponent;

UCLASS(Blueprintable)
class APhasmidAIController : public AAIController, public IGameplayTagAssetInterface, public IPhasmidAIOrdersInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidEnemyBrainComponent* EnemyBrainComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPhasmidAIOrdersHandle CurrentOrdersHandle;
    
public:
    APhasmidAIController();
    UFUNCTION(BlueprintCallable)
    void SetTeamId(EPhasmidTeamId newTeamId);
    
    UFUNCTION(BlueprintCallable)
    bool IssueInitialOrders(UPhasmidAIConfiguratorComponent* AIConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPhasmidTeamId GetTeamId() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag CreateGameplayTagFromString(const FString& InputString);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

