#ifndef UE4SS_SDK_UI_Background_000_HPP
#define UE4SS_SDK_UI_Background_000_HPP

class UUI_Background_000_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UImage* BackgroundImageL;                                                   // 0x0220 (size: 0x8)
    class UImage* BackgroundImageR;                                                   // 0x0228 (size: 0x8)
    class UImage* BlackBarBottom;                                                     // 0x0230 (size: 0x8)
    class UImage* BlackBarTop;                                                        // 0x0238 (size: 0x8)
    class UImage* BottomColor;                                                        // 0x0240 (size: 0x8)
    class UImage* Corners;                                                            // 0x0248 (size: 0x8)
    class UImage* GlowEffect001;                                                      // 0x0250 (size: 0x8)
    class UImage* GlowEffect002;                                                      // 0x0258 (size: 0x8)
    class UImage* GlowEffect003;                                                      // 0x0260 (size: 0x8)
    class UImage* OutlineEffectL;                                                     // 0x0268 (size: 0x8)
    class UImage* OutlineEffectR;                                                     // 0x0270 (size: 0x8)
    class UImage* RVBaseColor;                                                        // 0x0278 (size: 0x8)
    class UImage* SparklePattern001;                                                  // 0x0280 (size: 0x8)
    class UImage* Texture;                                                            // 0x0288 (size: 0x8)
    class UImage* TopColor;                                                           // 0x0290 (size: 0x8)

    void OnLoaded_69279A21433611C4A1569FAA96F8C9AD(class UObject* Loaded);
    void OnLoaded_EF45361A4484556D79816AB91CAEBF2F(class UObject* Loaded);
    void OnLoaded_01B29D3D42B63B89EE7082967B114B7C(class UObject* Loaded);
    void OnLoaded_592F99954EA529DE2D0CA48C7683630C(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_UI_Background_000(int32 EntryPoint);
}; // Size: 0x298

#endif
