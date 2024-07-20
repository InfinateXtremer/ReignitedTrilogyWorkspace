#include "EnvQueryGenerator_NavMeshEdges.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_NavMeshEdges::UEnvQueryGenerator_NavMeshEdges() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}

