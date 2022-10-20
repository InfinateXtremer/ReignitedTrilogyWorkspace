

#include "ManagedExponentialHeightFog.h"


AManagedExponentialHeightFog::AManagedExponentialHeightFog()
{

	Component = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("Component"));
	//MasterSkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("MasterSkyLight"));
}

