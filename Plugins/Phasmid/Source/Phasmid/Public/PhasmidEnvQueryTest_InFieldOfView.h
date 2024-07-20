#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "PhasmidEnvQueryTest_InFieldOfView.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UPhasmidEnvQueryTest_InFieldOfView : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Viewer;
    
    UPhasmidEnvQueryTest_InFieldOfView();
};

