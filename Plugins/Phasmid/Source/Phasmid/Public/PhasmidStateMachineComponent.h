#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "StateReplicationInfo.h"
#include "PhasmidStateMachineComponent.generated.h"

class AActor;
class AController;
class UPhasmidStateComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UPhasmidStateMachineComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPrintStateChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlueprintNextStateName;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> LastPlayerOverlapped;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> PreviousTriggeringActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> PreviousTriggeringController;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> NextTriggeringActor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> NextTriggeringController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GlobalStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    FStateReplicationInfo ReplicatedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidStateComponent* CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidStateComponent* PreviousState;
    
    UPROPERTY(EditAnywhere, Export, ReplicatedUsing=OnRep_CurrentGlobalState, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPhasmidStateComponent> GlobalState;
    
public:
    UPhasmidStateMachineComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNextStateByName(FName stateName, AActor* TriggeringActor, AController* TriggeringController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLastPlayerOverlapped(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetCurrentStateByName(FName stateName, AActor* TriggeringActor, AController* TriggeringController, bool bReplicate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetCurrentState(UPhasmidStateComponent* State, AActor* TriggeringActor, AController* TriggeringController, bool bReplicate);
    
    UFUNCTION(BlueprintCallable)
    void OnStateChange(UPhasmidStateComponent* OldState, UPhasmidStateComponent* NextState, AActor* TriggeringActor, AController* TriggeringController);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentGlobalState();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnReceiveHit(float Magnitude, FGameplayTagContainer DamageTags, UPrimitiveComponent* HitComponent, AActor* AttackingActor, AController* Instigator);
    
    UFUNCTION(BlueprintCallable)
    AController* GetPreviousTriggeringController();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPreviousTriggeringActor();
    
    UFUNCTION(BlueprintCallable)
    UPhasmidStateComponent* GetPrevioustate();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetLastPlayerOverlapped();
    
    UFUNCTION(BlueprintCallable)
    UPhasmidStateComponent* GetCurrentState();
    
};

