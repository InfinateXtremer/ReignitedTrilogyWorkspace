#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "PatrolPath.h"
#include "PhasmidEncounterEnemyEventDelegate.h"
#include "PhasmidEncounterEventDelegate.h"
#include "EncounterManager.generated.h"

class AActor;
class AEncounterManager;

UCLASS(Blueprintable)
class AEncounterManager : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPatrolPath> PatrolPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumMeleePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerMeleeStandoffDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterMeleeStandoffDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumSimultaneousAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleePositioningRelaxationDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMeleeRateLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumMeleeAttackRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeAttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeAttackDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeTauntFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TauntDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRangedRateLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumRangedAttackRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangedAttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangedAttackDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepositionDistanceThresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidEncounterEvent OnEncounterActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidEncounterEvent OnEncounterCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidEncounterEvent OnCombatStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidEncounterEvent OnCombatEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidEncounterEnemyEvent OnEnemyAlerted;
    
    AEncounterManager();
    UFUNCTION(BlueprintCallable)
    static void SetOverrideTargetForActor(AActor* Actor, AActor* OverrideTarget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRangedAttack(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMeleeAttack(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AEncounterManager* GetEncounter(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void EncounterStop();
    
    UFUNCTION(BlueprintCallable)
    void EncounterStart();
    
    UFUNCTION(BlueprintCallable)
    void EncounterResume();
    
    UFUNCTION(BlueprintCallable)
    void EncounterPause();
    
    UFUNCTION(BlueprintCallable)
    void EncounterKillAll();
    
};

