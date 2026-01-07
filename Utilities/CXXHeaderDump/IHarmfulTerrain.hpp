#ifndef UE4SS_SDK_IHarmfulTerrain_HPP
#define UE4SS_SDK_IHarmfulTerrain_HPP

class IIHarmfulTerrain_C : public IInterface
{

    void IGetHarmfulTerrainDamageMagnitude(float& DamageMagnitude);
    void IGetHarmfulTerrainLiquidColorInfo(FLinearColor& LiquidColorInfo);
}; // Size: 0x28

#endif
