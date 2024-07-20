#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/RecastNavMesh.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RecastNavMesh -FallbackName=RecastNavMesh
#include "PhasmidNavMesh.generated.h"

class APhasmidNavPostManager;

UCLASS(Blueprintable)
class PHASMID_API APhasmidNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhasmidNavPostManager* NavPostManager;
    
public:
    APhasmidNavMesh();
};

