#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "LipsyncActor.generated.h"

UCLASS(Blueprintable)
class TFBPLUGIN_API ALipsyncActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    ALipsyncActor();
};

