#ifndef UE4SS_SDK_HudInterface_HPP
#define UE4SS_SDK_HudInterface_HPP

class IHudInterface_C : public IInterface
{

    void Show HUD Inventory(bool Show);
    void ShowGraphicsOptions();
    void ShowKeyboardControls();
    void ShowSystemOptions();
    void Reset Hud Widgets();
    void Add Hud Widget(class UUserWidget* Widget, int32 ZOrder);
    void Level Load Complete();
    void Level Unload Started();
    void Show Credits(bool return to title);
    void Show Letter Box(bool Show);
    void Show Download Message(bool Show);
    void Show Title Menu();
    void ShowInventoryMenu(bool Show);
    void Show Level Transition Screen(TEnumAsByte<ELevelTransitionType::Type> transition, bool show screen, float fade in time, float fade out time);
    void Show Select Save Menu();
    void Show Main Menu(bool from title);
    void show level inventory(bool Show, bool autohide);
    void GetHudVisibility(bool& visible);
    void ShowDebugMenu(bool Show);
    void ShowPauseMenu(bool Show);
    void SetHudVisibility(bool Show);
}; // Size: 0x28

#endif
