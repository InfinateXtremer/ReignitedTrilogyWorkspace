#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "ESP3CharAbility.h"
#include "SP3CharAbilParamsAirCarry.h"
#include "SP3CharAbilParamsBomb.h"
#include "SP3CharAbilParamsBounceJump.h"
#include "SP3CharAbilParamsCharge.h"
#include "SP3CharAbilParamsDive.h"
#include "SP3CharAbilParamsDoubleJump.h"
#include "SP3CharAbilParamsFlappyJump.h"
#include "SP3CharAbilParamsFreeLook.h"
#include "SP3CharAbilParamsGlide.h"
#include "SP3CharAbilParamsGroundPound.h"
#include "SP3CharAbilParamsGun.h"
#include "SP3CharAbilParamsJump.h"
#include "SP3CharAbilParamsMelee.h"
#include "SP3CharAbilParamsPush.h"
#include "SP3CharAbilParamsRocket.h"
#include "SP3CharAbilParamsSwim.h"
#include "SP3CharAbilParamsVehicle.h"
#include "SP3CharAbilitySet.h"
#include "SP3CharEvtSigBombThrowEndedEventDelegate.h"
#include "SP3CharEvtSigBombThrowStartedEventDelegate.h"
#include "SP3CharEvtSigOnFreeLookDelegate.h"
#include "SP3CharEvtSigOnGemFindDelegate.h"
#include "SP3CharEvtSigOnL2CenterCamDelegate.h"
#include "SP3CharEvtSigVFXEventDelegate.h"
#include "SP3CharParamsAnim.h"
#include "SP3CharParamsCamera.h"
#include "SP3_ControllableComponent.h"
#include "SP3_CharacterComponent.generated.h"

class AActor;
class UAnimSequenceBase;
class UPrimitiveComponent;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USP3_CharacterComponent : public USP3_ControllableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_autoStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilitySet m_abilSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_interpRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_walkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_walkAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_gravityScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fallFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_landTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_idleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsJump m_jump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsMelee m_melee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsGroundPound m_groundPound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsFreeLook m_freeLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsGlide m_glide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsDive m_dive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsCharge m_charge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsSwim m_swim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsDoubleJump m_doubleJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsBounceJump m_bounceJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsGun m_gun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsBomb m_bomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsRocket m_rocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsAirCarry m_airCarry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsFlappyJump m_flappyJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsVehicle m_vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharAbilParamsPush m_push;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharParamsAnim m_anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharParamsCamera m_fixedCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharEvtSigOnL2CenterCam OnL2CenterCam;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharEvtSigOnFreeLook OnFreeLook;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharEvtSigOnGemFind OnGemFind;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharEvtSigVFXEvent OnVFXEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharEvtSigBombThrowStartedEvent OnBombThrowStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CharEvtSigBombThrowEndedEvent OnBombThrowEndedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_uiReticle;
    
public:
    USP3_CharacterComponent();
    UFUNCTION(BlueprintCallable)
    void UnblockAbility(ESP3CharAbility iAbil);
    
    UFUNCTION(BlueprintCallable)
    void StopVOEvent();
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityBlocked(ESP3CharAbility iAbil, bool Blocked);
    
private:
    UFUNCTION(BlueprintCallable)
    void RxTakeDamage(AActor* sender, const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void RxOverlapEnd(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void RxOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void RxDeath(AActor* sender, const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayVOEvent(FName evtName, UAnimSequenceBase* Anim, float Duration, bool fullBody);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequenceBase* GetVOAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAbilityBlocked(ESP3CharAbility iAbil) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAbilActive(ESP3CharAbility iAbil) const;
    
    UFUNCTION(BlueprintCallable)
    void BlockAbility(ESP3CharAbility iAbil);
    
};

