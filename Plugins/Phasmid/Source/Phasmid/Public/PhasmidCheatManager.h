#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "PhasmidCheatManager.generated.h"

UCLASS(Blueprintable)
class UPhasmidCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPhasmidCheatManager();
private:
    UFUNCTION(BlueprintCallable, Exec)
    void Fnord();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Break();
    
};

