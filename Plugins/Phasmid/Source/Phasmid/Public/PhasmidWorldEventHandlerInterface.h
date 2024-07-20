#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PhasmidWorldEventHandlerInterface.generated.h"

UINTERFACE(Blueprintable)
class PHASMID_API UPhasmidWorldEventHandlerInterface : public UInterface {
    GENERATED_BODY()
};

class PHASMID_API IPhasmidWorldEventHandlerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEventLevelRemovedFromWorld(const FString& LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEventLevelAddedToWorld(const FString& LevelName);
    
};

