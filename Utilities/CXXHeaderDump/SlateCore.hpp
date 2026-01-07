#ifndef UE4SS_SDK_SlateCore_HPP
#define UE4SS_SDK_SlateCore_HPP

#include "SlateCore_enums.hpp"

struct FAnalogInputEvent : public FKeyEvent
{
}; // Size: 0x48

struct FButtonStyle : public FSlateWidgetStyle
{
    FSlateBrush Normal;                                                               // 0x0008 (size: 0x78)
    FSlateBrush Hovered;                                                              // 0x0080 (size: 0x78)
    FSlateBrush Pressed;                                                              // 0x00F8 (size: 0x78)
    FSlateBrush Disabled;                                                             // 0x0170 (size: 0x78)
    FMargin NormalPadding;                                                            // 0x01E8 (size: 0x10)
    FMargin PressedPadding;                                                           // 0x01F8 (size: 0x10)
    FSlateSound PressedSlateSound;                                                    // 0x0208 (size: 0x18)
    FSlateSound HoveredSlateSound;                                                    // 0x0220 (size: 0x18)

}; // Size: 0x238

struct FCharacterEvent : public FInputEvent
{
}; // Size: 0x28

struct FCheckBoxStyle : public FSlateWidgetStyle
{
    TEnumAsByte<ESlateCheckBoxType::Type> CheckBoxType;                               // 0x0008 (size: 0x1)
    FSlateBrush UncheckedImage;                                                       // 0x0010 (size: 0x78)
    FSlateBrush UncheckedHoveredImage;                                                // 0x0088 (size: 0x78)
    FSlateBrush UncheckedPressedImage;                                                // 0x0100 (size: 0x78)
    FSlateBrush CheckedImage;                                                         // 0x0178 (size: 0x78)
    FSlateBrush CheckedHoveredImage;                                                  // 0x01F0 (size: 0x78)
    FSlateBrush CheckedPressedImage;                                                  // 0x0268 (size: 0x78)
    FSlateBrush UndeterminedImage;                                                    // 0x02E0 (size: 0x78)
    FSlateBrush UndeterminedHoveredImage;                                             // 0x0358 (size: 0x78)
    FSlateBrush UndeterminedPressedImage;                                             // 0x03D0 (size: 0x78)
    FMargin Padding;                                                                  // 0x0448 (size: 0x10)
    FSlateColor ForegroundColor;                                                      // 0x0458 (size: 0x28)
    FSlateColor BorderBackgroundColor;                                                // 0x0480 (size: 0x28)
    FSlateSound CheckedSlateSound;                                                    // 0x04A8 (size: 0x18)
    FSlateSound UncheckedSlateSound;                                                  // 0x04C0 (size: 0x18)
    FSlateSound HoveredSlateSound;                                                    // 0x04D8 (size: 0x18)

}; // Size: 0x4F0

struct FComboBoxStyle : public FSlateWidgetStyle
{
    FComboButtonStyle ComboButtonStyle;                                               // 0x0008 (size: 0x340)
    FSlateSound PressedSlateSound;                                                    // 0x0348 (size: 0x18)
    FSlateSound SelectionChangeSlateSound;                                            // 0x0360 (size: 0x18)

}; // Size: 0x378

struct FComboButtonStyle : public FSlateWidgetStyle
{
    FButtonStyle ButtonStyle;                                                         // 0x0008 (size: 0x238)
    FSlateBrush DownArrowImage;                                                       // 0x0240 (size: 0x78)
    FSlateBrush MenuBorderBrush;                                                      // 0x02B8 (size: 0x78)
    FMargin MenuBorderPadding;                                                        // 0x0330 (size: 0x10)

}; // Size: 0x340

struct FCompositeFallbackFont
{
    FTypeface Typeface;                                                               // 0x0000 (size: 0x10)
    float ScalingFactor;                                                              // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FCompositeFont
{
    FTypeface DefaultTypeface;                                                        // 0x0000 (size: 0x10)
    FCompositeFallbackFont FallbackTypeface;                                          // 0x0010 (size: 0x18)
    TArray<FCompositeSubFont> SubTypefaces;                                           // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FCompositeSubFont : public FCompositeFallbackFont
{
    TArray<FInt32Range> CharacterRanges;                                              // 0x0018 (size: 0x10)
    FString Cultures;                                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FDockTabStyle : public FSlateWidgetStyle
{
    FButtonStyle CloseButtonStyle;                                                    // 0x0008 (size: 0x238)
    FSlateBrush NormalBrush;                                                          // 0x0240 (size: 0x78)
    FSlateBrush ActiveBrush;                                                          // 0x02B8 (size: 0x78)
    FSlateBrush ColorOverlayTabBrush;                                                 // 0x0330 (size: 0x78)
    FSlateBrush ColorOverlayIconBrush;                                                // 0x03A8 (size: 0x78)
    FSlateBrush ForegroundBrush;                                                      // 0x0420 (size: 0x78)
    FSlateBrush HoveredBrush;                                                         // 0x0498 (size: 0x78)
    FSlateBrush ContentAreaBrush;                                                     // 0x0510 (size: 0x78)
    FSlateBrush TabWellBrush;                                                         // 0x0588 (size: 0x78)
    FMargin TabPadding;                                                               // 0x0600 (size: 0x10)
    float OverlapWidth;                                                               // 0x0610 (size: 0x4)
    FSlateColor FlashColor;                                                           // 0x0618 (size: 0x28)

}; // Size: 0x640

struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImageNormal;                                                // 0x0008 (size: 0x78)
    FSlateBrush BackgroundImageHovered;                                               // 0x0080 (size: 0x78)
    FSlateBrush BackgroundImageFocused;                                               // 0x00F8 (size: 0x78)
    FSlateBrush BackgroundImageReadOnly;                                              // 0x0170 (size: 0x78)
    FMargin Padding;                                                                  // 0x01E8 (size: 0x10)
    FSlateFontInfo Font;                                                              // 0x01F8 (size: 0x58)
    FSlateColor ForegroundColor;                                                      // 0x0250 (size: 0x28)
    FSlateColor BackgroundColor;                                                      // 0x0278 (size: 0x28)
    FSlateColor ReadOnlyForegroundColor;                                              // 0x02A0 (size: 0x28)
    FMargin HScrollBarPadding;                                                        // 0x02C8 (size: 0x10)
    FMargin VScrollBarPadding;                                                        // 0x02D8 (size: 0x10)
    FScrollBarStyle ScrollBarStyle;                                                   // 0x02E8 (size: 0x440)

}; // Size: 0x728

struct FEditableTextStyle : public FSlateWidgetStyle
{
    FSlateFontInfo Font;                                                              // 0x0008 (size: 0x58)
    FSlateColor ColorAndOpacity;                                                      // 0x0060 (size: 0x28)
    FSlateBrush BackgroundImageSelected;                                              // 0x0088 (size: 0x78)
    FSlateBrush BackgroundImageComposing;                                             // 0x0100 (size: 0x78)
    FSlateBrush CaretImage;                                                           // 0x0178 (size: 0x78)

}; // Size: 0x1F0

struct FExpandableAreaStyle : public FSlateWidgetStyle
{
    FSlateBrush CollapsedImage;                                                       // 0x0008 (size: 0x78)
    FSlateBrush ExpandedImage;                                                        // 0x0080 (size: 0x78)
    float RolloutAnimationSeconds;                                                    // 0x00F8 (size: 0x4)

}; // Size: 0x100

struct FFocusEvent
{
}; // Size: 0x8

struct FFontData
{
    FString FontFilename;                                                             // 0x0000 (size: 0x10)
    EFontHinting Hinting;                                                             // 0x0010 (size: 0x1)
    EFontLoadingPolicy LoadingPolicy;                                                 // 0x0011 (size: 0x1)
    class UObject* FontFaceAsset;                                                     // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FFontOutlineSettings
{
    int32 OutlineSize;                                                                // 0x0000 (size: 0x4)
    class UObject* OutlineMaterial;                                                   // 0x0008 (size: 0x8)
    FLinearColor OutlineColor;                                                        // 0x0010 (size: 0x10)
    bool bSeparateFillAlpha;                                                          // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FGeometry
{
}; // Size: 0x38

struct FHeaderRowStyle : public FSlateWidgetStyle
{
    FTableColumnHeaderStyle ColumnStyle;                                              // 0x0008 (size: 0x440)
    FTableColumnHeaderStyle LastColumnStyle;                                          // 0x0448 (size: 0x440)
    FSplitterStyle ColumnSplitterStyle;                                               // 0x0888 (size: 0xF8)
    FSlateBrush BackgroundBrush;                                                      // 0x0980 (size: 0x78)
    FSlateColor ForegroundColor;                                                      // 0x09F8 (size: 0x28)

}; // Size: 0xA20

struct FHyperlinkStyle : public FSlateWidgetStyle
{
    FButtonStyle UnderlineStyle;                                                      // 0x0008 (size: 0x238)
    FTextBlockStyle TextStyle;                                                        // 0x0240 (size: 0x1C8)
    FMargin Padding;                                                                  // 0x0408 (size: 0x10)

}; // Size: 0x418

struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
    FEditableTextBoxStyle EditableTextBoxStyle;                                       // 0x0008 (size: 0x728)
    FTextBlockStyle TextStyle;                                                        // 0x0730 (size: 0x1C8)

}; // Size: 0x8F8

struct FInlineTextImageStyle : public FSlateWidgetStyle
{
    FSlateBrush Image;                                                                // 0x0008 (size: 0x78)
    int16 Baseline;                                                                   // 0x0080 (size: 0x2)

}; // Size: 0x88

struct FInputEvent
{
}; // Size: 0x20

struct FKeyEvent : public FInputEvent
{
}; // Size: 0x40

struct FMargin
{
    float Left;                                                                       // 0x0000 (size: 0x4)
    float Top;                                                                        // 0x0004 (size: 0x4)
    float Right;                                                                      // 0x0008 (size: 0x4)
    float Bottom;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMotionEvent : public FInputEvent
{
}; // Size: 0x50

struct FNavigationEvent : public FInputEvent
{
}; // Size: 0x28

struct FPointerEvent : public FInputEvent
{
}; // Size: 0x70

struct FProgressBarStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImage;                                                      // 0x0008 (size: 0x78)
    FSlateBrush FillImage;                                                            // 0x0080 (size: 0x78)
    FSlateBrush MarqueeImage;                                                         // 0x00F8 (size: 0x78)

}; // Size: 0x170

struct FScrollBarStyle : public FSlateWidgetStyle
{
    FSlateBrush HorizontalBackgroundImage;                                            // 0x0008 (size: 0x78)
    FSlateBrush VerticalBackgroundImage;                                              // 0x0080 (size: 0x78)
    FSlateBrush VerticalTopSlotImage;                                                 // 0x00F8 (size: 0x78)
    FSlateBrush HorizontalTopSlotImage;                                               // 0x0170 (size: 0x78)
    FSlateBrush VerticalBottomSlotImage;                                              // 0x01E8 (size: 0x78)
    FSlateBrush HorizontalBottomSlotImage;                                            // 0x0260 (size: 0x78)
    FSlateBrush NormalThumbImage;                                                     // 0x02D8 (size: 0x78)
    FSlateBrush HoveredThumbImage;                                                    // 0x0350 (size: 0x78)
    FSlateBrush DraggedThumbImage;                                                    // 0x03C8 (size: 0x78)

}; // Size: 0x440

struct FScrollBorderStyle : public FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;                                                       // 0x0008 (size: 0x78)
    FSlateBrush BottomShadowBrush;                                                    // 0x0080 (size: 0x78)

}; // Size: 0xF8

struct FScrollBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;                                                       // 0x0008 (size: 0x78)
    FSlateBrush BottomShadowBrush;                                                    // 0x0080 (size: 0x78)
    FSlateBrush LeftShadowBrush;                                                      // 0x00F8 (size: 0x78)
    FSlateBrush RightShadowBrush;                                                     // 0x0170 (size: 0x78)

}; // Size: 0x1E8

struct FSearchBoxStyle : public FSlateWidgetStyle
{
    FEditableTextBoxStyle TextBoxStyle;                                               // 0x0008 (size: 0x728)
    FSlateFontInfo ActiveFontInfo;                                                    // 0x0730 (size: 0x58)
    FSlateBrush UpArrowImage;                                                         // 0x0788 (size: 0x78)
    FSlateBrush DownArrowImage;                                                       // 0x0800 (size: 0x78)
    FSlateBrush GlassImage;                                                           // 0x0878 (size: 0x78)
    FSlateBrush ClearImage;                                                           // 0x08F0 (size: 0x78)
    FMargin ImagePadding;                                                             // 0x0968 (size: 0x10)
    bool bLeftAlignButtons;                                                           // 0x0978 (size: 0x1)

}; // Size: 0x980

struct FSlateBrush
{
    FVector2D ImageSize;                                                              // 0x0008 (size: 0x8)
    FMargin Margin;                                                                   // 0x0010 (size: 0x10)
    FSlateColor TintColor;                                                            // 0x0020 (size: 0x28)
    class UObject* ResourceObject;                                                    // 0x0048 (size: 0x8)
    FName ResourceName;                                                               // 0x0050 (size: 0x8)
    FBox2D UVRegion;                                                                  // 0x0058 (size: 0x14)
    TEnumAsByte<ESlateBrushDrawType::Type> DrawAs;                                    // 0x006C (size: 0x1)
    TEnumAsByte<ESlateBrushTileType::Type> Tiling;                                    // 0x006D (size: 0x1)
    TEnumAsByte<ESlateBrushMirrorType::Type> Mirroring;                               // 0x006E (size: 0x1)
    TEnumAsByte<ESlateBrushImageType::Type> ImageType;                                // 0x006F (size: 0x1)
    uint8 bIsDynamicallyLoaded;                                                       // 0x0070 (size: 0x1)
    uint8 bHasUObject;                                                                // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FSlateColor
{
    FLinearColor SpecifiedColor;                                                      // 0x0000 (size: 0x10)
    TEnumAsByte<ESlateColorStylingMode::Type> ColorUseRule;                           // 0x0010 (size: 0x1)

}; // Size: 0x28

struct FSlateFontInfo
{
    class UObject* FontObject;                                                        // 0x0000 (size: 0x8)
    class UObject* FontMaterial;                                                      // 0x0008 (size: 0x8)
    FFontOutlineSettings OutlineSettings;                                             // 0x0010 (size: 0x28)
    FName TypefaceFontName;                                                           // 0x0048 (size: 0x8)
    int32 Size;                                                                       // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FSlateSound
{
    class UObject* ResourceObject;                                                    // 0x0000 (size: 0x8)

}; // Size: 0x18

struct FSlateWidgetStyle
{
}; // Size: 0x8

struct FSliderStyle : public FSlateWidgetStyle
{
    FSlateBrush NormalBarImage;                                                       // 0x0008 (size: 0x78)
    FSlateBrush DisabledBarImage;                                                     // 0x0080 (size: 0x78)
    FSlateBrush NormalThumbImage;                                                     // 0x00F8 (size: 0x78)
    FSlateBrush DisabledThumbImage;                                                   // 0x0170 (size: 0x78)
    float BarThickness;                                                               // 0x01E8 (size: 0x4)

}; // Size: 0x1F0

struct FSpinBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;                                                      // 0x0008 (size: 0x78)
    FSlateBrush HoveredBackgroundBrush;                                               // 0x0080 (size: 0x78)
    FSlateBrush ActiveFillBrush;                                                      // 0x00F8 (size: 0x78)
    FSlateBrush InactiveFillBrush;                                                    // 0x0170 (size: 0x78)
    FSlateBrush ArrowsImage;                                                          // 0x01E8 (size: 0x78)
    FSlateColor ForegroundColor;                                                      // 0x0260 (size: 0x28)
    FMargin TextPadding;                                                              // 0x0288 (size: 0x10)

}; // Size: 0x298

struct FSplitterStyle : public FSlateWidgetStyle
{
    FSlateBrush HandleNormalBrush;                                                    // 0x0008 (size: 0x78)
    FSlateBrush HandleHighlightBrush;                                                 // 0x0080 (size: 0x78)

}; // Size: 0xF8

struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
    FSlateBrush SortPrimaryAscendingImage;                                            // 0x0008 (size: 0x78)
    FSlateBrush SortPrimaryDescendingImage;                                           // 0x0080 (size: 0x78)
    FSlateBrush SortSecondaryAscendingImage;                                          // 0x00F8 (size: 0x78)
    FSlateBrush SortSecondaryDescendingImage;                                         // 0x0170 (size: 0x78)
    FSlateBrush NormalBrush;                                                          // 0x01E8 (size: 0x78)
    FSlateBrush HoveredBrush;                                                         // 0x0260 (size: 0x78)
    FSlateBrush MenuDropdownImage;                                                    // 0x02D8 (size: 0x78)
    FSlateBrush MenuDropdownNormalBorderBrush;                                        // 0x0350 (size: 0x78)
    FSlateBrush MenuDropdownHoveredBorderBrush;                                       // 0x03C8 (size: 0x78)

}; // Size: 0x440

struct FTableRowStyle : public FSlateWidgetStyle
{
    FSlateBrush SelectorFocusedBrush;                                                 // 0x0008 (size: 0x78)
    FSlateBrush ActiveHoveredBrush;                                                   // 0x0080 (size: 0x78)
    FSlateBrush ActiveBrush;                                                          // 0x00F8 (size: 0x78)
    FSlateBrush InactiveHoveredBrush;                                                 // 0x0170 (size: 0x78)
    FSlateBrush InactiveBrush;                                                        // 0x01E8 (size: 0x78)
    FSlateBrush EvenRowBackgroundHoveredBrush;                                        // 0x0260 (size: 0x78)
    FSlateBrush EvenRowBackgroundBrush;                                               // 0x02D8 (size: 0x78)
    FSlateBrush OddRowBackgroundHoveredBrush;                                         // 0x0350 (size: 0x78)
    FSlateBrush OddRowBackgroundBrush;                                                // 0x03C8 (size: 0x78)
    FSlateColor TextColor;                                                            // 0x0440 (size: 0x28)
    FSlateColor SelectedTextColor;                                                    // 0x0468 (size: 0x28)
    FSlateBrush DropIndicator_Above;                                                  // 0x0490 (size: 0x78)
    FSlateBrush DropIndicator_Onto;                                                   // 0x0508 (size: 0x78)
    FSlateBrush DropIndicator_Below;                                                  // 0x0580 (size: 0x78)

}; // Size: 0x5F8

struct FTextBlockStyle : public FSlateWidgetStyle
{
    FSlateFontInfo Font;                                                              // 0x0008 (size: 0x58)
    FSlateColor ColorAndOpacity;                                                      // 0x0060 (size: 0x28)
    FVector2D ShadowOffset;                                                           // 0x0088 (size: 0x8)
    FLinearColor ShadowColorAndOpacity;                                               // 0x0090 (size: 0x10)
    FSlateColor SelectedBackgroundColor;                                              // 0x00A0 (size: 0x28)
    FLinearColor HighlightColor;                                                      // 0x00C8 (size: 0x10)
    FSlateBrush HighlightShape;                                                       // 0x00D8 (size: 0x78)
    FSlateBrush UnderlineBrush;                                                       // 0x0150 (size: 0x78)

}; // Size: 0x1C8

struct FTypeface
{
    TArray<FTypefaceEntry> Fonts;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTypefaceEntry
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FFontData Font;                                                                   // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FVolumeControlStyle : public FSlateWidgetStyle
{
    FSliderStyle SliderStyle;                                                         // 0x0008 (size: 0x1F0)
    FSlateBrush HighVolumeImage;                                                      // 0x01F8 (size: 0x78)
    FSlateBrush MidVolumeImage;                                                       // 0x0270 (size: 0x78)
    FSlateBrush LowVolumeImage;                                                       // 0x02E8 (size: 0x78)
    FSlateBrush NoVolumeImage;                                                        // 0x0360 (size: 0x78)
    FSlateBrush MutedImage;                                                           // 0x03D8 (size: 0x78)

}; // Size: 0x450

struct FWindowStyle : public FSlateWidgetStyle
{
    FButtonStyle MinimizeButtonStyle;                                                 // 0x0008 (size: 0x238)
    FButtonStyle MaximizeButtonStyle;                                                 // 0x0240 (size: 0x238)
    FButtonStyle RestoreButtonStyle;                                                  // 0x0478 (size: 0x238)
    FButtonStyle CloseButtonStyle;                                                    // 0x06B0 (size: 0x238)
    FTextBlockStyle TitleTextStyle;                                                   // 0x08E8 (size: 0x1C8)
    FSlateBrush ActiveTitleBrush;                                                     // 0x0AB0 (size: 0x78)
    FSlateBrush InactiveTitleBrush;                                                   // 0x0B28 (size: 0x78)
    FSlateBrush FlashTitleBrush;                                                      // 0x0BA0 (size: 0x78)
    FSlateColor BackgroundColor;                                                      // 0x0C18 (size: 0x28)
    FSlateBrush OutlineBrush;                                                         // 0x0C40 (size: 0x78)
    FSlateColor OutlineColor;                                                         // 0x0CB8 (size: 0x28)
    FSlateBrush BorderBrush;                                                          // 0x0CE0 (size: 0x78)
    FSlateBrush BackgroundBrush;                                                      // 0x0D58 (size: 0x78)
    FSlateBrush ChildBackgroundBrush;                                                 // 0x0DD0 (size: 0x78)

}; // Size: 0xE48

class IFontFaceInterface : public IInterface
{
}; // Size: 0x28

class IFontProviderInterface : public IInterface
{
}; // Size: 0x28

class ISlateWidgetStyleContainerInterface : public IInterface
{
}; // Size: 0x28

class UFontBulkData : public UObject
{
}; // Size: 0xC0

class USlateTypes : public UObject
{
}; // Size: 0x28

class USlateWidgetStyleAsset : public UObject
{
    class USlateWidgetStyleContainerBase* CustomStyle;                                // 0x0028 (size: 0x8)

}; // Size: 0x30

class USlateWidgetStyleContainerBase : public UObject
{
}; // Size: 0x30

#endif
