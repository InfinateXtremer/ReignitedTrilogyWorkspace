#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ScriptedWorld.generated.h"

UCLASS(Abstract, Blueprintable)
class UScriptedWorld : public UObject {
    GENERATED_BODY()
public:
    UScriptedWorld();
};

