#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EInventoryType.h"
#include "PhasmidInventoryInterface.h"
#include "PhasmidInventoryItem.h"
#include "PhasmidInventoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhasmidInventoryComponent : public UActorComponent, public IPhasmidInventoryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInventoryType, int32> inventoryItems;
    
    UPhasmidInventoryComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 getInventory(TArray<FPhasmidInventoryItem>& Items);
    
    
    // Fix for true pure virtual functions not being implemented
};

