#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "ESP3_ProjColType.h"
#include "SP3DmgEvtSigDeathEndDelegate.h"
#include "SP3DmgEvtSigDeathStartDelegate.h"
#include "SP3SparxEnemyLoot.h"
#include "SP3_AnimInterface.h"
#include "SP3_DamageInterface.h"
#include "Templates/SubclassOf.h"
#include "SP3_SparxEnemyBase.generated.h"

class AActor;
class APawn;
class UAnimMontage;
class UDamageType;
class USP3_HomingTargetComponent;
class USceneComponent;
class USparxHealthBarWidget;
class UTextRenderComponent;

UCLASS(Blueprintable)
class FALCON_API ASP3_SparxEnemyBase : public ACharacter, public ISP3_AnimInterface, public ISP3_DamageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_floorZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_healthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_waitChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_clearChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> m_contactDmgType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_contactDmgAmt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USparxHealthBarWidget> m_uiHealthClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_uiHealthIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_noFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_autoTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_autoTgtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_autoTgtRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_autoTgtAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSP3SparxEnemyLoot> m_loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dbgDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USP3_HomingTargetComponent* HomingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* DebugText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3DmgEvtSigDeathStart OnDeathStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3DmgEvtSigDeathEnd OnDeathEnd;
    
    ASP3_SparxEnemyBase();
    UFUNCTION(BlueprintCallable)
    AActor* SpawnProjectile(const USceneComponent* Component, FName socket, TSubclassOf<AActor> ProjClass, float Speed, float InheritVel, float aimAdjust);
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetFacingDir(float angDegWS);
    
private:
    UFUNCTION(BlueprintCallable)
    void RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayMontage(UAnimMontage* Montage, float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVFXEvent(FName evtName, const FTransform& xfm, FName param0, float param1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESP3_ProjColType GetProjColType(AActor* proj, APawn* sender, const FHitResult& Hit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumProjectiles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFacingDir() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearProjectiles();
    
    UFUNCTION(BlueprintCallable)
    void ApplyKnockback(const FVector& from, float Impulse, float Duration);
    
    
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

