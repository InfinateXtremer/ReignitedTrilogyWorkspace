#ifndef UE4SS_SDK_panelMenufunctionLib_HPP
#define UE4SS_SDK_panelMenufunctionLib_HPP

class UpanelMenufunctionLib_C : public UBlueprintFunctionLibrary
{

    void is close all key(FKeyEvent key event, class UObject* __WorldContext, bool& close all);
    void is activate key(FKeyEvent key event, class UObject* __WorldContext, bool& Activate);
    void is nav key(FKeyEvent key event, class UObject* __WorldContext, bool& nav, bool& Forward);
    void is close key(FKeyEvent key event, class UObject* __WorldContext, bool& Result);
    void panel menu clamp scroll box height(class UScrollBox* scroll box, FVector2D screen pos, class UObject* __WorldContext);
    void panel menu create widget(TSubclassOf<class UUserWidget> widget class, TSubclassOf<class UUserWidget> default widget class, class APlayerController* owning player, class UObject* __WorldContext, class UUserWidget*& panel widget);
    void panel menu navigate(class UScrollBox*& scroll box, bool Forward, class UObject* __WorldContext, class UUserWidget*& focus widget);
    void panel menu get child pos(class UScrollBox*& scroll box, class UUserWidget*& button widget, FVector2D& child pos, class UObject* __WorldContext, FVector2D& Offset);
    void panel menu get focus index(class UScrollBox* scroll box, class UObject* __WorldContext, int32& Index);
    void panel menu focus child(class UScrollBox*& scroll box, int32 Index, class UObject* __WorldContext, class UUserWidget*& focus widget);
    void panel menu create child panel(FpanelMenuData& menu data, FpanelMenuDef menu def, TSubclassOf<class UUserWidget> widget class, class UObject* __WorldContext, bool& Success);
}; // Size: 0x28

#endif
