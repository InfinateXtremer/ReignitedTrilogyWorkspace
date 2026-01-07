#ifndef UE4SS_SDK_UI_Skins_HPP
#define UE4SS_SDK_UI_Skins_HPP

class UUI_Skins_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro_0;                                                  // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0228 (size: 0x8)
    class UUI_MenuHeader_C* UI_MenuHeader;                                            // 0x0230 (size: 0x8)
    class UObject* Controller;                                                        // 0x0238 (size: 0x8)
    TArray<class UUserWidget*> widget array;                                          // 0x0240 (size: 0x10)
    bool do debug print;                                                              // 0x0250 (size: 0x1)
    float selected index;                                                             // 0x0254 (size: 0x4)
    FString menu key;                                                                 // 0x0258 (size: 0x10)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void load toggle setting(FString setting, bool& default is selected);
    void save toggle setting(FString setting, bool Default Option);
    void focus this widget(class UUserWidget* Widget);
    void set focus widget(class UWidget* self2, class UUserWidget*& ItemToFind, bool NewParam);
    void get adjacent widget(class UUserWidget* Widget, TArray<class UUserWidget*>& widget array, bool prev, class UUserWidget*& adj widget);
    void handle activate(class UUserWidget* Widget);
    void is key in set(FKey Key, TArray<FKey>& key set, bool& Result);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void Construct();
    void ExecuteUbergraph_UI_Skins(int32 EntryPoint);
}; // Size: 0x268

#endif
