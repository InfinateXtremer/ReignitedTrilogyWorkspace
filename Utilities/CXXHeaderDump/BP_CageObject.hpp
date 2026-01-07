#ifndef UE4SS_SDK_BP_CageObject_HPP
#define UE4SS_SDK_BP_CageObject_HPP

class ABP_CageObject_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0320 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0328 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0330 (size: 0x8)
    float Timeline_0_Fringe_Intensity_78AC1BA241D6E90787D50F8B05D2C946;               // 0x0338 (size: 0x4)
    float Timeline_0_Fringe_Size_78AC1BA241D6E90787D50F8B05D2C946;                    // 0x033C (size: 0x4)
    float Timeline_0_Dissolve_Amount_78AC1BA241D6E90787D50F8B05D2C946;                // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_78AC1BA241D6E90787D50F8B05D2C946; // 0x0344 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0348 (size: 0x8)
    class AActor* Cage;                                                               // 0x0350 (size: 0x8)
    bool FadeCage;                                                                    // 0x0358 (size: 0x1)
    bool HiddenUponLoad;                                                              // 0x0359 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CageObject(int32 EntryPoint);
}; // Size: 0x35A

#endif
