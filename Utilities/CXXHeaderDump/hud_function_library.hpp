#ifndef UE4SS_SDK_hud_function_library_HPP
#define UE4SS_SDK_hud_function_library_HPP

class Uhud_function_library_C : public UBlueprintFunctionLibrary
{

    void SetGameScrollboxBarStyle(class UScrollBox* ScrollBox, class UObject* __WorldContext);
    void Set game image material(class UImage* game image, class UObject* texture object ref, class UObject* __WorldContext);
    void Get game image texture(class UImage* game image, class UObject* __WorldContext, TSoftObjectPtr<UTexture>& out texture soft ref);
    void set number digits(int32 Count, TArray<class UUI_HUD_Numbers_C*>& Numbers, bool play anim, class UObject* __WorldContext);
    void set color scheme(int32 game index, class UObject* __WorldContext);
    void set material texture for game(class UMaterialInstanceDynamic* Material, class UObject* __WorldContext);
}; // Size: 0x28

#endif
