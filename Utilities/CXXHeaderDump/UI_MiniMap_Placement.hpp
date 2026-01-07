#ifndef UE4SS_SDK_UI_MiniMap_Placement_HPP
#define UE4SS_SDK_UI_MiniMap_Placement_HPP

class UUI_MiniMap_Placement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UUI_MiniMap_C* UI_MiniMap;                                                  // 0x0210 (size: 0x8)

    void mini map configure();
    void map hide();
    void map add talisman marker(class UObject* talisman obj ref);
    void map add green orb markers();
    void temp hide(bool On);
    void ExecuteUbergraph_UI_MiniMap_Placement(int32 EntryPoint);
}; // Size: 0x218

#endif
