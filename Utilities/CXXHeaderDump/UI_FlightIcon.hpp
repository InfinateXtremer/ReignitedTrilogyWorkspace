#ifndef UE4SS_SDK_UI_FlightIcon_HPP
#define UE4SS_SDK_UI_FlightIcon_HPP

class UUI_FlightIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* CollectedOneSet;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* ItemAcquired;                                             // 0x0218 (size: 0x8)
    class UImage* collected;                                                          // 0x0220 (size: 0x8)
    class UImage* Empty;                                                              // 0x0228 (size: 0x8)
    class UTextBlock* NumberCount;                                                    // 0x0230 (size: 0x8)
    class UOverlay* numbercountoverlay;                                               // 0x0238 (size: 0x8)
    class UTextBlock* NumberCountShadow;                                              // 0x0240 (size: 0x8)
    bool Show Number Count;                                                           // 0x0248 (size: 0x1)
    bool Show Icon;                                                                   // 0x0249 (size: 0x1)
    int32 Count;                                                                      // 0x024C (size: 0x4)
    EFlightLevelTargetType Type;                                                      // 0x0250 (size: 0x1)
    FLinearColor Icon Color Var;                                                      // 0x0254 (size: 0x10)
    float ting time;                                                                  // 0x0264 (size: 0x4)
    int32 ting count;                                                                 // 0x0268 (size: 0x4)
    float starting ting time;                                                         // 0x026C (size: 0x4)

    void Icon Visibility(bool Show, class UImage* Icon);
    void Initialize Visibility(bool Show, class UTextBlock* Number Count, class UTextBlock* Shadow);
    FLinearColor Icon Color();
    void Construct();
    void collect item();
    void set type(EFlightLevelTargetType Type);
    void set empty(bool Empty);
    void show competely collected(EFlightLevelTargetType Type);
    void set icon by name(FString icon name);
    void ExecuteUbergraph_UI_FlightIcon(int32 EntryPoint);
}; // Size: 0x270

#endif
