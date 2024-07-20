#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "SP3_PhysicalMaterial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FALCON_API USP3_PhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    USP3_PhysicalMaterial();
};

