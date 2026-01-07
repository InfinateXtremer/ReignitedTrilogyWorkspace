#ifndef UE4SS_SDK_DatasmithContent_HPP
#define UE4SS_SDK_DatasmithContent_HPP

#include "DatasmithContent_enums.hpp"

class ADatasmithAreaLightActor : public AActor
{
    EDatasmithAreaLightActorShape LightShape;                                         // 0x0318 (size: 0x1)
    FVector2D Dimensions;                                                             // 0x031C (size: 0x8)
    FLinearColor Color;                                                               // 0x0324 (size: 0x10)
    float Intensity;                                                                  // 0x0334 (size: 0x4)

}; // Size: 0x338

#endif
