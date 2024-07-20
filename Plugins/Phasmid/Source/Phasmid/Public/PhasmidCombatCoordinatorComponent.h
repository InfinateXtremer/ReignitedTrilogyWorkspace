#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhasmidCoverLine.h"
#include "PhasmidObserverInterface.h"
#include "PhasmidCombatCoordinatorComponent.generated.h"

class AAIController;
class AActor;
class AEncounterManager;
class UEnvQuery;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UPhasmidCombatCoordinatorComponent : public UActorComponent, public IPhasmidObserverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGenerateCover: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawCover: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleePositioningRelaxationDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepositionDistanceThresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterMeleeStandoffDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumSimultaneousAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumMeleePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerMeleeStandoffDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumMeleeAttackRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumRangedAttackRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeAttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeAttackDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangedAttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangedAttackDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeTauntFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TauntDuration;
    
    UPhasmidCombatCoordinatorComponent();
    UFUNCTION(BlueprintCallable)
    static void RequestCoverPoint(UObject* Target, UEnvQuery* CoverSelectionQuery);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseCoverPoint(UObject* Target);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyFailedToFindCover(UObject* RequestingObject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyEnemyAlerted(AEncounterManager* Encounter, AActor* AlertedEnemy, bool FirstAlert);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyEncounterCompleted(AEncounterManager* Encounter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyEncounterActivated(AEncounterManager* Encounter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyCoverAssigned(UObject* RequestingObject, const FPhasmidCoverLine& CoverPoint);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyCombatStarted(AEncounterManager* Encounter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyCombatEnded(AEncounterManager* Encounter);
    
public:
    UFUNCTION(BlueprintCallable)
    static void BP_RegisterRangedAttack(AAIController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static void BP_RegisterMeleeAttack(AAIController* Controller);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void RegisterObserver(UObject* Observer) override PURE_VIRTUAL(RegisterObserver,);
    
};

