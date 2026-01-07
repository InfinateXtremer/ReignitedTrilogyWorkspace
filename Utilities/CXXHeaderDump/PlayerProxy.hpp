#ifndef UE4SS_SDK_PlayerProxy_HPP
#define UE4SS_SDK_PlayerProxy_HPP

class APlayerProxy_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    float LookaheadSecondsEasy;                                                       // 0x0330 (size: 0x4)
    float LookaheadSecondsNormal;                                                     // 0x0334 (size: 0x4)
    float LookaheadSecondsHard;                                                       // 0x0338 (size: 0x4)
    float LookaheadSecondsNightmare;                                                  // 0x033C (size: 0x4)
    TMap<int32, float> DifficultyLookaheadSecondsMap;                                 // 0x0340 (size: 0x50)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_PlayerProxy(int32 EntryPoint);
}; // Size: 0x390

#endif
