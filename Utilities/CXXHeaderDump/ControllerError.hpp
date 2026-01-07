#ifndef UE4SS_SDK_ControllerError_HPP
#define UE4SS_SDK_ControllerError_HPP

class UControllerError_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UBorder* Background;                                                        // 0x0228 (size: 0x8)
    class UImage* Black;                                                              // 0x0230 (size: 0x8)
    class UTextBlock* Msg;                                                            // 0x0238 (size: 0x8)
    class UTextBlock* msgshadow;                                                      // 0x0240 (size: 0x8)
    class UUI_Background_001_C* UI_Background_001;                                    // 0x0248 (size: 0x8)
    class UObject* panel controller;                                                  // 0x0250 (size: 0x8)

    void set transition type(TEnumAsByte<ELevelTransitionType::Type> transition type, float fade in time, float fade out time);
    void hide transition screen(float fade time);
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_ControllerError(int32 EntryPoint);
}; // Size: 0x258

#endif
