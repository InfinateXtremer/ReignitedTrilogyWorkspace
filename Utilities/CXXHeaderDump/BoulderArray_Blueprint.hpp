#ifndef UE4SS_SDK_BoulderArray_Blueprint_HPP
#define UE4SS_SDK_BoulderArray_Blueprint_HPP

class ABoulderArray_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UArrowComponent* Arrow27;                                                   // 0x0320 (size: 0x8)
    class UArrowComponent* Arrow26;                                                   // 0x0328 (size: 0x8)
    class UArrowComponent* Arrow25;                                                   // 0x0330 (size: 0x8)
    class UArrowComponent* Arrow24;                                                   // 0x0338 (size: 0x8)
    class UArrowComponent* Arrow23;                                                   // 0x0340 (size: 0x8)
    class UArrowComponent* Arrow22;                                                   // 0x0348 (size: 0x8)
    class UArrowComponent* Arrow21;                                                   // 0x0350 (size: 0x8)
    class UArrowComponent* Arrow20;                                                   // 0x0358 (size: 0x8)
    class UArrowComponent* Arrow19;                                                   // 0x0360 (size: 0x8)
    class UArrowComponent* Arrow18;                                                   // 0x0368 (size: 0x8)
    class UArrowComponent* Arrow17;                                                   // 0x0370 (size: 0x8)
    class UArrowComponent* Arrow16;                                                   // 0x0378 (size: 0x8)
    class UArrowComponent* Arrow15;                                                   // 0x0380 (size: 0x8)
    class UArrowComponent* Arrow14;                                                   // 0x0388 (size: 0x8)
    class UArrowComponent* Arrow13;                                                   // 0x0390 (size: 0x8)
    class UArrowComponent* Arrow12;                                                   // 0x0398 (size: 0x8)
    class UArrowComponent* Arrow11;                                                   // 0x03A0 (size: 0x8)
    class UArrowComponent* Arrow10;                                                   // 0x03A8 (size: 0x8)
    class UArrowComponent* Arrow9;                                                    // 0x03B0 (size: 0x8)
    class UArrowComponent* Arrow8;                                                    // 0x03B8 (size: 0x8)
    class UArrowComponent* Arrow7;                                                    // 0x03C0 (size: 0x8)
    class UArrowComponent* Arrow6;                                                    // 0x03C8 (size: 0x8)
    class UArrowComponent* Arrow5;                                                    // 0x03D0 (size: 0x8)
    class UArrowComponent* Arrow4;                                                    // 0x03D8 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x03E0 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x03E8 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x03F0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03F8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0400 (size: 0x8)
    class ABP_CBS2001_Crush_C* Crush;                                                 // 0x0408 (size: 0x8)
    FVector Current_Loc;                                                              // 0x0410 (size: 0xC)
    FRotator Rotator;                                                                 // 0x041C (size: 0xC)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void CrushStateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void StartFallSequence();
    void SpawnBoulder(FVector Location, FRotator Rotation);
    void ExecuteUbergraph_BoulderArray_Blueprint(int32 EntryPoint);
}; // Size: 0x428

#endif
