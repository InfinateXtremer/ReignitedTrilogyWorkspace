#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputSource -FallbackName=EInputSource
#include "Engine/EngineTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "SP3DmgEvtSigDeathEndDelegate.h"
#include "SP3DmgEvtSigDeathStartDelegate.h"
#include "SP3SparxAttack.h"
#include "SP3SparxCamera.h"
#include "SP3SparxDamage.h"
#include "SP3SparxEvtSigOnCameraPopDelegate.h"
#include "SP3SparxEvtSigOnCameraPushDelegate.h"
#include "SP3SparxEvtSigVFXEventDelegate.h"
#include "SP3SparxMovement.h"
#include "SP3_ControllableComponent.h"
#include "SP3_DamageInterface.h"
#include "Templates/SubclassOf.h"
#include "SP3_SparxComponent.generated.h"

class AActor;
class ACharacter;
class AController;
class UDamageType;
class UFalconTimeBarWidget;
class UHudCounterComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USP3_SparxComponent : public USP3_ControllableComponent, public ISP3_DamageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3SparxMovement m_movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3SparxAttack m_attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3SparxDamage m_damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3SparxCamera m_camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ACharacter>> m_enemy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3SparxEvtSigOnCameraPush OnCameraPush;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3SparxEvtSigOnCameraPop OnCameraPop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3SparxEvtSigVFXEvent OnVFXEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3DmgEvtSigDeathStart OnDeathStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3DmgEvtSigDeathEnd OnDeathEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHudCounterComponent> m_uiAmmoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFalconTimeBarWidget> m_uiShieldTimeBarClass;
    
    USP3_SparxComponent();
private:
    UFUNCTION(BlueprintCallable)
    void RxTfBTakeDamage(AActor* sender, const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void RxTfBDeath(AActor* sender, const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void RxTakeAnyDamage(AActor* Target, float dmgAmount, const UDamageType* dmgType, AController* Instigator, AActor* causer);
    
    UFUNCTION(BlueprintCallable)
    void RxOverlapEnd(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void RxOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShieldActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDashActive() const;
    
private:
    //UFUNCTION(BlueprintCallable)
    //void HandleOnNewInputSourceDetected(EInputSource NewSource);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool IsDead() const override PURE_VIRTUAL(IsDead, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetHealthMax() const override PURE_VIRTUAL(GetHealthMax, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    float GetHealth() const override PURE_VIRTUAL(GetHealth, return 0.0f;);
    
};

