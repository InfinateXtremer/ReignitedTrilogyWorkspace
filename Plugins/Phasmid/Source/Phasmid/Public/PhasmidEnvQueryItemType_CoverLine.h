#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_VectorBase.h"
#include "PhasmidEnvQueryItemType_CoverLine.generated.h"

UCLASS(Blueprintable)
class PHASMID_API UPhasmidEnvQueryItemType_CoverLine : public UEnvQueryItemType_VectorBase {
    GENERATED_BODY()
public:
    UPhasmidEnvQueryItemType_CoverLine();
};

