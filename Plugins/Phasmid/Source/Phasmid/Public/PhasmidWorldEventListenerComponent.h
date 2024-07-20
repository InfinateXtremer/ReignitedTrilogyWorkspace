#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhasmidWorldEventListenerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhasmidWorldEventListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool eventLevelAddedToWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool eventLevelRemovedFromWorld;
    
    UPhasmidWorldEventListenerComponent();
    UFUNCTION(BlueprintCallable)
    void subscribeEventLevelRemovedFromWorld(bool listen);
    
    UFUNCTION(BlueprintCallable)
    void subscribeEventLevelAddedToWorld(bool listen);
    
};

