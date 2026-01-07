#ifndef UE4SS_SDK_Slate_HPP
#define UE4SS_SDK_Slate_HPP

#include "Slate_enums.hpp"

struct FAnchors
{
    FVector2D Minimum;                                                                // 0x0000 (size: 0x8)
    FVector2D Maximum;                                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FInputChord
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    uint8 bShift;                                                                     // 0x0018 (size: 0x1)
    uint8 bCtrl;                                                                      // 0x0018 (size: 0x1)
    uint8 bAlt;                                                                       // 0x0018 (size: 0x1)
    uint8 bCmd;                                                                       // 0x0018 (size: 0x1)

}; // Size: 0x20

class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
    FButtonStyle ButtonStyle;                                                         // 0x0030 (size: 0x238)

}; // Size: 0x268

class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FCheckBoxStyle CheckBoxStyle;                                                     // 0x0030 (size: 0x4F0)

}; // Size: 0x520

class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FComboBoxStyle ComboBoxStyle;                                                     // 0x0030 (size: 0x378)

}; // Size: 0x3A8

class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
    FComboButtonStyle ComboButtonStyle;                                               // 0x0030 (size: 0x340)

}; // Size: 0x370

class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FEditableTextBoxStyle EditableTextBoxStyle;                                       // 0x0030 (size: 0x728)

}; // Size: 0x758

class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
    FEditableTextStyle EditableTextStyle;                                             // 0x0030 (size: 0x1F0)

}; // Size: 0x220

class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
    FProgressBarStyle ProgressBarStyle;                                               // 0x0030 (size: 0x170)

}; // Size: 0x1A0

class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
    FScrollBarStyle ScrollBarStyle;                                                   // 0x0030 (size: 0x440)

}; // Size: 0x470

class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FScrollBoxStyle ScrollBoxStyle;                                                   // 0x0030 (size: 0x1E8)

}; // Size: 0x218

class USlateSettings : public UObject
{
    bool bExplicitCanvasChildZOrder;                                                  // 0x0028 (size: 0x1)

}; // Size: 0x30

class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FSpinBoxStyle SpinBoxStyle;                                                       // 0x0030 (size: 0x298)

}; // Size: 0x2C8

class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
    FTextBlockStyle TextBlockStyle;                                                   // 0x0030 (size: 0x1C8)

}; // Size: 0x1F8

#endif
