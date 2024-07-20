#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "PhasmidLevelActor.h"
#include "OnBossPickupActivatedDelegateDelegate.h"
#include "OnBossPickupLandedDelegateDelegate.h"
#include "SP3_BossPickupBase.generated.h"

class AActor;
class UMeshComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class FALCON_API ASP3_BossPickupBase : public APhasmidLevelActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LandingDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxLandingAngle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBossPickupLandedDelegate OnPickupLandedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBossPickupActivatedDelegate OnPickupActivatedEvent;
    
    ASP3_BossPickupBase();
    UFUNCTION(BlueprintCallable)
    void SetFallingEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPickupLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPickupActivated(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionCompHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapCallback(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    bool GetFallingEnabled();
    
};

