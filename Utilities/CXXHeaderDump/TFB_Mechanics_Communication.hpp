#ifndef UE4SS_SDK_TFB_Mechanics_Communication_HPP
#define UE4SS_SDK_TFB_Mechanics_Communication_HPP

class ITFB_Mechanics_Communication_C : public IInterface
{

    void DeactivateMechanic(class AActor* RequestingActor, int32 Value);
    void ActivateMechanic(class AActor* RequestingActor, int32 Value);
}; // Size: 0x28

#endif
