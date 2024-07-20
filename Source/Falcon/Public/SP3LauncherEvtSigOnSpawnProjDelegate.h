#pragma once
#include "CoreMinimal.h"
#include "SP3LauncherEvtSigOnSpawnProjDelegate.generated.h"

class AActor;
class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSP3LauncherEvtSigOnSpawnProj, AActor*, proj, int32, iBarrel, USceneComponent*, barrel);

