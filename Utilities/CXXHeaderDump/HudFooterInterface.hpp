#ifndef UE4SS_SDK_HudFooterInterface_HPP
#define UE4SS_SDK_HudFooterInterface_HPP

class IHudFooterInterface_C : public IInterface
{

    void Hud Footer - Remove All();
    void Hud Footer - Remove Entry(TEnumAsByte<EMenuControls::Type> Control);
    void Hud Footer - Add Entry(TEnumAsByte<EMenuControls::Type> Control, FString Label);
    void Hud Footer - Get Footer(class UObject*& hud footer);
    void Hud Footer - Hide();
    void Hud Footer - Show(class UObject*& hud footer);
}; // Size: 0x28

#endif
