#include "PhasmidEnvQueryTest_CanReachBefore.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UPhasmidEnvQueryTest_CanReachBefore::UPhasmidEnvQueryTest_CanReachBefore() {
    this->bUseDistance2D = false;
    this->CanReachBefore = UEnvQueryContext_Querier::StaticClass();
}

