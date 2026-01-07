#ifndef UE4SS_SDK_UI_SkyboxLevelButton_HPP
#define UE4SS_SDK_UI_SkyboxLevelButton_HPP

class UUI_SkyboxLevelButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button;                                                            // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0218 (size: 0x8)
    class ABP_Falcon_Sky_Sphere_C* Skybox;                                            // 0x0220 (size: 0x8)
    TSoftObjectPtr<UWorld> LevelToLoad;                                               // 0x0228 (size: 0x28)
    TArray<class AActor*> OriginalActors;                                             // 0x0250 (size: 0x10)
    TArray<class AActor*> NewlyLoadedActors;                                          // 0x0260 (size: 0x10)
    class ABP_Falcon_Sky_Sphere_C* ClosestSkybox;                                     // 0x0270 (size: 0x8)
    float ClosestDistance;                                                            // 0x0278 (size: 0x4)
    FVector ClosesstSkyboxLocation;                                                   // 0x027C (size: 0xC)
    class ULevelStreamingKismet* Loaded Level Instance;                               // 0x0288 (size: 0x8)
    FText DisplayName;                                                                // 0x0290 (size: 0x18)

    void BndEvt__Button_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
    void LoadedFunctions();
    void Construct();
    void ExecuteUbergraph_UI_SkyboxLevelButton(int32 EntryPoint);
}; // Size: 0x2A8

#endif
