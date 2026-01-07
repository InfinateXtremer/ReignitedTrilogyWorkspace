#ifndef UE4SS_SDK_UI_Sound_HPP
#define UE4SS_SDK_UI_Sound_HPP

class UUI_Sound_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UUI_SoundBar_C* 001Music;                                                   // 0x0228 (size: 0x8)
    class UUI_SoundBar_C* 002Effects;                                                 // 0x0230 (size: 0x8)
    class UUI_SoundBar_C* 003Voice;                                                   // 0x0238 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0240 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0248 (size: 0x8)
    class UUI_MenuHeader_C* UI_MenuHeader;                                            // 0x0250 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0258 (size: 0x8)
    class UObject* Controller;                                                        // 0x0260 (size: 0x8)
    bool do debug print;                                                              // 0x0268 (size: 0x1)
    FString menu key;                                                                 // 0x0270 (size: 0x10)
    TArray<class UUserWidget*> widget set;                                            // 0x0280 (size: 0x10)
    bool closing;                                                                     // 0x0290 (size: 0x1)
    bool changed setting;                                                             // 0x0291 (size: 0x1)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void SetMenuKeyData(class UUserWidget* Focused Widget);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void enable focus anims();
    void Select Default Button();
    void do close();
    void do save();
    void set focus widget(class UUserWidget* Widget);
    void handle activate(class UUserWidget* Widget);
    void get adjacent widget(bool prev, class UUserWidget* Widget, TArray<class UUserWidget*>& widget set, class UUserWidget*& adj widget);
    void Construct();
    void UI panel set controller(class UObject* panel controller);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void UI panel close(bool immediate);
    void ExecuteUbergraph_UI_Sound(int32 EntryPoint);
}; // Size: 0x292

#endif
