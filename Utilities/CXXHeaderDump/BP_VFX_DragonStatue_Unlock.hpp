#ifndef UE4SS_SDK_BP_VFX_DragonStatue_Unlock_HPP
#define UE4SS_SDK_BP_VFX_DragonStatue_Unlock_HPP

class ABP_VFX_DragonStatue_Unlock_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* SM_CNS1197_DragonStatue;                              // 0x0320 (size: 0x8)
    class USplineComponent* Spline_C3;                                                // 0x0328 (size: 0x8)
    class USplineComponent* Spline_B3;                                                // 0x0330 (size: 0x8)
    class UVectorFieldComponent* VectorField;                                         // 0x0338 (size: 0x8)
    class USplineComponent* Spline_A3;                                                // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)
    float Timeline_Crack_Reveals_C_HornGlow_5E919E234F084BE9D985D48C02799832;         // 0x0350 (size: 0x4)
    float Timeline_Crack_Reveals_C_Spline_Movers_5E919E234F084BE9D985D48C02799832;    // 0x0354 (size: 0x4)
    float Timeline_Crack_Reveals_C_Turbo_Bloomer_5E919E234F084BE9D985D48C02799832;    // 0x0358 (size: 0x4)
    float Timeline_Crack_Reveals_C_Large_Crack_Reveal_5E919E234F084BE9D985D48C02799832; // 0x035C (size: 0x4)
    float Timeline_Crack_Reveals_C_Small_Crack_Amount_5E919E234F084BE9D985D48C02799832; // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Crack_Reveals_C__Direction_5E919E234F084BE9D985D48C02799832; // 0x0364 (size: 0x1)
    class UTimelineComponent* Timeline_Crack_Reveals_C;                               // 0x0368 (size: 0x8)
    float LightRays_Start;                                                            // 0x0370 (size: 0x4)
    class ACollectable_Dragon_C* Dragon;                                              // 0x0378 (size: 0x8)
    int32 RumbleState;                                                                // 0x0380 (size: 0x4)

    void UserConstructionScript();
    void Timeline_Crack_Reveals_C__FinishedFunc();
    void Timeline_Crack_Reveals_C__UpdateFunc();
    void Timeline_Crack_Reveals_C__Events__EventFunc();
    void Cinematic_BeginPlay();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_VFX_DragonStatue_Unlock(int32 EntryPoint);
}; // Size: 0x384

#endif
