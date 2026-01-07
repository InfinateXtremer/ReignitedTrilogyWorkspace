#ifndef UE4SS_SDK_BP_CPS3339_Sheila_HPP
#define UE4SS_SDK_BP_CPS3339_Sheila_HPP

class ABP_CPS3339_Sheila_C : public ABP_Base_Playable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0D30 (size: 0x8)
    class USP3_CharacterComponent* SP3_Character;                                     // 0x0D38 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0D40 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__SP3_Character_K2Node_ComponentBoundEvent_0_SP3CharEvtSigOnGemFind__DelegateSignature(bool Active);
    void BndEvt__SP3_Character_K2Node_ComponentBoundEvent_0_SP3CharEvtSigOnFreeLook__DelegateSignature(bool Active);
    void BndEvt__SP3_Character_K2Node_ComponentBoundEvent_1_SP3CharEvtSigOnFreeLook__DelegateSignature(bool Active);
    void BndEvt__SP3_Character_K2Node_ComponentBoundEvent_0_OnVFXEventSignature__DelegateSignature(FName evtName, const FTransform& xfm, FName param0, float param1);
    void ExecuteUbergraph_BP_CPS3339_Sheila(int32 EntryPoint);
}; // Size: 0xD48

#endif
