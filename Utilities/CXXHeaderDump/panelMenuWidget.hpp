#ifndef UE4SS_SDK_panelMenuWidget_HPP
#define UE4SS_SDK_panelMenuWidget_HPP

class UpanelMenuWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UCanvasPanel* canvas_panel;                                                 // 0x0210 (size: 0x8)
    class UScrollBox* panelS;                                                         // 0x0218 (size: 0x8)
    FpanelMenuData panel data;                                                        // 0x0220 (size: 0x60)

    void create handler(FpanelMenuDef& menu def, class UObject*& handler);
    void Destruct();
    void panel widget configure(FpanelMenuDef menu def, class UObject* Owner, FVector2D Offset);
    void panel widget close(bool Exit);
    void ExecuteUbergraph_panelMenuWidget(int32 EntryPoint);
}; // Size: 0x280

#endif
