#ifndef UE4SS_SDK_UI_InventoryLevelCollection_HPP
#define UE4SS_SDK_UI_InventoryLevelCollection_HPP

class UUI_InventoryLevelCollection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Update;                                                   // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UBorder* BorderTalisman;                                                    // 0x0228 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0230 (size: 0x8)
    class UImage* Image_47;                                                           // 0x0238 (size: 0x8)
    class UVerticalBox* theBestTimeVerticalBox;                                       // 0x0240 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0248 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0250 (size: 0x8)
    class UUI_Inventory_Gem_C* UI_Inventory_Gem;                                      // 0x0258 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0260 (size: 0x8)
    class UTextBlock* YOURTIMENumber;                                                 // 0x0268 (size: 0x8)
    class UTextBlock* YOURTIMENumberShadow;                                           // 0x0270 (size: 0x8)
    class UObject* Controller;                                                        // 0x0278 (size: 0x8)
    FString level name;                                                               // 0x0280 (size: 0x10)
    int32 total buttons;                                                              // 0x0290 (size: 0x4)
    int32 buttons created;                                                            // 0x0294 (size: 0x4)
    TArray<FPhasmidGameSaveObjectData> level save data objects;                       // 0x0298 (size: 0x10)
    bool its a flight level;                                                          // 0x02A8 (size: 0x1)
    FText dragon name table ref;                                                      // 0x02B0 (size: 0x18)
    FText talisman name table ref;                                                    // 0x02C8 (size: 0x18)
    FText green orb table ref;                                                        // 0x02E0 (size: 0x18)

    void get collected s3eggs(TArray<FString>& names);
    void make egg entries for s3(TArray<FString>& collected names);
    void get talisman name from level name(FString& talisman name);
    void add best time();
    void Get is Flight Level(bool& is flight level);
    FLinearColor Shadow Color();
    void add items(EInventoryType item type, TSubclassOf<class UUserWidget> widget class);
    void get talisman status(bool& was collected, FString& Label);
    void get collected string(FPhasmidGameSaveObjectData object save data, EInventoryType item type, FString& display name, bool& collected);
    void Construct();
    void UI panel close(bool immediate);
    void UI panel set controller(class UObject* panel controller);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void set level name(FString level name);
    void Destruct();
    void ExecuteUbergraph_UI_InventoryLevelCollection(int32 EntryPoint);
}; // Size: 0x2F8

#endif
