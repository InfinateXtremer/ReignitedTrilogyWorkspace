#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PooledActorInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class PHASMID_API UPooledActorInterface : public UInterface {
    GENERATED_BODY()
};

class PHASMID_API IPooledActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPoolOwner(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStartSpawnFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnReleaseToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFinishSpawnAndEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetPoolOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DestroyWithOwner() const;
    
};

