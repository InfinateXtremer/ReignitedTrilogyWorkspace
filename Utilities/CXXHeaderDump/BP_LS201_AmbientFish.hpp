#ifndef UE4SS_SDK_BP_LS201_AmbientFish_HPP
#define UE4SS_SDK_BP_LS201_AmbientFish_HPP

class ABP_LS201_AmbientFish_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0908 (size: 0x8)
    float FishFacing_NewTrack_2_66E29F85456563591DE6C8A655222E32;                     // 0x0910 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FishFacing__Direction_66E29F85456563591DE6C8A655222E32; // 0x0914 (size: 0x1)
    class UTimelineComponent* FishFacing;                                             // 0x0918 (size: 0x8)
    float SpeedChange_Alpha_96E642094CD33466B2554FBB35B3CF73;                         // 0x0920 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SpeedChange__Direction_96E642094CD33466B2554FBB35B3CF73; // 0x0924 (size: 0x1)
    class UTimelineComponent* SpeedChange;                                            // 0x0928 (size: 0x8)
    TMap<int32, UStaticMesh*> FishMap;                                                // 0x0930 (size: 0x50)
    float FishScale;                                                                  // 0x0980 (size: 0x4)
    float Speed_Old;                                                                  // 0x0984 (size: 0x4)
    float Speed_New;                                                                  // 0x0988 (size: 0x4)

    void UserConstructionScript();
    void SpeedChange__FinishedFunc();
    void SpeedChange__UpdateFunc();
    void FishFacing__FinishedFunc();
    void FishFacing__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LS201_AmbientFish(int32 EntryPoint);
}; // Size: 0x98C

#endif
