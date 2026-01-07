#ifndef UE4SS_SDK_UI_Flight_LapsPlace_HPP
#define UE4SS_SDK_UI_Flight_LapsPlace_HPP

class UUI_Flight_LapsPlace_C : public UFlightRaceWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* LapChange;                                                // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class USpacer* NumberSpacer;                                                      // 0x0228 (size: 0x8)
    class UTextBlock* placesuffix;                                                    // 0x0230 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0238 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0240 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x0248 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers;                                          // 0x0250 (size: 0x8)
    FString place suffix;                                                             // 0x0258 (size: 0x10)
    FString lap;                                                                      // 0x0268 (size: 0x10)

    void set place(int32 Number);
    void Show();
    void SetPlace(int32 place);
    void SetLap(int32 Count, int32 Total);
    void Hide();
    void Close();
    void BP Set Lap(int32 Count, int32 Total);
    void BP Set Place(int32 place);
    void BP Show();
    void outr anim done();
    void BP Hide Widget(bool Remove);
    void Construct();
    void ExecuteUbergraph_UI_Flight_LapsPlace(int32 EntryPoint);
}; // Size: 0x278

#endif
