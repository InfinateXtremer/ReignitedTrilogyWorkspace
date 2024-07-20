#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GemFinderTargetInterface.generated.h"

UINTERFACE(Blueprintable)
class FALCON_API UGemFinderTargetInterface : public UInterface {
    GENERATED_BODY()
};

class FALCON_API IGemFinderTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ForceHasGem(bool& bHasGem);
    
};

