#ifndef UE4SS_SDK_BP_CullDuringCutsceneComponent_HPP
#define UE4SS_SDK_BP_CullDuringCutsceneComponent_HPP

class UBP_CullDuringCutsceneComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    FPhasmidSoftReference Spyro1 - DragonStatue;                                      // 0x00F8 (size: 0x28)
    class ACollectable_Dragon_C* DragonStatue;                                        // 0x0120 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void StartDragonIGC();
    void EndDragonIGC();
    void handle game state change(EFalconGameState PrevState, EFalconGameState NextState);
    void ExecuteUbergraph_BP_CullDuringCutsceneComponent(int32 EntryPoint);
}; // Size: 0x128

#endif
