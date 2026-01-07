#ifndef UE4SS_SDK_BP_CrystalTower_Fracture_HPP
#define UE4SS_SDK_BP_CrystalTower_Fracture_HPP

class ABP_CrystalTower_Fracture_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0320 (size: 0x8)
    class UParticleSystemComponent* PS_LS211_CrystalTower_Explosion;                  // 0x0328 (size: 0x8)
    class UDestructibleComponent* SM_LS211_CrystalHouseB_DM_ArchStar;                 // 0x0330 (size: 0x8)
    class UDestructibleComponent* SM_LS211_CrystalHouseB_DM_MainStructure;            // 0x0338 (size: 0x8)
    class UDestructibleComponent* SM_LS211_CrystalHouseB_DM_Crystal;                  // 0x0340 (size: 0x8)
    class UStaticMeshComponent* SM_LS211_CrystalHouse_Broken;                         // 0x0348 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0350 (size: 0x8)
    FVector HitLoc;                                                                   // 0x0358 (size: 0xC)
    float DMG_Radius;                                                                 // 0x0364 (size: 0x4)
    float Impulse Power;                                                              // 0x0368 (size: 0x4)

    void UserConstructionScript();
    void InpActEvt_Divide_K2Node_InputKeyEvent_0(FKey Key);
    void BoomBoom();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CrystalTower_Fracture(int32 EntryPoint);
}; // Size: 0x36C

#endif
