#include "PhasmidEnvQueryTest_InFieldOfView.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UPhasmidEnvQueryTest_InFieldOfView::UPhasmidEnvQueryTest_InFieldOfView() {
    this->Viewer = UEnvQueryContext_Querier::StaticClass();
}

