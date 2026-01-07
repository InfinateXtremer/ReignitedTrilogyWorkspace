#ifndef UE4SS_SDK_FlingEquipmentComponent_HPP
#define UE4SS_SDK_FlingEquipmentComponent_HPP

class UFlingEquipmentComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    float FlingVelocityMultiplier;                                                    // 0x00F8 (size: 0x4)

    void Fling Equipment();
    void ResetFling();
    void ExecuteUbergraph_FlingEquipmentComponent(int32 EntryPoint);
}; // Size: 0xFC

#endif
