#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "PhasmidInteractorComponent.generated.h"

class AActor;
class UPhasmidInteractableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhasmidInteractorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SourceBlockedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPhasmidInteractableComponent*> Interactables;
    
public:
    UPhasmidInteractorComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveInteractable(UPhasmidInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlap(AActor* MyOverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlap(AActor* MyOverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void InteractWith(UPhasmidInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable)
    void Interact();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteractWith(UPhasmidInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable)
    bool CanInteract();
    
    UFUNCTION(BlueprintCallable)
    void AddInteractable(UPhasmidInteractableComponent* Interactable);
    
};

