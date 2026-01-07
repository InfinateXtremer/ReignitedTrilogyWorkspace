#ifndef UE4SS_SDK_ILevelTransitionInteractions_HPP
#define UE4SS_SDK_ILevelTransitionInteractions_HPP

class IILevelTransitionInteractions_C : public IInterface
{

    void ILevelTransitionBumperRight(bool Pressed);
    void ILevelTransitionBumperLeft(bool Pressed);
    void ILevelTransitionFaceBottom(bool Pressed);
}; // Size: 0x28

#endif
