#ifndef UE4SS_SDK_BP_S2_TreasureChest_Strong_HPP
#define UE4SS_SDK_BP_S2_TreasureChest_Strong_HPP

class ABP_S2_TreasureChest_Strong_C : public ABP_TreasureChest_BASE_C
{
    class USplineComponent* Spline6;                                                  // 0x0620 (size: 0x8)
    class USplineComponent* Spline5;                                                  // 0x0628 (size: 0x8)
    class USplineComponent* Spline4;                                                  // 0x0630 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x0638 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x0640 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x0648 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0650 (size: 0x8)
    class USplineComponent* Spline_LootPath;                                          // 0x0658 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x660

#endif
