#ifndef UE4SS_SDK_panelHandlerInterface_HPP
#define UE4SS_SDK_panelHandlerInterface_HPP

class IpanelHandlerInterface_C : public IInterface
{

    void panel handle close(int32 close all, class UUserWidget* panel widget);
    void panel handle button focused(FpanelButtonData button data);
    void panel handle mouse down(FpanelButtonData button data, FPointerEvent mouse event);
    void panel handle key down(FpanelButtonData button data, FKeyEvent key event);
    void panel handle key up(FpanelButtonData button data, FKeyEvent key event);
    void panel handler configure(FpanelMenuData panel data);
}; // Size: 0x28

#endif
