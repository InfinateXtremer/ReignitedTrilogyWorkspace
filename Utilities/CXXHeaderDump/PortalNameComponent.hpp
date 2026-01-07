#ifndef UE4SS_SDK_PortalNameComponent_HPP
#define UE4SS_SDK_PortalNameComponent_HPP

class UPortalNameComponent_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    FText display text;                                                               // 0x02A8 (size: 0x18)
    class USplineComponent* spline component ref;                                     // 0x02C0 (size: 0x8)
    TArray<class AActor*> Characters;                                                 // 0x02C8 (size: 0x10)
    class UDataTable* char mesh table;                                                // 0x02D8 (size: 0x8)
    float Scale;                                                                      // 0x02E0 (size: 0x4)
    float display scale;                                                              // 0x02E4 (size: 0x4)
    float default char width;                                                         // 0x02E8 (size: 0x4)
    float rotation frequency min;                                                     // 0x02EC (size: 0x4)
    float char rotation duration;                                                     // 0x02F0 (size: 0x4)
    float char rotation delay;                                                        // 0x02F4 (size: 0x4)
    float rotation frequency max;                                                     // 0x02F8 (size: 0x4)
    float time since last rotation;                                                   // 0x02FC (size: 0x4)
    float next rotation;                                                              // 0x0300 (size: 0x4)
    bool chars start hidden;                                                          // 0x0304 (size: 0x1)
    bool autoshow;                                                                    // 0x0305 (size: 0x1)
    bool autorotate;                                                                  // 0x0306 (size: 0x1)
    class UDataTable* control char mesh table;                                        // 0x0308 (size: 0x8)
    class UDataTable* culture char mesh table;                                        // 0x0310 (size: 0x8)
    FText table ref text;                                                             // 0x0318 (size: 0x18)
    TArray<FString> localized string char array;                                      // 0x0330 (size: 0x10)
    FString localized string;                                                         // 0x0340 (size: 0x10)
    bool using widget;                                                                // 0x0350 (size: 0x1)
    class UUI_PortalNameWidget_C* portal name widget;                                 // 0x0358 (size: 0x8)
    bool do debug print;                                                              // 0x0360 (size: 0x1)
    bool AlignToParentActor;                                                          // 0x0361 (size: 0x1)
    bool IsInteractIcon;                                                              // 0x0362 (size: 0x1)
    bool TextIsShown;                                                                 // 0x0363 (size: 0x1)
    FText FooterInteract;                                                             // 0x0368 (size: 0x18)

    void on input source changed(EInputSource NewInputSource);
    void hide footer();
    void show footer();
    void on update image and footer();
    void is on PC and is interact icon(FString Token, bool& ReturnVal);
    void get string name for current input source(FString& InputSource);
    void set portal name widget string(FString display string, bool& using widget);
    void get portal name widget(class UUI_PortalNameWidget_C*& portal name widget);
    void get localized string from display text();
    void get char mesh(FString Token, F3DTextMeshTableRow& char mesh struct, bool& found);
    void initialize tables();
    void get char token(FString in char, FString in token, bool& token is complete, FString& Token);
    FString get char name(FString Char);
    void get text width(float& text width);
    void get char width(FString Char, float& Width);
    void make characters();
    void Hide Text();
    void show text();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void REMAKE text(FString new text, float Scale, float char width);
    void do rotation();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_PortalNameComponent(int32 EntryPoint);
}; // Size: 0x380

#endif
