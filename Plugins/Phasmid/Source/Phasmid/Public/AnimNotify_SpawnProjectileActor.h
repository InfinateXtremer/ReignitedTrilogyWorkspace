#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "PhasmidProjectileStruct.h"
#include "AnimNotify_SpawnProjectileActor.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PHASMID_API UAnimNotify_SpawnProjectileActor : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidProjectileStruct ProjectileData;
    
    UAnimNotify_SpawnProjectileActor();
};

