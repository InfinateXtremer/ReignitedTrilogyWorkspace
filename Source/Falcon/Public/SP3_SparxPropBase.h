#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SP3DmgEvtSigDeathEndDelegate.h"
#include "SP3DmgEvtSigDeathStartDelegate.h"
#include "SP3_AnimInterface.h"
#include "SP3_DamageInterface.h"
#include "SP3_SparxPropBase.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class FALCON_API ASP3_SparxPropBase : public AActor, public ISP3_AnimInterface, public ISP3_DamageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_healthMax;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3DmgEvtSigDeathStart OnDeathStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3DmgEvtSigDeathEnd OnDeathEnd;
    
    ASP3_SparxPropBase();
private:
    UFUNCTION(BlueprintCallable)
    void RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayMontage(UAnimMontage* Montage, float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVFXEvent(FName evtName, const FTransform& xfm, FName param0, float param1);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    FName GetAnimState(FName Layer, FVector4& Input, float& Alpha, FName& SubState) const override PURE_VIRTUAL(GetAnimState, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    bool IsDead() const override PURE_VIRTUAL(IsDead, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetHealthMax() const override PURE_VIRTUAL(GetHealthMax, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    float GetHealth() const override PURE_VIRTUAL(GetHealth, return 0.0f;);
    
};

