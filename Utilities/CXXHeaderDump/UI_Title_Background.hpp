#ifndef UE4SS_SDK_UI_Title_Background_HPP
#define UE4SS_SDK_UI_Title_Background_HPP

class UUI_Title_Background_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* blackbase;                                                          // 0x0210 (size: 0x8)
    class UImage* BottomColor;                                                        // 0x0218 (size: 0x8)
    class UImage* Corners;                                                            // 0x0220 (size: 0x8)
    class UImage* GlowEffect001;                                                      // 0x0228 (size: 0x8)
    class UImage* GlowEffect002;                                                      // 0x0230 (size: 0x8)
    class UImage* GlowEffect003;                                                      // 0x0238 (size: 0x8)
    class UImage* RVBaseColor;                                                        // 0x0240 (size: 0x8)
    class UImage* SparklePattern001;                                                  // 0x0248 (size: 0x8)
    class UImage* Texture;                                                            // 0x0250 (size: 0x8)
    class UImage* TopColor;                                                           // 0x0258 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_UI_Title_Background(int32 EntryPoint);
}; // Size: 0x260

#endif
