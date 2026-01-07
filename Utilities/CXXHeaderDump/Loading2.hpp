#ifndef UE4SS_SDK_Loading2_HPP
#define UE4SS_SDK_Loading2_HPP

class ULoading2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UBorder* Background;                                                        // 0x0220 (size: 0x8)
    class UImage* Black;                                                              // 0x0228 (size: 0x8)
    class UTextBlock* traveltext;                                                     // 0x0230 (size: 0x8)
    class UTextBlock* traveltextshadow;                                               // 0x0238 (size: 0x8)
    class UObject* panel controller;                                                  // 0x0240 (size: 0x8)
    TEnumAsByte<ELevelTransitionType::Type> transition type;                          // 0x0248 (size: 0x1)
    float fade in time;                                                               // 0x024C (size: 0x4)
    float fade out time;                                                              // 0x0250 (size: 0x4)
    FString display string;                                                           // 0x0258 (size: 0x10)
    TMap<TEnumAsByte<ELevelTransitionType::Type>, FText> string map;                  // 0x0268 (size: 0x50)

    FLinearColor Shadow Color();
    void UI panel close(bool immediate);
    void outro finished();
    void Destruct();
    void UI panel set controller(class UObject* panel controller);
    void Construct();
    void set transition type(TEnumAsByte<ELevelTransitionType::Type> transition type, float fade in time, float fade out time);
    void hide transition screen(float fade time);
    void ExecuteUbergraph_Loading2(int32 EntryPoint);
}; // Size: 0x2B8

#endif
