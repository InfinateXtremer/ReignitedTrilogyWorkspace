#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "EPhasmidTeamId.h"
#include "PhasmidAbilityBaseActor.generated.h"

class UAbilitySystemComponent;
class UGameplayAbilitySet;

UCLASS(Blueprintable)
class PHASMID_API APhasmidAbilityBaseActor : public AActor //, public IGenericTeamAgentInterface, public IAbilitySystemInterface, public IGameplayTagAssetInterface 
{
    GENERATED_BODY()


public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InitialGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAbilitySet* AbilitySet;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamId, meta=(AllowPrivateAccess=true))
    EPhasmidTeamId TeamId;
    
    APhasmidAbilityBaseActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTeamId(EPhasmidTeamId newTeamId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_TeamId(EPhasmidTeamId oldTeamId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeGameplayTagsFromInstigator(const FGameplayTagContainer& TagContainer, TArray<FString> Suffixes);
    
public:
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //UAbilitySystemComponent* GetASC() const;
    
    
    //// Fix for true pure virtual functions not being implemented
    //UFUNCTION(BlueprintCallable)
    //bool HasMatchingGameplayTag(FGameplayTag TagToCheck); //const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer); //const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer); //const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer); //const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

