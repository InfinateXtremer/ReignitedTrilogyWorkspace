#ifndef UE4SS_SDK_ui_button_interface_HPP
#define UE4SS_SDK_ui_button_interface_HPP

class Iui_button_interface_C : public IInterface
{

    void enable focus anims();
    void ui button get data(FText& Text);
    void ui button set disabled(bool Disabled);
    void ui button set controller(class UObject* Controller);
    void ui button set text(FText Text);
}; // Size: 0x28

#endif
