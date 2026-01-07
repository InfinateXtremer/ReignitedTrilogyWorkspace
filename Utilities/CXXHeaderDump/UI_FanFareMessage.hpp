#ifndef UE4SS_SDK_UI_FanFareMessage_HPP
#define UE4SS_SDK_UI_FanFareMessage_HPP

class UUI_FanFareMessage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* NormalPosition;                                           // 0x0210 (size: 0x8)
    class UWidgetAnimation* FlightPosition;                                           // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0228 (size: 0x8)
    class UOverlay* 1UpOverlay;                                                       // 0x0230 (size: 0x8)
    class UTextBlock* Base;                                                           // 0x0238 (size: 0x8)
    class UImage* BlackBackground;                                                    // 0x0240 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0248 (size: 0x8)
    class UImage* clouds;                                                             // 0x0250 (size: 0x8)
    class UOverlay* DragonsOverlay;                                                   // 0x0258 (size: 0x8)
    class UOverlay* EggOverlay;                                                       // 0x0260 (size: 0x8)
    class UOverlay* EggsOverlay;                                                      // 0x0268 (size: 0x8)
    class UImage* GemAnimationRV;                                                     // 0x0270 (size: 0x8)
    class UOverlay* GemsOverlay;                                                      // 0x0278 (size: 0x8)
    class UImage* gloweffect;                                                         // 0x0280 (size: 0x8)
    class UImage* glowintro;                                                          // 0x0288 (size: 0x8)
    class UOverlay* GreenOrbOverlay;                                                  // 0x0290 (size: 0x8)
    class UImage* greenorboverlayimage1;                                              // 0x0298 (size: 0x8)
    class UImage* greenorboverlayimage2;                                              // 0x02A0 (size: 0x8)
    class UOverlay* GreenOrbsOverlay;                                                 // 0x02A8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_11;                                                           // 0x02C8 (size: 0x8)
    class UImage* Image_13;                                                           // 0x02D0 (size: 0x8)
    class UImage* Image_14;                                                           // 0x02D8 (size: 0x8)
    class UImage* Image_15;                                                           // 0x02E0 (size: 0x8)
    class UImage* Image_16;                                                           // 0x02E8 (size: 0x8)
    class UImage* Image_21;                                                           // 0x02F0 (size: 0x8)
    class UImage* Image_22;                                                           // 0x02F8 (size: 0x8)
    class UImage* Image_62;                                                           // 0x0300 (size: 0x8)
    class UImage* Image_63;                                                           // 0x0308 (size: 0x8)
    class UOverlay* Overlay_6;                                                        // 0x0310 (size: 0x8)
    class UOverlay* PowerGateOverlay;                                                 // 0x0318 (size: 0x8)
    class UImage* Pulse;                                                              // 0x0320 (size: 0x8)
    class UTextBlock* Shadow;                                                         // 0x0328 (size: 0x8)
    class UImage* Sparkle;                                                            // 0x0330 (size: 0x8)
    class UOverlay* StatueOverlay;                                                    // 0x0338 (size: 0x8)
    class UOverlay* TalismanOverlay;                                                  // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0348 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x0358 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x0360 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x0368 (size: 0x8)
    class UTextBlock* TextBlock_5;                                                    // 0x0370 (size: 0x8)
    class UTextBlock* TextBlock_6;                                                    // 0x0378 (size: 0x8)
    class UTextBlock* TextBlock_7;                                                    // 0x0380 (size: 0x8)
    class UTextBlock* TextBlock_8;                                                    // 0x0388 (size: 0x8)
    class UTextBlock* TextBlock_9;                                                    // 0x0390 (size: 0x8)
    class UTextBlock* TextBlock_10;                                                   // 0x0398 (size: 0x8)
    class UTextBlock* TextBlock_11;                                                   // 0x03A0 (size: 0x8)
    class UTextBlock* TextBlock_12;                                                   // 0x03A8 (size: 0x8)
    class UTextBlock* TextBlock_13;                                                   // 0x03B0 (size: 0x8)
    class UOverlay* TextOverlay;                                                      // 0x03B8 (size: 0x8)
    class UImage* toplayer;                                                           // 0x03C0 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x03C8 (size: 0x8)
    bool Active;                                                                      // 0x03D0 (size: 0x1)
    TArray<FString> message types;                                                    // 0x03D8 (size: 0x10)
    TArray<FString> pending messages;                                                 // 0x03E8 (size: 0x10)
    TArray<FString> pending immediate messages;                                       // 0x03F8 (size: 0x10)
    int32 State;                                                                      // 0x0408 (size: 0x4)
    FText message text;                                                               // 0x0410 (size: 0x18)
    FText Dragon Message;                                                             // 0x0428 (size: 0x18)
    FText Boss Message;                                                               // 0x0440 (size: 0x18)
    FText All Items Message;                                                          // 0x0458 (size: 0x18)
    FText Skill Point Message;                                                        // 0x0470 (size: 0x18)
    FText All Gems Message;                                                           // 0x0488 (size: 0x18)
    FText Gate Ready Message;                                                         // 0x04A0 (size: 0x18)
    FText All Dragons Message;                                                        // 0x04B8 (size: 0x18)
    FText All Eggs Message;                                                           // 0x04D0 (size: 0x18)
    FText 1UP Message;                                                                // 0x04E8 (size: 0x18)
    FText All Green Orbs Message;                                                     // 0x0500 (size: 0x18)
    TMap<class EFanfareType, class FString> fanfare map;                              // 0x0518 (size: 0x50)
    FText dragon name table ref;                                                      // 0x0568 (size: 0x18)
    FText boss name table ref;                                                        // 0x0580 (size: 0x18)
    FText Green Orb Collected Again Message;                                          // 0x0598 (size: 0x18)
    FText Talisman Collected Again Message;                                           // 0x05B0 (size: 0x18)
    FText S3 Egg Collected Again Message;                                             // 0x05C8 (size: 0x18)
    bool level in transition;                                                         // 0x05E0 (size: 0x1)
    bool bump position;                                                               // 0x05E1 (size: 0x1)
    FText art gallery unlocked;                                                       // 0x05E8 (size: 0x18)
    bool level complete shown;                                                        // 0x0600 (size: 0x1)

    void bump vertical position();
    void is a bottom middle widget visible?(bool& is vis);
    void debug print pending messages(FString Label, TArray<FString>& message list);
    void in flight level?(bool& Result);
    void spawn vfx(class UParticleSystem* Effect);
    void get message string from type(EFanfareType Type, FString& Message);
    void get message type tier(int32 message type, int32& tier);
    void Play Sound(int32 message type);
    void Show Overlay(class UWidget* Overlay);
    void Hide All Overlays();
    void parse message entry(TArray<FString>& message list, int32& Type, FString& Message, FString& Name);
    void prepare message(TArray<FString>& message list, int32& message type);
    void show next message(TArray<FString>& message list);
    void OnLoaded_87A21811445BF5C0340D9DB7DC0D0BAD(class UObject* Loaded);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void level load update(bool new level loaded);
    void Show Message(EFanfareType Type, FString optional name);
    void Destruct();
    void Construct();
    void ExecuteUbergraph_UI_FanFareMessage(int32 EntryPoint);
}; // Size: 0x601

#endif
