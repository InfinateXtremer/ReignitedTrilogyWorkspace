#ifndef UE4SS_SDK_panelWidgetInterface_HPP
#define UE4SS_SDK_panelWidgetInterface_HPP

class IpanelWidgetInterface_C : public IInterface
{

    void panel widget close(bool Exit);
    void panel widget configure(FpanelMenuDef menu def, class UObject* Owner, FVector2D Offset);
}; // Size: 0x28

#endif
