#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ComponentInteractSignatureDelegate.h"
#include "ComponentSetEnableInteractSignatureDelegate.h"
#include "EPhasmidTeamId.h"
#include "PhasmidInteractableComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhasmidInteractableComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInteractable, meta=(AllowPrivateAccess=true))
    bool bIsInteractable;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentInteractSignature OnInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentSetEnableInteractSignature OnEnableInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentSetEnableInteractSignature OnDisableInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InteractTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresLineOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkedSceneComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery RequiredInteractorTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhasmidTeamId RequiredTeam;
    
    UPhasmidInteractableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Unhighlight(AActor* Interactor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInteractable(bool Interactable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_IsInteractable();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_Interact(AActor* Interactor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Interact(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Highlight(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetInteractableByActor(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetInteractable();
    
};

