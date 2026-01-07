#ifndef UE4SS_SDK_BP_Base_Character_HPP
#define UE4SS_SDK_BP_Base_Character_HPP

class ABP_Base_Character_C : public APhasmidCharacter
{
    class UTfbAkComponent* AkAudioComponent;                                          // 0x0820 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0828 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x830

#endif
