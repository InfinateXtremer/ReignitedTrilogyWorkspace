#ifndef UE4SS_SDK_UI_InventoryLevelList_HPP
#define UE4SS_SDK_UI_InventoryLevelList_HPP

class UUI_InventoryLevelList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0220 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0228 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0230 (size: 0x8)
    class UObject* Controller;                                                        // 0x0238 (size: 0x8)
    FString world name;                                                               // 0x0240 (size: 0x10)
    TArray<class UUserWidget*> buttons;                                               // 0x0250 (size: 0x10)
    FString the current level path;                                                   // 0x0260 (size: 0x10)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void get default selected index(int32& selected );
    void set level path(FString level path, FString& selected level path);
    void create level button(FText levelf path, class UUI_InventoryLevelList_Component_C*& button widget);
    void configure buttons();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void get adjacent widget index(bool prev, class UUserWidget* Widget, int32& Index);
    void focus button(int32 Index);
    void Construct();
    void UI panel set controller(class UObject* panel controller);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void UI panel close(bool immediate);
    void set world(FString world name);
    void ExecuteUbergraph_UI_InventoryLevelList(int32 EntryPoint);
}; // Size: 0x270

#endif
