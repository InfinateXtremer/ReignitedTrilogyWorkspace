#pragma once
#include "CoreMinimal.h"
#include "ScriptedWorld.h"
#include "BossWorld.generated.h"

UCLASS(Abstract, Blueprintable)
class UBossWorld : public UScriptedWorld {
    GENERATED_BODY()
public:
    UBossWorld();
};

