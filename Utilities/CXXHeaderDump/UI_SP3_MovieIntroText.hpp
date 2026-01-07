#ifndef UE4SS_SDK_UI_SP3_MovieIntroText_HPP
#define UE4SS_SDK_UI_SP3_MovieIntroText_HPP

class UUI_SP3_MovieIntroText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0220 (size: 0x8)
    class UImage* Image_56;                                                           // 0x0228 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x0230 (size: 0x8)
    class UTextBlock* TextShadow;                                                     // 0x0238 (size: 0x8)
    class UObject* panel controller;                                                  // 0x0240 (size: 0x8)
    bool showing footer;                                                              // 0x0248 (size: 0x1)
    float fade in time;                                                               // 0x024C (size: 0x4)
    float fade out time;                                                              // 0x0250 (size: 0x4)
    FText start label;                                                                // 0x0258 (size: 0x18)
    bool Active;                                                                      // 0x0270 (size: 0x1)
    bool Closed;                                                                      // 0x0271 (size: 0x1)

    FText Get_TextShadow_Text_0();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void do close();
    void handle close button();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void set transition type(TEnumAsByte<ELevelTransitionType::Type> transition type, float fade in time, float fade out time);
    void hide transition screen(float fade time);
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void ExecuteUbergraph_UI_SP3_MovieIntroText(int32 EntryPoint);
}; // Size: 0x272

#endif
