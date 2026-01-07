#ifndef UE4SS_SDK_levelTransitionScreenInterface_HPP
#define UE4SS_SDK_levelTransitionScreenInterface_HPP

class IlevelTransitionScreenInterface_C : public IInterface
{

    void hide transition screen(float fade time);
    void set transition type(TEnumAsByte<ELevelTransitionType::Type> transition type, float fade in time, float fade out time);
}; // Size: 0x28

#endif
