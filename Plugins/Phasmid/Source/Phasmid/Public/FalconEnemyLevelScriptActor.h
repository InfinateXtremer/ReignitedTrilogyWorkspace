#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "FalconLevelScriptInterface.h"
#include "FalconEnemyLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class AFalconEnemyLevelScriptActor : public ALevelScriptActor //, public IFalconLevelScriptInterface 
{
    GENERATED_BODY()
public:
    AFalconEnemyLevelScriptActor();
    
    // Fix for true pure virtual functions not being implemented
};

