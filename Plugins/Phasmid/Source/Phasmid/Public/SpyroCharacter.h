#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "DamagingActorInterface.h"
#include "PhasmidCharacter.h"
#include "SpyroCharacter.generated.h"

class APhasmidProjectileActor;
class UFollowCameraComponent;

UCLASS(Blueprintable)
class PHASMID_API ASpyroCharacter : public APhasmidCharacter, public IDamagingActorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRapidFireAbilityActivatedDelegate, bool, IsActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomProjectileFiredDelegate, APhasmidProjectileActor*, ProjectileActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAbilityActionDelegate, FGameplayTag, InputAction, const FGameplayEventData, Payload);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFollowCameraComponent* FollowCamera;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsChargePressed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDivingDisabledVolume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDivingDisabledShallow: 1;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityActionDelegate AbilityActionDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomProjectileFiredDelegate OnCustomProjectileFiredDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRapidFireAbilityActivatedDelegate OnRapidFireAbilityActivatedDispatcher;
    
    ASpyroCharacter();
    UFUNCTION(BlueprintCallable)
    void StopCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetSkateboardState(FName stateName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void JumpInputExpired();
    
    UFUNCTION(BlueprintCallable)
    void DoFireAttack();
    
    UFUNCTION(BlueprintCallable)
    void DoCharge();
    
    
    // Fix for true pure virtual functions not being implemented
};

