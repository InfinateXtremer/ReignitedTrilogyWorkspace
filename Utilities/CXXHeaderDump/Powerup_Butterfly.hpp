#ifndef UE4SS_SDK_Powerup_Butterfly_HPP
#define UE4SS_SDK_Powerup_Butterfly_HPP

class APowerup_Butterfly_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0328 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0330 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0338 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0340 (size: 0x8)
    float Initial_Move_to_Spline_Start_Alpha_44A41C82401B81909837829579784CE1;        // 0x0348 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Initial_Move_to_Spline_Start__Direction_44A41C82401B81909837829579784CE1; // 0x034C (size: 0x1)
    class UTimelineComponent* Initial Move to Spline Start;                           // 0x0350 (size: 0x8)
    float Circle_on_Spline_Distance_on_Spline_628DF9374FC6F20898AA50A2389C8CF8;       // 0x0358 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Circle_on_Spline__Direction_628DF9374FC6F20898AA50A2389C8CF8; // 0x035C (size: 0x1)
    class UTimelineComponent* Circle on Spline;                                       // 0x0360 (size: 0x8)
    FVector Starting Location;                                                        // 0x0368 (size: 0xC)
    TEnumAsByte<Powerup_Types::Type> Power_Up_Type;                                   // 0x0374 (size: 0x1)
    class AActor* Spawn after Death of;                                               // 0x0378 (size: 0x8)
    float Travel Distance;                                                            // 0x0380 (size: 0x4)
    float Play Rate;                                                                  // 0x0384 (size: 0x4)

    void OnRep_Spawn after Death of();
    void UserConstructionScript();
    void Circle on Spline__FinishedFunc();
    void Circle on Spline__UpdateFunc();
    void Initial Move to Spline Start__FinishedFunc();
    void Initial Move to Spline Start__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Powerup_Butterfly(int32 EntryPoint);
}; // Size: 0x388

#endif
