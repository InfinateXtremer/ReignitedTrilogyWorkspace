

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "SpyroPlayerController.h"
#include "SpyroAbility.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API USpyroAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* Owner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ASpyroCharacter* OwnerCharacter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimInstance* AnimInstance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ASpyroPlayerController* PlayerController;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UAbilityTask*> AsyncTaskProxyList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhasmidAbilitySystemComponent* AbilitySystemComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* SkeletalMeshComponent;

	UFUNCTION(BlueprintCallable)
	void RemoveAsyncTaskProxyFromList(class UAbilityTask* AsyncTaskProxy);
	UFUNCTION(BlueprintCallable)
	void PostEndAbility(bool bWasCancelled);
	UFUNCTION(BlueprintCallable)
	void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
	UFUNCTION(BlueprintCallable)
	void ClearAsyncTaskProxyList();
	UFUNCTION(BlueprintCallable)
	void AddAsyncTaskProxyToList(class UAbilityTask* AsyncTaskProxy);
	UFUNCTION(BlueprintCallable)
	void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
	
};
