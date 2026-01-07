#ifndef UE4SS_SDK_panelMenuHandlerBase_HPP
#define UE4SS_SDK_panelMenuHandlerBase_HPP

class ApanelMenuHandlerBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    FpanelMenuData panel data;                                                        // 0x0328 (size: 0x60)
    bool debug print;                                                                 // 0x0388 (size: 0x1)

    void get input key for label(FString Label, FKey& Key, bool& found);
    void try select button(FKeyEvent key event, bool& matched button);
    void is close all input(FKeyEvent key event, bool start down, bool select down, bool& Result);
    void create child sub panel(FpanelButtonData button data, int32& Result);
    void handle navigation(bool Forward, int32& Result);
    void invoke button action(FpanelButtonData button data, int32& Result);
    void create panel buttons(bool& Success);
    void UserConstructionScript();
    void ReceiveDestroyed();
    void panel handle close(int32 close all, class UUserWidget* panel widget);
    void panel handle key up(FpanelButtonData button data, FKeyEvent key event);
    void panel handle mouse down(FpanelButtonData button data, FPointerEvent mouse event);
    void panel handle button focused(FpanelButtonData button data);
    void panel handler configure(FpanelMenuData panel data);
    void panel handle key down(FpanelButtonData button data, FKeyEvent key event);
    void ExecuteUbergraph_panelMenuHandlerBase(int32 EntryPoint);
}; // Size: 0x389

#endif
