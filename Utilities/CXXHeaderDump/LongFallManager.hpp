#ifndef UE4SS_SDK_LongFallManager_HPP
#define UE4SS_SDK_LongFallManager_HPP

class ULongFallManager_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    class UAkAudioEvent* LongFallSFX;                                                 // 0x00F8 (size: 0x8)
    class UAkAudioEvent* LongFallVO;                                                  // 0x0100 (size: 0x8)
    float MinFallLength;                                                              // 0x0108 (size: 0x4)
    class ABP_Base_Enemy_C* MyEnemy;                                                  // 0x0110 (size: 0x8)
    TEnumAsByte<EDrawDebugTrace::Type> DebugDraw;                                     // 0x0118 (size: 0x1)

    void ReceiveBeginPlay();
    void Start Long Fall Check();
    void End Long Fall Check();
    void ExecuteUbergraph_LongFallManager(int32 EntryPoint);
}; // Size: 0x119

#endif
