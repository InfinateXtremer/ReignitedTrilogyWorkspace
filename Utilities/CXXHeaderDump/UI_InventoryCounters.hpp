#ifndef UE4SS_SDK_UI_InventoryCounters_HPP
#define UE4SS_SDK_UI_InventoryCounters_HPP

class UUI_InventoryCounters_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UCanvasPanel* canvaspanelcontainer;                                         // 0x0218 (size: 0x8)
    bool Active;                                                                      // 0x0220 (size: 0x1)
    FFalconScreenConfigData the config data;                                          // 0x0228 (size: 0x18)
    float show time;                                                                  // 0x0240 (size: 0x4)
    bool showing;                                                                     // 0x0244 (size: 0x1)
    float show duration;                                                              // 0x0248 (size: 0x4)
    bool do debug print;                                                              // 0x024C (size: 0x1)
    bool autohide;                                                                    // 0x024D (size: 0x1)
    bool autohide cancelled;                                                          // 0x024E (size: 0x1)
    bool NewVar_0;                                                                    // 0x024F (size: 0x1)

    void ResizeAndCenterSlot(class UCanvasPanelSlot* CanvasSlot);
    void ResizeChildren();
    void show widgets(bool Show);
    void create widgets();
    class UUserWidget* FindScreen(UClass* inScreenClass);
    void Add Child(class UUserWidget* Widget, int32 ZOrder);
    void Construct();
    void ShowScreen();
    void HideScreen(bool immediate);
    void ConfigureScreen(const FFalconScreenConfigData& configData);
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_InventoryCounters(int32 EntryPoint);
}; // Size: 0x250

#endif
