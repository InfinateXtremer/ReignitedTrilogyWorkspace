#ifndef UE4SS_SDK_buttonWidgetInterface_HPP
#define UE4SS_SDK_buttonWidgetInterface_HPP

class IbuttonWidgetInterface_C : public IInterface
{

    void button widget get data(FpanelButtonData& button data);
    void button widget update label(FString Label);
    void button widget configure(class UObject* Owner, FpanelButtonDef button def);
}; // Size: 0x28

#endif
