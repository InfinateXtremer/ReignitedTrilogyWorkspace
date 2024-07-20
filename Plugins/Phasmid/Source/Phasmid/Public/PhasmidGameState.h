#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PhasmidObserverInterface.h"
#include "PlayerSessionStats.h"
#include "PhasmidGameState.generated.h"

class AActor;
class APawn;
class UObject;
class UPhasmidCombatCoordinatorComponent;

UCLASS(Blueprintable)
class APhasmidGameState : public AGameStateBase, public IPhasmidObserverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidCombatCoordinatorComponent* CombatCoordinator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerSessionStatsArray, meta=(AllowPrivateAccess=true))
    TArray<FPlayerSessionStats> PlayerSessionStatsArray;
    
public:
    APhasmidGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerDealtDamage(APawn* PlayerPawn, AActor* DamagingActor, AActor* DamagedActor, int32 Damage, bool isCrit, bool IsKill);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerSessionStatsArray();
    
    UFUNCTION(BlueprintCallable)
    FPlayerSessionStats GetStatsByPawn(APawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRep_PlayerSessionStatsArray();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void RegisterObserver(UObject* Observer) override PURE_VIRTUAL(RegisterObserver,);
    
};

