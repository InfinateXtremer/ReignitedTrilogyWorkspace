#include "PhasmidPatrolPath.h"
#include "Components/SplineComponent.h"

APhasmidPatrolPath::APhasmidPatrolPath() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Path"));
}

