#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayEventDelegateDelegate.h"
#include "GameplayTagDelegateDelegate.h"
#include "PhasmidGameplayTagCallbackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhasmidGameplayTagCallbackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEventDelegate OnGameplayEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagDelegate OnGameplayTagAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagDelegate OnGameplayTagRemoved;
    
    UPhasmidGameplayTagCallbackComponent();
    UFUNCTION(BlueprintCallable)
    void WaitForGameplayTagRemoved(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void WaitForGameplayTagAdded(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void WaitForGameplayEvent(FGameplayTag Tag);
    
};

