#pragma once
#include "CoreMinimal.h"
#include "SP3_SparxEnemyStaged.h"
#include "SP3_SparxEnemyMantaRay.generated.h"

UCLASS(Blueprintable)
class FALCON_API ASP3_SparxEnemyMantaRay : public ASP3_SparxEnemyStaged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_specialStage;
    
    ASP3_SparxEnemyMantaRay();
};

