#include "PhasmidEnvQueryTest_Directness.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UPhasmidEnvQueryTest_Directness::UPhasmidEnvQueryTest_Directness() {
    this->TestMode = EEnvTestDistance::Distance3D;
    this->DirectnessTo = UEnvQueryContext_Querier::StaticClass();
}

