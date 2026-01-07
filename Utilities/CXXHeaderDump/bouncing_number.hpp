#ifndef UE4SS_SDK_bouncing_number_HPP
#define UE4SS_SDK_bouncing_number_HPP

class Abouncing_number_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* numbermesh;                                           // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    float LinearDampening_Adjust_DampeningVal_CAA57D214A166DFF9FF88DB0769BBBE5;       // 0x0330 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LinearDampening_Adjust__Direction_CAA57D214A166DFF9FF88DB0769BBBE5; // 0x0334 (size: 0x1)
    class UTimelineComponent* LinearDampening_Adjust;                                 // 0x0338 (size: 0x8)
    float LifeSpan;                                                                   // 0x0340 (size: 0x4)
    int32 digit;                                                                      // 0x0344 (size: 0x4)
    TArray<class UStaticMesh*> number meshes;                                         // 0x0348 (size: 0x10)
    bool isSecondDigit?;                                                              // 0x0358 (size: 0x1)

    void UserConstructionScript();
    void LinearDampening_Adjust__FinishedFunc();
    void LinearDampening_Adjust__UpdateFunc();
    void Launch(FVector launch vector, float Rotation);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_bouncing_number(int32 EntryPoint);
}; // Size: 0x359

#endif
