#include "SP3_PortalString.h"
#include "Components/SplineComponent.h"

ASP3_PortalString::ASP3_PortalString() {
    this->CharDataTable = NULL;
    this->CharWidth = 22.50f;
    this->String = TEXT("TEST STRING");
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
}

