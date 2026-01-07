#ifndef UE4SS_SDK_UI_Container_002_HPP
#define UE4SS_SDK_UI_Container_002_HPP

class UUI_Container_002_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* BottomTrim;                                                         // 0x0210 (size: 0x8)
    class UImage* CornerLB;                                                           // 0x0218 (size: 0x8)
    class UImage* CornerLT;                                                           // 0x0220 (size: 0x8)
    class UImage* CornerRB;                                                           // 0x0228 (size: 0x8)
    class UImage* CornerRT;                                                           // 0x0230 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0238 (size: 0x8)
    class UImage* TopTrim;                                                            // 0x0240 (size: 0x8)
    class UImage* Trim;                                                               // 0x0248 (size: 0x8)
    class UImage* TrimAdd;                                                            // 0x0250 (size: 0x8)
    bool Show Top Trim;                                                               // 0x0258 (size: 0x1)
    bool Show Bottom Trim;                                                            // 0x0259 (size: 0x1)
    bool Show Corners;                                                                // 0x025A (size: 0x1)
    bool Show Trim;                                                                   // 0x025B (size: 0x1)

    void Initialize Visibility(bool Show, class UWidget* Trim);
    void OnLoaded_79857B9E4578F42FB970BF946D73D8B4(class UObject* Loaded);
    void OnLoaded_B1F81AB44C169DCF55F3E589F693845D(class UObject* Loaded);
    void OnLoaded_5C1CEA8B444275685860419677D7BF53(class UObject* Loaded);
    void OnLoaded_C3A236D84E7334D667DD69974CCC6B80(class UObject* Loaded);
    void OnLoaded_56050F364C75696A3C4484BB047E1953(class UObject* Loaded);
    void OnLoaded_08CBB79F4F731D750B883EAD9269F26E(class UObject* Loaded);
    void OnLoaded_FB764BE2447FD9FE4B5FAEBE8BDBA7F3(class UObject* Loaded);
    void OnLoaded_B543F8504C36FABA816A088181F3450B(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_UI_Container_002(int32 EntryPoint);
}; // Size: 0x25C

#endif
