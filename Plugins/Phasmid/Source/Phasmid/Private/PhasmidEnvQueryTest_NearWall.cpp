#include "PhasmidEnvQueryTest_NearWall.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UPhasmidEnvQueryTest_NearWall::UPhasmidEnvQueryTest_NearWall() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

