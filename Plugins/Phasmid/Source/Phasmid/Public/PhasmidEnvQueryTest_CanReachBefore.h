#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "PhasmidEnvQueryTest_CanReachBefore.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UPhasmidEnvQueryTest_CanReachBefore : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDistance2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> CanReachBefore;
    
    UPhasmidEnvQueryTest_CanReachBefore();
};

