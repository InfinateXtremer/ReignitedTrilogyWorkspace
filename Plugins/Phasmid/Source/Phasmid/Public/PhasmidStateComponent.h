#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "PhasmidStateChangeSignatureDelegate.h"
#include "PhasmidStateComponent.generated.h"

class AActor;
class AController;
class UPhasmidStateComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UPhasmidStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEnterFromSelf;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidStateChangeSignature OnEnterState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidStateChangeSignature OnReplicatedEnterState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidStateChangeSignature OnExitState;
    
    UPhasmidStateComponent();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNextState(FName NextStateName, AActor* TriggeringActor, AController* TriggeringController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTickState(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveReplicatedEnterState(float Timestamp);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExitState();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEnterState(UPhasmidStateComponent* PreviousState, AActor* TriggeringActor, AController* TriggeringController, float EnterTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDamage(float Magnitude, FGameplayTagContainer DamageTags, UPrimitiveComponent* HitComponent, AActor* DamagingActor, AController* Instigator);
    
    UFUNCTION(BlueprintCallable)
    bool GetTriggeredState(FName& Name, AActor*& TriggeringActor, AController*& TriggeringController, bool& bReplicateTrigger);
    
};

