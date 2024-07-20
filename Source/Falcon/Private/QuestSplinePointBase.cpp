#include "QuestSplinePointBase.h"
#include "Components/SplineComponent.h"

AQuestSplinePointBase::AQuestSplinePointBase() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->bResetSpline = false;
}

