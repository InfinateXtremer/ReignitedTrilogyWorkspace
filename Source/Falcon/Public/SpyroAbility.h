#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "SpyroAbility.generated.h"

class AActor;
class ASpyroCharacter;
class ASpyroPlayerController;
class UAbilityTask;
class UAnimInstance;
class UPhasmidAbilitySystemComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FALCON_API USpyroAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpyroCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpyroPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAbilityTask*> AsyncTaskProxyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    USpyroAbility();
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveAsyncTaskProxyFromList(UAbilityTask* AsyncTaskProxy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostEndAbility(bool bWasCancelled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearAsyncTaskProxyList();
    
    UFUNCTION(BlueprintCallable)
    void AddAsyncTaskProxyToList(UAbilityTask* AsyncTaskProxy);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    
};

