#pragma once
#include "CoreMinimal.h"
#include "PhasmidInteractorComponent.h"
#include "PlayerInteractorComponent.generated.h"

class UPhasmidInteractableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerInteractorComponent : public UPhasmidInteractorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidInteractableComponent* HighlightedComponent;
    
    UPlayerInteractorComponent();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void UpdateHighlighted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SortInteractables();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_HighlightInteractable(UPhasmidInteractableComponent* NewInteractable);
    
    UFUNCTION(BlueprintCallable)
    void Interact();
    
};

