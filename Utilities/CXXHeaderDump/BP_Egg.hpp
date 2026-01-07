#ifndef UE4SS_SDK_BP_Egg_HPP
#define UE4SS_SDK_BP_Egg_HPP

class ABP_Egg_C : public ASP3_DragonEgg
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UTfbAkComponent* AkComponent;                                               // 0x0490 (size: 0x8)
    class USkeletalMeshComponent* EggRigged;                                          // 0x0498 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x04A0 (size: 0x8)
    class UParticleSystemComponent* Dissolve;                                         // 0x04A8 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x04B0 (size: 0x8)
    class UParticleSystemComponent* Teleport;                                         // 0x04B8 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x04C0 (size: 0x8)
    float DragonDissolve_VF_Rotation_B1543D714EFFD3809AC178BBC344BA49;                // 0x04C8 (size: 0x4)
    float DragonDissolve_Glow_Strength_B1543D714EFFD3809AC178BBC344BA49;              // 0x04CC (size: 0x4)
    float DragonDissolve_Fringe_Intensity_B1543D714EFFD3809AC178BBC344BA49;           // 0x04D0 (size: 0x4)
    float DragonDissolve_Fringe_Size_B1543D714EFFD3809AC178BBC344BA49;                // 0x04D4 (size: 0x4)
    float DragonDissolve_Dissolve_Amount_B1543D714EFFD3809AC178BBC344BA49;            // 0x04D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DragonDissolve__Direction_B1543D714EFFD3809AC178BBC344BA49; // 0x04DC (size: 0x1)
    class UTimelineComponent* DragonDissolve;                                         // 0x04E0 (size: 0x8)
    FVector Reveal_EggLocation_BCE448014D8C66D670B7199EFBA7F398;                      // 0x04E8 (size: 0xC)
    float Reveal_EggScale_BCE448014D8C66D670B7199EFBA7F398;                           // 0x04F4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Reveal__Direction_BCE448014D8C66D670B7199EFBA7F398; // 0x04F8 (size: 0x1)
    class UTimelineComponent* Reveal;                                                 // 0x0500 (size: 0x8)
    TArray<class USceneComponent*> CharacterMeshes;                                   // 0x0508 (size: 0x10)
    bool Revealed;                                                                    // 0x0518 (size: 0x1)
    bool animation_doStatic?;                                                         // 0x0519 (size: 0x1)

    void UserConstructionScript();
    void Reveal__FinishedFunc();
    void Reveal__UpdateFunc();
    void DragonDissolve__FinishedFunc();
    void DragonDissolve__UpdateFunc();
    void OnVFXSetState(FName State);
    void ExecuteUbergraph_BP_Egg(int32 EntryPoint);
}; // Size: 0x51A

#endif
