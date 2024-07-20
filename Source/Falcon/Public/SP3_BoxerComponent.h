#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SP3DmgEvtSigDeathEndDelegate.h"
#include "SP3DmgEvtSigDeathStartDelegate.h"
#include "SP3_BoxerAI.h"
#include "SP3_BoxerAttack.h"
#include "SP3_BoxerDamage.h"
#include "SP3_BoxerEvtSigVFXEventDelegate.h"
#include "SP3_BoxerMovement.h"
#include "SP3_ControllableComponent.h"
#include "SP3_DamageInterface.h"
#include "SP3_BoxerComponent.generated.h"

class AActor;
class AController;
class UAnimMontage;
class UDamageType;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USP3_BoxerComponent : public USP3_ControllableComponent, public ISP3_DamageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3_BoxerAI m_ai;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3_BoxerMovement m_movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3_BoxerDamage m_damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSP3_BoxerAttack> m_attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_animBlockHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_animTaunt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_animCelebrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_tQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_blockInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dbgDraw;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3_BoxerEvtSigVFXEvent OnVFXEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3DmgEvtSigDeathStart OnDeathStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3DmgEvtSigDeathEnd OnDeathEnd;
    
    USP3_BoxerComponent();
private:
    UFUNCTION(BlueprintCallable)
    void RxTakeAnyDamage(AActor* Target, float dmgAmount, const UDamageType* dmgType, AController* Instigator, AActor* causer);
    
    UFUNCTION(BlueprintCallable)
    void RxOverlapEnd(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void RxOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool IsDead() const override PURE_VIRTUAL(IsDead, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetHealthMax() const override PURE_VIRTUAL(GetHealthMax, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    float GetHealth() const override PURE_VIRTUAL(GetHealth, return 0.0f;);
    
};

