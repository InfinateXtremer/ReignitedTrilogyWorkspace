#ifndef UE4SS_SDK_FallingRocks_Blueprint_HPP
#define UE4SS_SDK_FallingRocks_Blueprint_HPP

class AFallingRocks_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UDecalComponent* Boulder_Shadow;                                            // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0328 (size: 0x8)
    class UParticleSystemComponent* Ceiling_Dust;                                     // 0x0330 (size: 0x8)
    class UParticleSystemComponent* Boulder_Dust;                                     // 0x0338 (size: 0x8)
    class UStaticMeshComponent* Boulder;                                              // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0348 (size: 0x8)
    float Boulder_Drop_NewTrack_0_EBDD3B054EC6E17455D5B08F43B0C5E0;                   // 0x0350 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Boulder_Drop__Direction_EBDD3B054EC6E17455D5B08F43B0C5E0; // 0x0354 (size: 0x1)
    class UTimelineComponent* Boulder_Drop;                                           // 0x0358 (size: 0x8)
    FVector Position_End;                                                             // 0x0360 (size: 0xC)
    FVector Position_Start;                                                           // 0x036C (size: 0xC)
    TArray<TEnumAsByte<EObjectTypeQuery>> NewVar_0;                                   // 0x0378 (size: 0x10)

    void UserConstructionScript();
    void Boulder_Drop__FinishedFunc();
    void Boulder_Drop__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_FallingRocks_Blueprint(int32 EntryPoint);
}; // Size: 0x388

#endif
