#ifndef UE4SS_SDK_ui_button_controller_interface_HPP
#define UE4SS_SDK_ui_button_controller_interface_HPP

class Iui_button_controller_interface_C : public IInterface
{

    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
}; // Size: 0x28

#endif
