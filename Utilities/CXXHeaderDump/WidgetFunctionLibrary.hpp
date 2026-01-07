#ifndef UE4SS_SDK_WidgetFunctionLibrary_HPP
#define UE4SS_SDK_WidgetFunctionLibrary_HPP

class UWidgetFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void SaveGame(FString SlotName, class UObject* __WorldContext, class UBP_CinematicSave_C*& BP Cinematic Save);
    void GetSaveGame(FString SlotName, class UObject* __WorldContext, class UBP_CinematicSave_C*& BP Cinematic Save);
    void ToggleSelection(bool Selected?, class UButton* Button, class AActor* Actor, class UObject* __WorldContext);
    void Search(const FText& Search Parameter, bool Empty, const FText& Text, class UObject* __WorldContext, bool& found);
    void UpdateUIColors(class UObject* __WorldContext);
    void CheckForSelectedTag(class AActor* Actor, FString TagToFind, class UObject* __WorldContext, bool& Selected?);
}; // Size: 0x28

#endif
