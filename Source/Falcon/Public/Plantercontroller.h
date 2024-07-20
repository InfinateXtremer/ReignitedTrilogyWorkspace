#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "PropController.h"
#include "Plantercontroller.generated.h"

class AActor;

UCLASS(Blueprintable)
class APlantercontroller : public APropController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageTags;
    
    APlantercontroller();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(AActor* Actor, const FGameplayEventData Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void Destroyed();
    
};

