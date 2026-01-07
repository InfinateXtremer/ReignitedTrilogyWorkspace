#ifndef UE4SS_SDK_UMG_HPP
#define UE4SS_SDK_UMG_HPP

#include "UMG_enums.hpp"

struct FAnchorData
{
    FMargin Offsets;                                                                  // 0x0000 (size: 0x10)
    FAnchors Anchors;                                                                 // 0x0010 (size: 0x10)
    FVector2D Alignment;                                                              // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FDelegateRuntimeBinding
{
    FString ObjectName;                                                               // 0x0000 (size: 0x10)
    FName PropertyName;                                                               // 0x0010 (size: 0x8)
    FName FunctionName;                                                               // 0x0018 (size: 0x8)
    FDynamicPropertyPath SourcePath;                                                  // 0x0020 (size: 0x10)
    EBindingKind Kind;                                                                // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FDynamicPropertyPath
{
    TArray<FPropertyPathSegment> Segments;                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FEventReply
{
}; // Size: 0xB8

struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate
{
    FRichCurve Translation;                                                           // 0x0048 (size: 0xE0)
    FRichCurve Rotation;                                                              // 0x0128 (size: 0x70)
    FRichCurve Scale;                                                                 // 0x0198 (size: 0xE0)
    FRichCurve Shear;                                                                 // 0x0278 (size: 0xE0)
    EMovieSceneBlendType BlendType;                                                   // 0x0358 (size: 0x1)

}; // Size: 0x360

struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
{
    FRichCurve TopCurve;                                                              // 0x0048 (size: 0x70)
    FRichCurve LeftCurve;                                                             // 0x00B8 (size: 0x70)
    FRichCurve RightCurve;                                                            // 0x0128 (size: 0x70)
    FRichCurve BottomCurve;                                                           // 0x0198 (size: 0x70)
    EMovieSceneBlendType BlendType;                                                   // 0x0208 (size: 0x1)

}; // Size: 0x210

struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
    TArray<FName> BrushPropertyNamePath;                                              // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FNamedSlotBinding
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    class UWidget* Content;                                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPaintContext
{
}; // Size: 0x30

struct FPropertyPathSegment
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 ArrayIndex;                                                                 // 0x0008 (size: 0x4)
    class UStruct* Struct;                                                            // 0x0010 (size: 0x8)
    class UField* Field;                                                              // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FShapedTextOptions
{
    uint8 bOverride_TextShapingMethod;                                                // 0x0000 (size: 0x1)
    uint8 bOverride_TextFlowDirection;                                                // 0x0000 (size: 0x1)
    ETextShapingMethod TextShapingMethod;                                             // 0x0004 (size: 0x1)
    ETextFlowDirection TextFlowDirection;                                             // 0x0005 (size: 0x1)

}; // Size: 0x8

struct FSlateChildSize
{
    float Value;                                                                      // 0x0000 (size: 0x4)
    TEnumAsByte<ESlateSizeRule::Type> SizeRule;                                       // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FSlateMeshVertex
{
    FVector2D Position;                                                               // 0x0000 (size: 0x8)
    FColor Color;                                                                     // 0x0008 (size: 0x4)
    FVector2D UV0;                                                                    // 0x000C (size: 0x8)
    FVector2D UV1;                                                                    // 0x0014 (size: 0x8)
    FVector2D UV2;                                                                    // 0x001C (size: 0x8)
    FVector2D UV3;                                                                    // 0x0024 (size: 0x8)
    FVector2D UV4;                                                                    // 0x002C (size: 0x8)
    FVector2D UV5;                                                                    // 0x0034 (size: 0x8)

}; // Size: 0x3C

struct FWidgetAnimationBinding
{
    FName WidgetName;                                                                 // 0x0000 (size: 0x8)
    FName SlotWidgetName;                                                             // 0x0008 (size: 0x8)
    FGuid AnimationGuid;                                                              // 0x0010 (size: 0x10)
    bool bIsRootWidget;                                                               // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FWidgetNavigationData
{
    EUINavigationRule Rule;                                                           // 0x0000 (size: 0x1)
    FName WidgetToFocus;                                                              // 0x0008 (size: 0x8)
    TWeakObjectPtr<class UWidget> Widget;                                             // 0x0010 (size: 0x8)
    FWidgetNavigationDataCustomDelegate CustomDelegate;                               // 0x0018 (size: 0x10)
    class UWidget* CustomWidgetNavigationDelegate(EUINavigation Navigation);

}; // Size: 0x28

struct FWidgetTransform
{
    FVector2D Translation;                                                            // 0x0000 (size: 0x8)
    FVector2D Scale;                                                                  // 0x0008 (size: 0x8)
    FVector2D Shear;                                                                  // 0x0010 (size: 0x8)
    float angle;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x1C

class INamedSlotInterface : public IInterface
{
}; // Size: 0x28

class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
    FAsyncTaskDownloadImageOnSuccess OnSuccess;                                       // 0x0028 (size: 0x10)
    FAsyncTaskDownloadImageOnFail OnFail;                                             // 0x0038 (size: 0x10)

    class UAsyncTaskDownloadImage* DownloadImage(FString URL);
}; // Size: 0x48

class UBackgroundBlur : public UContentWidget
{
    FMargin Padding;                                                                  // 0x0118 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0128 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0129 (size: 0x1)
    bool bApplyAlphaToBlur;                                                           // 0x012A (size: 0x1)
    float BlurStrength;                                                               // 0x012C (size: 0x4)
    bool bOverrideAutoRadiusCalculation;                                              // 0x0130 (size: 0x1)
    int32 BlurRadius;                                                                 // 0x0134 (size: 0x4)
    FSlateBrush LowQualityFallbackBrush;                                              // 0x0138 (size: 0x78)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetLowQualityFallbackBrush(const FSlateBrush& InBrush);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    void SetBlurStrength(float InStrength);
    void SetBlurRadius(int32 InBlurRadius);
    void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
}; // Size: 0x1C0

class UBackgroundBlurSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0048 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0049 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x60

class UBoolBinding : public UPropertyBinding
{

    bool GetValue();
}; // Size: 0x48

class UBorder : public UContentWidget
{
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0118 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0119 (size: 0x1)
    uint8 bShowEffectWhenDisabled;                                                    // 0x011A (size: 0x1)
    FLinearColor ContentColorAndOpacity;                                              // 0x011C (size: 0x10)
    FBorderContentColorAndOpacityDelegate ContentColorAndOpacityDelegate;             // 0x0130 (size: 0x10)
    FLinearColor GetLinearColor();
    FMargin Padding;                                                                  // 0x0140 (size: 0x10)
    FSlateBrush Background;                                                           // 0x0150 (size: 0x78)
    FBorderBackgroundDelegate BackgroundDelegate;                                     // 0x01C8 (size: 0x10)
    FSlateBrush GetSlateBrush();
    FLinearColor BrushColor;                                                          // 0x01D8 (size: 0x10)
    FBorderBrushColorDelegate BrushColorDelegate;                                     // 0x01E8 (size: 0x10)
    FLinearColor GetLinearColor();
    FVector2D DesiredSizeScale;                                                       // 0x01F8 (size: 0x8)
    FBorderOnMouseButtonDownEvent OnMouseButtonDownEvent;                             // 0x0200 (size: 0x10)
    FEventReply OnPointerEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FBorderOnMouseButtonUpEvent OnMouseButtonUpEvent;                                 // 0x0210 (size: 0x10)
    FEventReply OnPointerEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FBorderOnMouseMoveEvent OnMouseMoveEvent;                                         // 0x0220 (size: 0x10)
    FEventReply OnPointerEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FBorderOnMouseDoubleClickEvent OnMouseDoubleClickEvent;                           // 0x0230 (size: 0x10)
    FEventReply OnPointerEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    void SetDesiredSizeScale(FVector2D InScale);
    void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);
    void SetBrushFromTexture(class UTexture2D* Texture);
    void SetBrushFromMaterial(class UMaterialInterface* Material);
    void SetBrushFromAsset(class USlateBrushAsset* Asset);
    void SetBrushColor(FLinearColor InBrushColor);
    void SetBrush(const FSlateBrush& InBrush);
    class UMaterialInstanceDynamic* GetDynamicMaterial();
}; // Size: 0x250

class UBorderSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0048 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0049 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x60

class UBrushBinding : public UPropertyBinding
{

    FSlateBrush GetValue();
}; // Size: 0x50

class UButton : public UContentWidget
{
    class USlateWidgetStyleAsset* Style;                                              // 0x0118 (size: 0x8)
    FButtonStyle WidgetStyle;                                                         // 0x0120 (size: 0x238)
    FLinearColor ColorAndOpacity;                                                     // 0x0358 (size: 0x10)
    FLinearColor BackgroundColor;                                                     // 0x0368 (size: 0x10)
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;                                // 0x0378 (size: 0x1)
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;                                // 0x0379 (size: 0x1)
    bool IsFocusable;                                                                 // 0x037A (size: 0x1)
    FButtonOnClicked OnClicked;                                                       // 0x0380 (size: 0x10)
    FButtonOnPressed OnPressed;                                                       // 0x0390 (size: 0x10)
    FButtonOnReleased OnReleased;                                                     // 0x03A0 (size: 0x10)
    FButtonOnHovered OnHovered;                                                       // 0x03B0 (size: 0x10)
    FButtonOnUnhovered OnUnhovered;                                                   // 0x03C0 (size: 0x10)

    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    void SetStyle(const FButtonStyle& InStyle);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    void SetBackgroundColor(FLinearColor InBackgroundColor);
    bool IsPressed();
}; // Size: 0x3E0

class UButtonSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0048 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0049 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x60

class UCanvasPanel : public UPanelWidget
{

    class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
}; // Size: 0x128

class UCanvasPanelSlot : public UPanelSlot
{
    FAnchorData LayoutData;                                                           // 0x0038 (size: 0x28)
    bool bAutoSize;                                                                   // 0x0060 (size: 0x1)
    int32 ZOrder;                                                                     // 0x0064 (size: 0x4)

    void SetZOrder(int32 InZOrder);
    void SetSize(FVector2D InSize);
    void SetPosition(FVector2D InPosition);
    void SetOffsets(FMargin InOffset);
    void SetMinimum(FVector2D InMinimumAnchors);
    void SetMaximum(FVector2D InMaximumAnchors);
    void SetLayout(const FAnchorData& InLayoutData);
    void SetAutoSize(bool InbAutoSize);
    void SetAnchors(FAnchors InAnchors);
    void SetAlignment(FVector2D InAlignment);
    int32 GetZOrder();
    FVector2D GetSize();
    FVector2D GetPosition();
    FMargin GetOffsets();
    FAnchorData GetLayout();
    bool GetAutoSize();
    FAnchors GetAnchors();
    FVector2D GetAlignment();
}; // Size: 0x70

class UCheckBox : public UContentWidget
{
    ECheckBoxState CheckedState;                                                      // 0x0118 (size: 0x1)
    FCheckBoxCheckedStateDelegate CheckedStateDelegate;                               // 0x0120 (size: 0x10)
    ECheckBoxState GetCheckBoxState();
    FCheckBoxStyle WidgetStyle;                                                       // 0x0130 (size: 0x4F0)
    class USlateWidgetStyleAsset* Style;                                              // 0x0620 (size: 0x8)
    class USlateBrushAsset* UncheckedImage;                                           // 0x0628 (size: 0x8)
    class USlateBrushAsset* UncheckedHoveredImage;                                    // 0x0630 (size: 0x8)
    class USlateBrushAsset* UncheckedPressedImage;                                    // 0x0638 (size: 0x8)
    class USlateBrushAsset* CheckedImage;                                             // 0x0640 (size: 0x8)
    class USlateBrushAsset* CheckedHoveredImage;                                      // 0x0648 (size: 0x8)
    class USlateBrushAsset* CheckedPressedImage;                                      // 0x0650 (size: 0x8)
    class USlateBrushAsset* UndeterminedImage;                                        // 0x0658 (size: 0x8)
    class USlateBrushAsset* UndeterminedHoveredImage;                                 // 0x0660 (size: 0x8)
    class USlateBrushAsset* UndeterminedPressedImage;                                 // 0x0668 (size: 0x8)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0670 (size: 0x1)
    FMargin Padding;                                                                  // 0x0674 (size: 0x10)
    FSlateColor BorderBackgroundColor;                                                // 0x0688 (size: 0x28)
    bool IsFocusable;                                                                 // 0x06B0 (size: 0x1)
    FCheckBoxOnCheckStateChanged OnCheckStateChanged;                                 // 0x06B8 (size: 0x10)

    void SetIsChecked(bool InIsChecked);
    void SetCheckedState(ECheckBoxState InCheckedState);
    bool IsPressed();
    bool IsChecked();
    ECheckBoxState GetCheckedState();
}; // Size: 0x6D8

class UCheckedStateBinding : public UPropertyBinding
{

    ECheckBoxState GetValue();
}; // Size: 0x50

class UCircularThrobber : public UWidget
{
    int32 NumberOfPieces;                                                             // 0x0100 (size: 0x4)
    float Period;                                                                     // 0x0104 (size: 0x4)
    float Radius;                                                                     // 0x0108 (size: 0x4)
    class USlateBrushAsset* PieceImage;                                               // 0x0110 (size: 0x8)
    FSlateBrush Image;                                                                // 0x0118 (size: 0x78)
    bool bEnableRadius;                                                               // 0x0190 (size: 0x1)

    void SetRadius(float InRadius);
    void SetPeriod(float InPeriod);
    void SetNumberOfPieces(int32 InNumberOfPieces);
}; // Size: 0x1A8

class UColorBinding : public UPropertyBinding
{

    FSlateColor GetSlateValue();
    FLinearColor GetLinearValue();
}; // Size: 0x50

class UComboBox : public UWidget
{
    TArray<class UObject*> Items;                                                     // 0x0100 (size: 0x10)
    FComboBoxOnGenerateWidgetEvent OnGenerateWidgetEvent;                             // 0x0110 (size: 0x10)
    class UWidget* GenerateWidgetForObject(class UObject* Item);
    bool bIsFocusable;                                                                // 0x0120 (size: 0x1)

}; // Size: 0x138

class UComboBoxString : public UWidget
{
    TArray<FString> DefaultOptions;                                                   // 0x0100 (size: 0x10)
    FString SelectedOption;                                                           // 0x0110 (size: 0x10)
    FComboBoxStyle WidgetStyle;                                                       // 0x0120 (size: 0x378)
    FTableRowStyle ItemStyle;                                                         // 0x0498 (size: 0x5F8)
    FMargin ContentPadding;                                                           // 0x0A90 (size: 0x10)
    float MaxListHeight;                                                              // 0x0AA0 (size: 0x4)
    bool HasDownArrow;                                                                // 0x0AA4 (size: 0x1)
    bool EnableGamepadNavigationMode;                                                 // 0x0AA5 (size: 0x1)
    FSlateFontInfo Font;                                                              // 0x0AA8 (size: 0x58)
    FSlateColor ForegroundColor;                                                      // 0x0B00 (size: 0x28)
    bool bIsFocusable;                                                                // 0x0B28 (size: 0x1)
    FComboBoxStringOnGenerateWidgetEvent OnGenerateWidgetEvent;                       // 0x0B30 (size: 0x10)
    class UWidget* GenerateWidgetForString(FString Item);
    FComboBoxStringOnSelectionChanged OnSelectionChanged;                             // 0x0B40 (size: 0x10)
    FComboBoxStringOnOpening OnOpening;                                               // 0x0B50 (size: 0x10)

    void SetSelectedOption(FString Option);
    bool RemoveOption(FString Option);
    void RefreshOptions();
    void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void OnOpeningEvent__DelegateSignature();
    FString GetSelectedOption();
    int32 GetOptionCount();
    FString GetOptionAtIndex(int32 Index);
    int32 FindOptionIndex(FString Option);
    void ClearSelection();
    void ClearOptions();
    void AddOption(FString Option);
}; // Size: 0xBA0

class UContentWidget : public UPanelWidget
{

    class UPanelSlot* SetContent(class UWidget* Content);
    class UPanelSlot* GetContentSlot();
    class UWidget* GetContent();
}; // Size: 0x118

class UDefault__WidgetBlueprintGeneratedClass
{
}; // Size: 0x0

class UDragDropOperation : public UObject
{
    FString Tag;                                                                      // 0x0028 (size: 0x10)
    class UObject* Payload;                                                           // 0x0038 (size: 0x8)
    class UWidget* DefaultDragVisual;                                                 // 0x0040 (size: 0x8)
    EDragPivot Pivot;                                                                 // 0x0048 (size: 0x1)
    FVector2D Offset;                                                                 // 0x004C (size: 0x8)
    FDragDropOperationOnDrop OnDrop;                                                  // 0x0058 (size: 0x10)
    FDragDropOperationOnDragCancelled OnDragCancelled;                                // 0x0068 (size: 0x10)
    FDragDropOperationOnDragged OnDragged;                                            // 0x0078 (size: 0x10)

    void Drop(const FPointerEvent& PointerEvent);
    void Dragged(const FPointerEvent& PointerEvent);
    void DragCancelled(const FPointerEvent& PointerEvent);
}; // Size: 0x88

class UEditableText : public UWidget
{
    FText Text;                                                                       // 0x0100 (size: 0x18)
    FEditableTextTextDelegate TextDelegate;                                           // 0x0118 (size: 0x10)
    FText GetText();
    FText HintText;                                                                   // 0x0128 (size: 0x18)
    FEditableTextHintTextDelegate HintTextDelegate;                                   // 0x0140 (size: 0x10)
    FText GetText();
    FEditableTextStyle WidgetStyle;                                                   // 0x0150 (size: 0x1F0)
    class USlateWidgetStyleAsset* Style;                                              // 0x0340 (size: 0x8)
    class USlateBrushAsset* BackgroundImageSelected;                                  // 0x0348 (size: 0x8)
    class USlateBrushAsset* BackgroundImageComposing;                                 // 0x0350 (size: 0x8)
    class USlateBrushAsset* CaretImage;                                               // 0x0358 (size: 0x8)
    FSlateFontInfo Font;                                                              // 0x0360 (size: 0x58)
    FSlateColor ColorAndOpacity;                                                      // 0x03B8 (size: 0x28)
    bool IsReadOnly;                                                                  // 0x03E0 (size: 0x1)
    bool IsPassword;                                                                  // 0x03E1 (size: 0x1)
    float MinimumDesiredWidth;                                                        // 0x03E4 (size: 0x4)
    bool IsCaretMovedWhenGainFocus;                                                   // 0x03E8 (size: 0x1)
    bool SelectAllTextWhenFocused;                                                    // 0x03E9 (size: 0x1)
    bool RevertTextOnEscape;                                                          // 0x03EA (size: 0x1)
    bool ClearKeyboardFocusOnCommit;                                                  // 0x03EB (size: 0x1)
    bool SelectAllTextOnCommit;                                                       // 0x03EC (size: 0x1)
    bool AllowContextMenu;                                                            // 0x03ED (size: 0x1)
    TEnumAsByte<EVirtualKeyboardType::Type> KeyboardType;                             // 0x03EE (size: 0x1)
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;                       // 0x03EF (size: 0x1)
    TEnumAsByte<ETextJustify::Type> Justification;                                    // 0x03F0 (size: 0x1)
    FShapedTextOptions ShapedTextOptions;                                             // 0x03F4 (size: 0x8)
    FEditableTextOnTextChanged OnTextChanged;                                         // 0x0400 (size: 0x10)
    FEditableTextOnTextCommitted OnTextCommitted;                                     // 0x0410 (size: 0x10)

    void SetText(FText InText);
    void SetIsReadOnly(bool InbIsReadyOnly);
    void SetIsPassword(bool InbIsPassword);
    void SetHintText(FText InHintText);
    void OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    FText GetText();
}; // Size: 0x430

class UEditableTextBox : public UWidget
{
    FText Text;                                                                       // 0x0100 (size: 0x18)
    FEditableTextBoxTextDelegate TextDelegate;                                        // 0x0118 (size: 0x10)
    FText GetText();
    FEditableTextBoxStyle WidgetStyle;                                                // 0x0128 (size: 0x728)
    class USlateWidgetStyleAsset* Style;                                              // 0x0850 (size: 0x8)
    FText HintText;                                                                   // 0x0858 (size: 0x18)
    FEditableTextBoxHintTextDelegate HintTextDelegate;                                // 0x0870 (size: 0x10)
    FText GetText();
    FSlateFontInfo Font;                                                              // 0x0880 (size: 0x58)
    FLinearColor ForegroundColor;                                                     // 0x08D8 (size: 0x10)
    FLinearColor BackgroundColor;                                                     // 0x08E8 (size: 0x10)
    FLinearColor ReadOnlyForegroundColor;                                             // 0x08F8 (size: 0x10)
    bool IsReadOnly;                                                                  // 0x0908 (size: 0x1)
    bool IsPassword;                                                                  // 0x0909 (size: 0x1)
    float MinimumDesiredWidth;                                                        // 0x090C (size: 0x4)
    FMargin Padding;                                                                  // 0x0910 (size: 0x10)
    bool IsCaretMovedWhenGainFocus;                                                   // 0x0920 (size: 0x1)
    bool SelectAllTextWhenFocused;                                                    // 0x0921 (size: 0x1)
    bool RevertTextOnEscape;                                                          // 0x0922 (size: 0x1)
    bool ClearKeyboardFocusOnCommit;                                                  // 0x0923 (size: 0x1)
    bool SelectAllTextOnCommit;                                                       // 0x0924 (size: 0x1)
    bool AllowContextMenu;                                                            // 0x0925 (size: 0x1)
    TEnumAsByte<EVirtualKeyboardType::Type> KeyboardType;                             // 0x0926 (size: 0x1)
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;                       // 0x0927 (size: 0x1)
    TEnumAsByte<ETextJustify::Type> Justification;                                    // 0x0928 (size: 0x1)
    FShapedTextOptions ShapedTextOptions;                                             // 0x092C (size: 0x8)
    FEditableTextBoxOnTextChanged OnTextChanged;                                      // 0x0938 (size: 0x10)
    FEditableTextBoxOnTextCommitted OnTextCommitted;                                  // 0x0948 (size: 0x10)

    void SetText(FText InText);
    void SetIsReadOnly(bool bReadOnly);
    void SetHintText(FText InText);
    void SetError(FText InError);
    void OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    bool HasError();
    FText GetText();
    void ClearError();
}; // Size: 0x968

class UExpandableArea : public UWidget
{
    FExpandableAreaStyle Style;                                                       // 0x0108 (size: 0x100)
    FSlateBrush BorderBrush;                                                          // 0x0208 (size: 0x78)
    FSlateColor BorderColor;                                                          // 0x0280 (size: 0x28)
    bool bIsExpanded;                                                                 // 0x02A8 (size: 0x1)
    float MaxHeight;                                                                  // 0x02AC (size: 0x4)
    FMargin HeaderPadding;                                                            // 0x02B0 (size: 0x10)
    FMargin AreaPadding;                                                              // 0x02C0 (size: 0x10)
    FExpandableAreaOnExpansionChanged OnExpansionChanged;                             // 0x02D0 (size: 0x10)
    class UWidget* HeaderContent;                                                     // 0x02E0 (size: 0x8)
    class UWidget* BodyContent;                                                       // 0x02E8 (size: 0x8)

    void SetIsExpanded_Animated(bool IsExpanded);
    void SetIsExpanded(bool IsExpanded);
    bool GetIsExpanded();
}; // Size: 0x300

class UFloatBinding : public UPropertyBinding
{

    float GetValue();
}; // Size: 0x48

class UGridPanel : public UPanelWidget
{
    TArray<float> ColumnFill;                                                         // 0x0118 (size: 0x10)
    TArray<float> RowFill;                                                            // 0x0128 (size: 0x10)

    class UGridSlot* AddChildToGrid(class UWidget* Content);
}; // Size: 0x148

class UGridSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0048 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0049 (size: 0x1)
    int32 Row;                                                                        // 0x004C (size: 0x4)
    int32 RowSpan;                                                                    // 0x0050 (size: 0x4)
    int32 Column;                                                                     // 0x0054 (size: 0x4)
    int32 ColumnSpan;                                                                 // 0x0058 (size: 0x4)
    int32 Layer;                                                                      // 0x005C (size: 0x4)
    FVector2D Nudge;                                                                  // 0x0060 (size: 0x8)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetRowSpan(int32 InRowSpan);
    void SetRow(int32 InRow);
    void SetPadding(FMargin InPadding);
    void SetLayer(int32 InLayer);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    void SetColumnSpan(int32 InColumnSpan);
    void SetColumn(int32 InColumn);
}; // Size: 0x70

class UHorizontalBox : public UPanelWidget
{

    class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
}; // Size: 0x128

class UHorizontalBoxSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    FSlateChildSize Size;                                                             // 0x0048 (size: 0x8)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0050 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0051 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetSize(FSlateChildSize InSize);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x60

class UImage : public UWidget
{
    FSlateBrush Brush;                                                                // 0x0100 (size: 0x78)
    FImageBrushDelegate BrushDelegate;                                                // 0x0178 (size: 0x10)
    FSlateBrush GetSlateBrush();
    FLinearColor ColorAndOpacity;                                                     // 0x0188 (size: 0x10)
    FImageColorAndOpacityDelegate ColorAndOpacityDelegate;                            // 0x0198 (size: 0x10)
    FLinearColor GetLinearColor();
    FImageOnMouseButtonDownEvent OnMouseButtonDownEvent;                              // 0x01A8 (size: 0x10)
    FEventReply OnPointerEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);

    void SetOpacity(float InOpacity);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
    void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
    void SetBrushFromMaterial(class UMaterialInterface* Material);
    void SetBrushFromAsset(class USlateBrushAsset* Asset);
    void SetBrush(const FSlateBrush& InBrush);
    class UMaterialInstanceDynamic* GetDynamicMaterial();
}; // Size: 0x1C8

class UInputKeySelector : public UWidget
{
    FButtonStyle WidgetStyle;                                                         // 0x0100 (size: 0x238)
    FTextBlockStyle TextStyle;                                                        // 0x0338 (size: 0x1C8)
    FInputChord SelectedKey;                                                          // 0x0500 (size: 0x20)
    FSlateFontInfo Font;                                                              // 0x0520 (size: 0x58)
    FMargin Margin;                                                                   // 0x0578 (size: 0x10)
    FLinearColor ColorAndOpacity;                                                     // 0x0588 (size: 0x10)
    FText KeySelectionText;                                                           // 0x0598 (size: 0x18)
    FText NoKeySpecifiedText;                                                         // 0x05B0 (size: 0x18)
    bool bAllowModifierKeys;                                                          // 0x05C8 (size: 0x1)
    bool bAllowGamepadKeys;                                                           // 0x05C9 (size: 0x1)
    TArray<FKey> EscapeKeys;                                                          // 0x05D0 (size: 0x10)
    FInputKeySelectorOnKeySelected OnKeySelected;                                     // 0x05E0 (size: 0x10)
    FInputKeySelectorOnIsSelectingKeyChanged OnIsSelectingKeyChanged;                 // 0x05F0 (size: 0x10)

    void SetTextBlockVisibility(const ESlateVisibility InVisibility);
    void SetSelectedKey(const FInputChord& InSelectedKey);
    void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);
    void SetKeySelectionText(FText InKeySelectionText);
    void SetEscapeKeys(const TArray<FKey>& InKeys);
    void SetAllowModifierKeys(bool bInAllowModifierKeys);
    void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
    void OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void OnIsSelectingKeyChanged__DelegateSignature();
    bool GetIsSelectingKey();
}; // Size: 0x610

class UInt32Binding : public UPropertyBinding
{

    int32 GetValue();
}; // Size: 0x48

class UInvalidationBox : public UContentWidget
{
    bool bCanCache;                                                                   // 0x0118 (size: 0x1)
    bool CacheRelativeTransforms;                                                     // 0x0119 (size: 0x1)

    void SetCanCache(bool CanCache);
    void InvalidateCache();
    bool GetCanCache();
}; // Size: 0x130

class UListView : public UTableViewBase
{
    float ItemHeight;                                                                 // 0x0100 (size: 0x4)
    TArray<class UObject*> Items;                                                     // 0x0108 (size: 0x10)
    TEnumAsByte<ESelectionMode::Type> SelectionMode;                                  // 0x0118 (size: 0x1)
    FListViewOnGenerateRowEvent OnGenerateRowEvent;                                   // 0x0120 (size: 0x10)
    class UWidget* OnGenerateRowUObject(class UObject* Item);

}; // Size: 0x140

class UMenuAnchor : public UContentWidget
{
    TSubclassOf<class UUserWidget> MenuClass;                                         // 0x0118 (size: 0x8)
    FMenuAnchorOnGetMenuContentEvent OnGetMenuContentEvent;                           // 0x0120 (size: 0x10)
    class UWidget* GetWidget();
    TEnumAsByte<EMenuPlacement> Placement;                                            // 0x0130 (size: 0x1)
    bool ShouldDeferPaintingAfterWindowContent;                                       // 0x0131 (size: 0x1)
    bool UseApplicationMenuStack;                                                     // 0x0132 (size: 0x1)
    FMenuAnchorOnMenuOpenChanged OnMenuOpenChanged;                                   // 0x0138 (size: 0x10)

    void ToggleOpen(bool bFocusOnOpen);
    bool ShouldOpenDueToClick();
    void Open(bool bFocusMenu);
    bool IsOpen();
    bool HasOpenSubMenus();
    FVector2D GetMenuPosition();
    void Close();
}; // Size: 0x158

class UMouseCursorBinding : public UPropertyBinding
{

    TEnumAsByte<EMouseCursor::Type> GetValue();
}; // Size: 0x48

class UMovieScene2DTransformSection : public UMovieSceneSection
{
    FRichCurve Translation;                                                           // 0x0118 (size: 0xE0)
    FRichCurve Rotation;                                                              // 0x01F8 (size: 0x70)
    FRichCurve Scale;                                                                 // 0x0268 (size: 0xE0)
    FRichCurve Shear;                                                                 // 0x0348 (size: 0xE0)

}; // Size: 0x430

class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xE0

class UMovieSceneMarginSection : public UMovieSceneSection
{
    FRichCurve TopCurve;                                                              // 0x0118 (size: 0x70)
    FRichCurve LeftCurve;                                                             // 0x0188 (size: 0x70)
    FRichCurve RightCurve;                                                            // 0x01F8 (size: 0x70)
    FRichCurve BottomCurve;                                                           // 0x0268 (size: 0x70)

}; // Size: 0x2E0

class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xE0

class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
    TArray<FName> BrushPropertyNamePath;                                              // 0x00C8 (size: 0x10)
    FName TrackName;                                                                  // 0x00D8 (size: 0x8)

}; // Size: 0xE0

class UMultiLineEditableText : public UTextLayoutWidget
{
    FText Text;                                                                       // 0x0128 (size: 0x18)
    FText HintText;                                                                   // 0x0140 (size: 0x18)
    FMultiLineEditableTextHintTextDelegate HintTextDelegate;                          // 0x0158 (size: 0x10)
    FText GetText();
    FTextBlockStyle WidgetStyle;                                                      // 0x0168 (size: 0x1C8)
    bool bIsReadOnly;                                                                 // 0x0330 (size: 0x1)
    FSlateFontInfo Font;                                                              // 0x0338 (size: 0x58)
    bool SelectAllTextWhenFocused;                                                    // 0x0390 (size: 0x1)
    bool ClearTextSelectionOnFocusLoss;                                               // 0x0391 (size: 0x1)
    bool RevertTextOnEscape;                                                          // 0x0392 (size: 0x1)
    bool ClearKeyboardFocusOnCommit;                                                  // 0x0393 (size: 0x1)
    bool AllowContextMenu;                                                            // 0x0394 (size: 0x1)
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;                       // 0x0395 (size: 0x1)
    FMultiLineEditableTextOnTextChanged OnTextChanged;                                // 0x0398 (size: 0x10)
    FMultiLineEditableTextOnTextCommitted OnTextCommitted;                            // 0x03A8 (size: 0x10)

    void SetText(FText InText);
    void SetIsReadOnly(bool bReadOnly);
    void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnMultiLineEditableTextChangedEvent__DelegateSignature(const FText& Text);
    FText GetText();
}; // Size: 0x3C8

class UMultiLineEditableTextBox : public UTextLayoutWidget
{
    FText Text;                                                                       // 0x0128 (size: 0x18)
    FText HintText;                                                                   // 0x0140 (size: 0x18)
    FMultiLineEditableTextBoxHintTextDelegate HintTextDelegate;                       // 0x0158 (size: 0x10)
    FText GetText();
    FEditableTextBoxStyle WidgetStyle;                                                // 0x0168 (size: 0x728)
    FTextBlockStyle TextStyle;                                                        // 0x0890 (size: 0x1C8)
    bool bIsReadOnly;                                                                 // 0x0A58 (size: 0x1)
    bool AllowContextMenu;                                                            // 0x0A59 (size: 0x1)
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;                       // 0x0A5A (size: 0x1)
    class USlateWidgetStyleAsset* Style;                                              // 0x0A60 (size: 0x8)
    FSlateFontInfo Font;                                                              // 0x0A68 (size: 0x58)
    FLinearColor ForegroundColor;                                                     // 0x0AC0 (size: 0x10)
    FLinearColor BackgroundColor;                                                     // 0x0AD0 (size: 0x10)
    FLinearColor ReadOnlyForegroundColor;                                             // 0x0AE0 (size: 0x10)
    FMultiLineEditableTextBoxOnTextChanged OnTextChanged;                             // 0x0AF0 (size: 0x10)
    FMultiLineEditableTextBoxOnTextCommitted OnTextCommitted;                         // 0x0B00 (size: 0x10)

    void SetText(FText InText);
    void SetIsReadOnly(bool bReadOnly);
    void SetError(FText InError);
    void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    FText GetText();
}; // Size: 0xB20

class UNamedSlot : public UContentWidget
{
}; // Size: 0x128

class UNativeWidgetHost : public UWidget
{
}; // Size: 0x110

class UOverlay : public UPanelWidget
{

    class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
}; // Size: 0x128

class UOverlaySlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0040 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0050 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0051 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x58

class UPanelSlot : public UVisual
{
    class UPanelWidget* Parent;                                                       // 0x0028 (size: 0x8)
    class UWidget* Content;                                                           // 0x0030 (size: 0x8)

}; // Size: 0x38

class UPanelWidget : public UWidget
{
    TArray<class UPanelSlot*> Slots;                                                  // 0x0100 (size: 0x10)

    bool RemoveChildAt(int32 Index);
    bool RemoveChild(class UWidget* Content);
    bool HasChild(class UWidget* Content);
    bool HasAnyChildren();
    int32 GetChildrenCount();
    int32 GetChildIndex(class UWidget* Content);
    class UWidget* GetChildAt(int32 Index);
    void ClearChildren();
    class UPanelSlot* AddChild(class UWidget* Content);
}; // Size: 0x118

class UProgressBar : public UWidget
{
    FProgressBarStyle WidgetStyle;                                                    // 0x0100 (size: 0x170)
    class USlateWidgetStyleAsset* Style;                                              // 0x0270 (size: 0x8)
    class USlateBrushAsset* BackgroundImage;                                          // 0x0278 (size: 0x8)
    class USlateBrushAsset* FillImage;                                                // 0x0280 (size: 0x8)
    class USlateBrushAsset* MarqueeImage;                                             // 0x0288 (size: 0x8)
    float Percent;                                                                    // 0x0290 (size: 0x4)
    TEnumAsByte<EProgressBarFillType::Type> BarFillType;                              // 0x0294 (size: 0x1)
    bool bIsMarquee;                                                                  // 0x0295 (size: 0x1)
    FVector2D BorderPadding;                                                          // 0x0298 (size: 0x8)
    FProgressBarPercentDelegate PercentDelegate;                                      // 0x02A0 (size: 0x10)
    float GetFloat();
    FLinearColor FillColorAndOpacity;                                                 // 0x02B0 (size: 0x10)
    FProgressBarFillColorAndOpacityDelegate FillColorAndOpacityDelegate;              // 0x02C0 (size: 0x10)
    FLinearColor GetLinearColor();

    void SetPercent(float InPercent);
    void SetIsMarquee(bool InbIsMarquee);
    void SetFillColorAndOpacity(FLinearColor inColor);
}; // Size: 0x2E0

class UPropertyBinding : public UObject
{
    TWeakObjectPtr<class UObject> SourceObject;                                       // 0x0028 (size: 0x8)
    FDynamicPropertyPath SourcePath;                                                  // 0x0030 (size: 0x10)
    FName DestinationProperty;                                                        // 0x0040 (size: 0x8)

}; // Size: 0x48

class URetainerBox : public UContentWidget
{
    bool RenderOnInvalidation;                                                        // 0x0118 (size: 0x1)
    bool RenderOnPhase;                                                               // 0x0119 (size: 0x1)
    int32 Phase;                                                                      // 0x011C (size: 0x4)
    int32 PhaseCount;                                                                 // 0x0120 (size: 0x4)
    class UMaterialInterface* EffectMaterial;                                         // 0x0128 (size: 0x8)
    FName TextureParameter;                                                           // 0x0130 (size: 0x8)

    void SetTextureParameter(FName TextureParameter);
    void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
    void RequestRender();
    class UMaterialInstanceDynamic* GetEffectMaterial();
}; // Size: 0x148

class URichTextBlock : public UTextLayoutWidget
{
    FText Text;                                                                       // 0x0128 (size: 0x18)
    FRichTextBlockTextDelegate TextDelegate;                                          // 0x0140 (size: 0x10)
    FText GetText();
    FSlateFontInfo Font;                                                              // 0x0150 (size: 0x58)
    FLinearColor Color;                                                               // 0x01A8 (size: 0x10)
    TArray<class URichTextBlockDecorator*> Decorators;                                // 0x01B8 (size: 0x10)

}; // Size: 0x3A0

class URichTextBlockDecorator : public UObject
{
    bool bReveal;                                                                     // 0x0028 (size: 0x1)
    int32 RevealedIndex;                                                              // 0x002C (size: 0x4)

}; // Size: 0x30

class USafeZone : public UContentWidget
{
    bool PadLeft;                                                                     // 0x0118 (size: 0x1)
    bool PadRight;                                                                    // 0x0119 (size: 0x1)
    bool PadTop;                                                                      // 0x011A (size: 0x1)
    bool PadBottom;                                                                   // 0x011B (size: 0x1)

    void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
}; // Size: 0x130

class USafeZoneSlot : public UPanelSlot
{
    bool bIsTitleSafe;                                                                // 0x0038 (size: 0x1)
    FMargin SafeAreaScale;                                                            // 0x003C (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HAlign;                                         // 0x004C (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VAlign;                                           // 0x004D (size: 0x1)
    FMargin Padding;                                                                  // 0x0050 (size: 0x10)

}; // Size: 0x60

class UScaleBox : public UContentWidget
{
    TEnumAsByte<EStretch::Type> Stretch;                                              // 0x0118 (size: 0x1)
    TEnumAsByte<EStretchDirection::Type> StretchDirection;                            // 0x0119 (size: 0x1)
    float UserSpecifiedScale;                                                         // 0x011C (size: 0x4)
    bool IgnoreInheritedScale;                                                        // 0x0120 (size: 0x1)
    bool bSingleLayoutPass;                                                           // 0x0121 (size: 0x1)

    void SetUserSpecifiedScale(float InUserSpecifiedScale);
    void SetStretchDirection(TEnumAsByte<EStretchDirection::Type> InStretchDirection);
    void SetStretch(TEnumAsByte<EStretch::Type> InStretch);
    void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
}; // Size: 0x138

class UScaleBoxSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0048 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0049 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x60

class UScrollBar : public UWidget
{
    FScrollBarStyle WidgetStyle;                                                      // 0x0100 (size: 0x440)
    class USlateWidgetStyleAsset* Style;                                              // 0x0540 (size: 0x8)
    bool bAlwaysShowScrollbar;                                                        // 0x0548 (size: 0x1)
    TEnumAsByte<EOrientation> Orientation;                                            // 0x0549 (size: 0x1)
    FVector2D Thickness;                                                              // 0x054C (size: 0x8)

    void SetState(float InOffsetFraction, float InThumbSizeFraction);
}; // Size: 0x568

class UScrollBox : public UPanelWidget
{
    FScrollBoxStyle WidgetStyle;                                                      // 0x0118 (size: 0x1E8)
    FScrollBarStyle WidgetBarStyle;                                                   // 0x0300 (size: 0x440)
    class USlateWidgetStyleAsset* Style;                                              // 0x0740 (size: 0x8)
    class USlateWidgetStyleAsset* BarStyle;                                           // 0x0748 (size: 0x8)
    TEnumAsByte<EOrientation> Orientation;                                            // 0x0750 (size: 0x1)
    ESlateVisibility ScrollBarVisibility;                                             // 0x0751 (size: 0x1)
    EConsumeMouseWheel ConsumeMouseWheel;                                             // 0x0752 (size: 0x1)
    FVector2D ScrollbarThickness;                                                     // 0x0754 (size: 0x8)
    bool AlwaysShowScrollbar;                                                         // 0x075C (size: 0x1)
    bool AllowOverscroll;                                                             // 0x075D (size: 0x1)
    EDescendantScrollDestination NavigationDestination;                               // 0x075E (size: 0x1)
    float NavigationScrollPadding;                                                    // 0x0760 (size: 0x4)
    bool bAllowRightClickDragScrolling;                                               // 0x0764 (size: 0x1)
    FScrollBoxOnUserScrolled OnUserScrolled;                                          // 0x0768 (size: 0x10)

    void SetScrollOffset(float NewScrollOffset);
    void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
    void SetScrollbarThickness(const FVector2D& NewScrollbarThickness);
    void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
    void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
    void SetAllowOverscroll(bool NewAllowOverscroll);
    void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination);
    void ScrollToStart();
    void ScrollToEnd();
    float GetScrollOffset();
}; // Size: 0x790

class UScrollBoxSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0048 (size: 0x1)

    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x58

class USizeBox : public UContentWidget
{
    uint8 bOverride_WidthOverride;                                                    // 0x0118 (size: 0x1)
    uint8 bOverride_HeightOverride;                                                   // 0x0118 (size: 0x1)
    uint8 bOverride_MinDesiredWidth;                                                  // 0x0118 (size: 0x1)
    uint8 bOverride_MinDesiredHeight;                                                 // 0x0118 (size: 0x1)
    uint8 bOverride_MaxDesiredWidth;                                                  // 0x0118 (size: 0x1)
    uint8 bOverride_MaxDesiredHeight;                                                 // 0x0118 (size: 0x1)
    uint8 bOverride_MaxAspectRatio;                                                   // 0x0118 (size: 0x1)
    float WidthOverride;                                                              // 0x011C (size: 0x4)
    float HeightOverride;                                                             // 0x0120 (size: 0x4)
    float MinDesiredWidth;                                                            // 0x0124 (size: 0x4)
    float MinDesiredHeight;                                                           // 0x0128 (size: 0x4)
    float MaxDesiredWidth;                                                            // 0x012C (size: 0x4)
    float MaxDesiredHeight;                                                           // 0x0130 (size: 0x4)
    float MaxAspectRatio;                                                             // 0x0134 (size: 0x4)

    void SetWidthOverride(float InWidthOverride);
    void SetMinDesiredWidth(float InMinDesiredWidth);
    void SetMinDesiredHeight(float InMinDesiredHeight);
    void SetMaxDesiredWidth(float InMaxDesiredWidth);
    void SetMaxDesiredHeight(float InMaxDesiredHeight);
    void SetMaxAspectRatio(float InMaxAspectRatio);
    void SetHeightOverride(float InHeightOverride);
    void ClearWidthOverride();
    void ClearMinDesiredWidth();
    void ClearMinDesiredHeight();
    void ClearMaxDesiredWidth();
    void ClearMaxDesiredHeight();
    void ClearMaxAspectRatio();
    void ClearHeightOverride();
}; // Size: 0x148

class USizeBoxSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0048 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0049 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x60

class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void ScreenToWidgetLocal(class UObject* WorldContextObject, const FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate);
    void ScreenToWidgetAbsolute(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate);
    void ScreenToViewport(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);
    void LocalToViewport(class UObject* WorldContextObject, const FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);
    FVector2D LocalToAbsolute(const FGeometry& Geometry, FVector2D LocalCoordinate);
    bool IsUnderLocation(const FGeometry& Geometry, const FVector2D& AbsoluteCoordinate);
    FVector2D GetLocalSize(const FGeometry& Geometry);
    FVector2D GetAbsoluteSize(const FGeometry& Geometry);
    bool EqualEqual_SlateBrush(const FSlateBrush& A, const FSlateBrush& B);
    void AbsoluteToViewport(class UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);
    FVector2D AbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteCoordinate);
}; // Size: 0x28

class USlateDataSheet : public UObject
{
    class UTexture2D* DataTexture;                                                    // 0x0028 (size: 0x8)

}; // Size: 0x430

class USlateVectorArtData : public UObject
{
    TArray<FSlateMeshVertex> VertexData;                                              // 0x0028 (size: 0x10)
    TArray<uint32> IndexData;                                                         // 0x0038 (size: 0x10)
    class UMaterialInterface* Material;                                               // 0x0048 (size: 0x8)
    FVector2D ExtentMin;                                                              // 0x0050 (size: 0x8)
    FVector2D ExtentMax;                                                              // 0x0058 (size: 0x8)

}; // Size: 0x60

class USlider : public UWidget
{
    float Value;                                                                      // 0x0100 (size: 0x4)
    FSliderValueDelegate ValueDelegate;                                               // 0x0108 (size: 0x10)
    float GetFloat();
    FSliderStyle WidgetStyle;                                                         // 0x0118 (size: 0x1F0)
    TEnumAsByte<EOrientation> Orientation;                                            // 0x0308 (size: 0x1)
    FLinearColor SliderBarColor;                                                      // 0x030C (size: 0x10)
    FLinearColor SliderHandleColor;                                                   // 0x031C (size: 0x10)
    bool IndentHandle;                                                                // 0x032C (size: 0x1)
    bool Locked;                                                                      // 0x032D (size: 0x1)
    float StepSize;                                                                   // 0x0330 (size: 0x4)
    bool IsFocusable;                                                                 // 0x0334 (size: 0x1)
    FSliderOnMouseCaptureBegin OnMouseCaptureBegin;                                   // 0x0338 (size: 0x10)
    FSliderOnMouseCaptureEnd OnMouseCaptureEnd;                                       // 0x0348 (size: 0x10)
    FSliderOnControllerCaptureBegin OnControllerCaptureBegin;                         // 0x0358 (size: 0x10)
    FSliderOnControllerCaptureEnd OnControllerCaptureEnd;                             // 0x0368 (size: 0x10)
    FSliderOnValueChanged OnValueChanged;                                             // 0x0378 (size: 0x10)

    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    float GetValue();
}; // Size: 0x398

class USpacer : public UWidget
{
    FVector2D Size;                                                                   // 0x0100 (size: 0x8)

    void SetSize(FVector2D InSize);
}; // Size: 0x118

class USpinBox : public UWidget
{
    float Value;                                                                      // 0x0100 (size: 0x4)
    FSpinBoxValueDelegate ValueDelegate;                                              // 0x0108 (size: 0x10)
    float GetFloat();
    FSpinBoxStyle WidgetStyle;                                                        // 0x0118 (size: 0x298)
    class USlateWidgetStyleAsset* Style;                                              // 0x03B0 (size: 0x8)
    float Delta;                                                                      // 0x03B8 (size: 0x4)
    float SliderExponent;                                                             // 0x03BC (size: 0x4)
    FSlateFontInfo Font;                                                              // 0x03C0 (size: 0x58)
    TEnumAsByte<ETextJustify::Type> Justification;                                    // 0x0418 (size: 0x1)
    float MinDesiredWidth;                                                            // 0x041C (size: 0x4)
    bool ClearKeyboardFocusOnCommit;                                                  // 0x0420 (size: 0x1)
    bool SelectAllTextOnCommit;                                                       // 0x0421 (size: 0x1)
    FSlateColor ForegroundColor;                                                      // 0x0428 (size: 0x28)
    FSpinBoxOnValueChanged OnValueChanged;                                            // 0x0450 (size: 0x10)
    FSpinBoxOnValueCommitted OnValueCommitted;                                        // 0x0460 (size: 0x10)
    FSpinBoxOnBeginSliderMovement OnBeginSliderMovement;                              // 0x0470 (size: 0x10)
    FSpinBoxOnEndSliderMovement OnEndSliderMovement;                                  // 0x0480 (size: 0x10)
    uint8 bOverride_MinValue;                                                         // 0x0490 (size: 0x1)
    uint8 bOverride_MaxValue;                                                         // 0x0490 (size: 0x1)
    uint8 bOverride_MinSliderValue;                                                   // 0x0490 (size: 0x1)
    uint8 bOverride_MaxSliderValue;                                                   // 0x0490 (size: 0x1)
    float MinValue;                                                                   // 0x0494 (size: 0x4)
    float MaxValue;                                                                   // 0x0498 (size: 0x4)
    float MinSliderValue;                                                             // 0x049C (size: 0x4)
    float MaxSliderValue;                                                             // 0x04A0 (size: 0x4)

    void SetValue(float NewValue);
    void SetMinValue(float NewValue);
    void SetMinSliderValue(float NewValue);
    void SetMaxValue(float NewValue);
    void SetMaxSliderValue(float NewValue);
    void SetForegroundColor(FSlateColor InForegroundColor);
    void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void OnSpinBoxBeginSliderMovement__DelegateSignature();
    float GetValue();
    float GetMinValue();
    float GetMinSliderValue();
    float GetMaxValue();
    float GetMaxSliderValue();
    void ClearMinValue();
    void ClearMinSliderValue();
    void ClearMaxValue();
    void ClearMaxSliderValue();
}; // Size: 0x4B8

class UTableViewBase : public UWidget
{
}; // Size: 0x100

class UTextBinding : public UPropertyBinding
{

    FText GetTextValue();
    FString GetStringValue();
}; // Size: 0x50

class UTextBlock : public UTextLayoutWidget
{
    FText Text;                                                                       // 0x0128 (size: 0x18)
    FTextBlockTextDelegate TextDelegate;                                              // 0x0140 (size: 0x10)
    FText GetText();
    FSlateColor ColorAndOpacity;                                                      // 0x0150 (size: 0x28)
    FTextBlockColorAndOpacityDelegate ColorAndOpacityDelegate;                        // 0x0178 (size: 0x10)
    FSlateColor GetSlateColor();
    FSlateFontInfo Font;                                                              // 0x0188 (size: 0x58)
    FVector2D ShadowOffset;                                                           // 0x01E0 (size: 0x8)
    FLinearColor ShadowColorAndOpacity;                                               // 0x01E8 (size: 0x10)
    FTextBlockShadowColorAndOpacityDelegate ShadowColorAndOpacityDelegate;            // 0x01F8 (size: 0x10)
    FLinearColor GetLinearColor();
    float MinDesiredWidth;                                                            // 0x0208 (size: 0x4)
    bool bWrapWithInvalidationPanel;                                                  // 0x020C (size: 0x1)
    bool bAutoWrapText;                                                               // 0x020D (size: 0x1)

    void SetText(FText InText);
    void SetShadowOffset(FVector2D InShadowOffset);
    void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    void SetOpacity(float InOpacity);
    void SetMinDesiredWidth(float InMinDesiredWidth);
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    void SetFont(FSlateFontInfo InFontInfo);
    void SetColorAndOpacity(FSlateColor InColorAndOpacity);
    void SetAutoWrapText(bool InAutoTextWrap);
    FText GetText();
    class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
    class UMaterialInstanceDynamic* GetDynamicFontMaterial();
}; // Size: 0x220

class UTextLayoutWidget : public UWidget
{
    FShapedTextOptions ShapedTextOptions;                                             // 0x0100 (size: 0x8)
    TEnumAsByte<ETextJustify::Type> Justification;                                    // 0x0108 (size: 0x1)
    bool AutoWrapText;                                                                // 0x0109 (size: 0x1)
    float WrapTextAt;                                                                 // 0x010C (size: 0x4)
    ETextWrappingPolicy WrappingPolicy;                                               // 0x0110 (size: 0x1)
    FMargin Margin;                                                                   // 0x0114 (size: 0x10)
    float LineHeightPercentage;                                                       // 0x0124 (size: 0x4)

}; // Size: 0x128

class UThrobber : public UWidget
{
    int32 NumberOfPieces;                                                             // 0x0100 (size: 0x4)
    bool bAnimateHorizontally;                                                        // 0x0104 (size: 0x1)
    bool bAnimateVertically;                                                          // 0x0105 (size: 0x1)
    bool bAnimateOpacity;                                                             // 0x0106 (size: 0x1)
    class USlateBrushAsset* PieceImage;                                               // 0x0108 (size: 0x8)
    FSlateBrush Image;                                                                // 0x0110 (size: 0x78)

    void SetNumberOfPieces(int32 InNumberOfPieces);
    void SetAnimateVertically(bool bInAnimateVertically);
    void SetAnimateOpacity(bool bInAnimateOpacity);
    void SetAnimateHorizontally(bool bInAnimateHorizontally);
}; // Size: 0x198

class UTileView : public UTableViewBase
{
    float ItemWidth;                                                                  // 0x0100 (size: 0x4)
    float ItemHeight;                                                                 // 0x0104 (size: 0x4)
    TArray<class UObject*> Items;                                                     // 0x0108 (size: 0x10)
    TEnumAsByte<ESelectionMode::Type> SelectionMode;                                  // 0x0118 (size: 0x1)
    FTileViewOnGenerateTileEvent OnGenerateTileEvent;                                 // 0x0120 (size: 0x10)
    class UWidget* OnGenerateRowUObject(class UObject* Item);

    void SetItemWidth(float Width);
    void SetItemHeight(float Height);
    void RequestListRefresh();
}; // Size: 0x140

class UUMGSequencePlayer : public UObject
{
    class UWidgetAnimation* Animation;                                                // 0x0370 (size: 0x8)

}; // Size: 0x780

class UUniformGridPanel : public UPanelWidget
{
    FMargin SlotPadding;                                                              // 0x0118 (size: 0x10)
    float MinDesiredSlotWidth;                                                        // 0x0128 (size: 0x4)
    float MinDesiredSlotHeight;                                                       // 0x012C (size: 0x4)

    void SetSlotPadding(FMargin InSlotPadding);
    void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
    void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
    class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
}; // Size: 0x140

class UUniformGridSlot : public UPanelSlot
{
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0038 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0039 (size: 0x1)
    int32 Row;                                                                        // 0x003C (size: 0x4)
    int32 Column;                                                                     // 0x0040 (size: 0x4)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetRow(int32 InRow);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    void SetColumn(int32 InColumn);
}; // Size: 0x50

class UUserWidget : public UWidget
{
    FLinearColor ColorAndOpacity;                                                     // 0x0108 (size: 0x10)
    FUserWidgetColorAndOpacityDelegate ColorAndOpacityDelegate;                       // 0x0118 (size: 0x10)
    FLinearColor GetLinearColor();
    FSlateColor ForegroundColor;                                                      // 0x0128 (size: 0x28)
    FUserWidgetForegroundColorDelegate ForegroundColorDelegate;                       // 0x0150 (size: 0x10)
    FSlateColor GetSlateColor();
    FMargin Padding;                                                                  // 0x0160 (size: 0x10)
    TArray<class UUMGSequencePlayer*> ActiveSequencePlayers;                          // 0x0170 (size: 0x10)
    TArray<class UUMGSequencePlayer*> StoppedSequencePlayers;                         // 0x0180 (size: 0x10)
    TArray<FNamedSlotBinding> NamedSlotBindings;                                      // 0x0190 (size: 0x10)
    class UWidgetTree* WidgetTree;                                                    // 0x01A0 (size: 0x8)
    int32 Priority;                                                                   // 0x01A8 (size: 0x4)
    uint8 bSupportsKeyboardFocus;                                                     // 0x01AC (size: 0x1)
    uint8 bIsFocusable;                                                               // 0x01AC (size: 0x1)
    uint8 bStopAction;                                                                // 0x01AC (size: 0x1)
    uint8 bCanEverTick;                                                               // 0x01AC (size: 0x1)
    uint8 bCanEverPaint;                                                              // 0x01AC (size: 0x1)
    uint8 bCookedWidgetTree;                                                          // 0x01AC (size: 0x1)
    class UInputComponent* InputComponent;                                            // 0x01B0 (size: 0x8)

    void UnregisterInputComponent();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);
    void StopListeningForAllInputActions();
    void StopAnimationsAndLatentActions();
    void StopAnimation(const class UWidgetAnimation* InAnimation);
    void StopAllAnimations();
    void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);
    void SetPlaybackSpeed(const class UWidgetAnimation* InAnimation, float PlaybackSpeed);
    void SetPadding(FMargin InPadding);
    void SetOwningPlayer(class APlayerController* LocalPlayerController);
    void SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer);
    void SetNumLoopsToPlay(const class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay);
    void SetInputActionPriority(int32 NewPriority);
    void SetInputActionBlocking(bool bShouldBlock);
    void SetForegroundColor(FSlateColor InForegroundColor);
    void SetDesiredSizeInViewport(FVector2D Size);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetAnchorsInViewport(FAnchors Anchors);
    void SetAlignmentInViewport(FVector2D Alignment);
    void ReverseAnimation(const class UWidgetAnimation* InAnimation);
    void RemoveFromViewport();
    void RegisterInputComponent();
    void PreConstruct(bool IsDesignTime);
    void PlaySound(class USoundBase* SoundToPlay);
    void PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    void PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    float PauseAnimation(const class UWidgetAnimation* InAnimation);
    FEventReply OnTouchStarted(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    FEventReply OnTouchMoved(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    FEventReply OnTouchGesture(FGeometry MyGeometry, const FPointerEvent& GestureEvent);
    FEventReply OnTouchEnded(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnPaint(FPaintContext& Context);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseCaptureLost();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void OnAnimationStarted(const class UWidgetAnimation* Animation);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FListenForInputActionCallback Callback);
    bool IsPlayingAnimation();
    bool IsListeningForInputAction(FName ActionName);
    bool IsInViewport();
    bool IsInteractable();
    bool IsAnyAnimationPlaying();
    bool IsAnimationPlayingForward(const class UWidgetAnimation* InAnimation);
    bool IsAnimationPlaying(const class UWidgetAnimation* InAnimation);
    class APawn* GetOwningPlayerPawn();
    class ULocalPlayer* GetOwningLocalPlayer();
    bool GetIsVisible();
    float GetAnimationCurrentTime(const class UWidgetAnimation* InAnimation);
    FAnchors GetAnchorsInViewport();
    FVector2D GetAlignmentInViewport();
    void Destruct();
    void Construct();
    void CancelLatentActions();
    void AddToViewport(int32 ZOrder);
    bool AddToPlayerScreen(int32 ZOrder);
}; // Size: 0x208

class UVerticalBox : public UPanelWidget
{

    class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
}; // Size: 0x128

class UVerticalBoxSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    FSlateChildSize Size;                                                             // 0x0048 (size: 0x8)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0050 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0051 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetSize(FSlateChildSize InSize);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x60

class UViewport : public UContentWidget
{
    FLinearColor BackgroundColor;                                                     // 0x0118 (size: 0x10)

    class AActor* Spawn(TSubclassOf<class AActor> ActorClass);
    void SetViewRotation(FRotator Rotation);
    void SetViewLocation(FVector Location);
    FRotator GetViewRotation();
    class UWorld* GetViewportWorld();
    FVector GetViewLocation();
}; // Size: 0x140

class UVisibilityBinding : public UPropertyBinding
{

    ESlateVisibility GetValue();
}; // Size: 0x48

class UVisual : public UObject
{
}; // Size: 0x28

class UWidget : public UVisual
{
    class UPanelSlot* Slot;                                                           // 0x0028 (size: 0x8)
    FWidgetBIsEnabledDelegate bIsEnabledDelegate;                                     // 0x0030 (size: 0x10)
    bool GetBool();
    FText ToolTipText;                                                                // 0x0040 (size: 0x18)
    FWidgetToolTipTextDelegate ToolTipTextDelegate;                                   // 0x0058 (size: 0x10)
    FText GetText();
    class UWidget* ToolTipWidget;                                                     // 0x0068 (size: 0x8)
    FWidgetToolTipWidgetDelegate ToolTipWidgetDelegate;                               // 0x0070 (size: 0x10)
    class UWidget* GetWidget();
    FWidgetVisibilityDelegate VisibilityDelegate;                                     // 0x0080 (size: 0x10)
    ESlateVisibility GetSlateVisibility();
    FWidgetTransform RenderTransform;                                                 // 0x0090 (size: 0x1C)
    FVector2D RenderTransformPivot;                                                   // 0x00AC (size: 0x8)
    uint8 bIsVariable;                                                                // 0x00B4 (size: 0x1)
    uint8 bCreatedByConstructionScript;                                               // 0x00B4 (size: 0x1)
    uint8 bIsEnabled;                                                                 // 0x00B4 (size: 0x1)
    uint8 bOverride_Cursor;                                                           // 0x00B4 (size: 0x1)
    uint8 bIsVolatile;                                                                // 0x00B4 (size: 0x1)
    TEnumAsByte<EMouseCursor::Type> Cursor;                                           // 0x00B5 (size: 0x1)
    EWidgetClipping Clipping;                                                         // 0x00B6 (size: 0x1)
    ESlateVisibility Visibility;                                                      // 0x00B7 (size: 0x1)
    float RenderOpacity;                                                              // 0x00B8 (size: 0x4)
    class UWidgetNavigation* Navigation;                                              // 0x00C0 (size: 0x8)
    TArray<class UPropertyBinding*> NativeBindings;                                   // 0x00F0 (size: 0x10)

    void SetVisibility(ESlateVisibility InVisibility);
    void SetUserFocus(class APlayerController* PlayerController);
    void SetToolTipText(const FText& InToolTipText);
    void SetToolTip(class UWidget* Widget);
    void SetRenderTranslation(FVector2D Translation);
    void SetRenderTransformPivot(FVector2D Pivot);
    void SetRenderTransform(FWidgetTransform InTransform);
    void SetRenderShear(FVector2D Shear);
    void SetRenderScale(FVector2D Scale);
    void SetRenderOpacity(float InOpacity);
    void SetRenderAngle(float angle);
    void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);
    void SetKeyboardFocus();
    void SetIsEnabled(bool bInIsEnabled);
    void SetCursor(TEnumAsByte<EMouseCursor::Type> InCursor);
    void SetClipping(EWidgetClipping InClipping);
    void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);
    void ResetCursor();
    void RemoveFromParent();
    FEventReply OnReply__DelegateSignature();
    FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    bool IsVisible();
    bool IsHovered();
    void InvalidateLayoutAndVolatility();
    bool HasUserFocusedDescendants(class APlayerController* PlayerController);
    bool HasUserFocus(class APlayerController* PlayerController);
    bool HasMouseCapture();
    bool HasKeyboardFocus();
    bool HasFocusedDescendants();
    bool HasAnyUserFocus();
    class UWidget* GetWidget__DelegateSignature();
    ESlateVisibility GetVisibility();
    FText GetText__DelegateSignature();
    ESlateVisibility GetSlateVisibility__DelegateSignature();
    FSlateColor GetSlateColor__DelegateSignature();
    FSlateBrush GetSlateBrush__DelegateSignature();
    float GetRenderOpacity();
    class UPanelWidget* GetParent();
    class APlayerController* GetOwningPlayer();
    TEnumAsByte<EMouseCursor::Type> GetMouseCursor__DelegateSignature();
    FLinearColor GetLinearColor__DelegateSignature();
    bool GetIsEnabled();
    int32 GetInt32__DelegateSignature();
    float GetFloat__DelegateSignature();
    FVector2D GetDesiredSize();
    EWidgetClipping GetClipping();
    ECheckBoxState GetCheckBoxState__DelegateSignature();
    FGeometry GetCachedGeometry();
    bool GetBool__DelegateSignature();
    class UWidget* GenerateWidgetForString__DelegateSignature(FString Item);
    class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
    void ForceVolatile(bool bForce);
    void ForceLayoutPrepass();
}; // Size: 0x100

class UWidgetAnimation : public UMovieSceneSequence
{
    FWidgetAnimationOnAnimationStarted OnAnimationStarted;                            // 0x03B0 (size: 0x10)
    FWidgetAnimationOnAnimationFinished OnAnimationFinished;                          // 0x03C0 (size: 0x10)
    class UMovieScene* MovieScene;                                                    // 0x03D0 (size: 0x8)
    TArray<FWidgetAnimationBinding> AnimationBindings;                                // 0x03D8 (size: 0x10)

    float GetStartTime();
    float GetEndTime();
}; // Size: 0x3F0

class UWidgetBinding : public UPropertyBinding
{

    class UWidget* GetValue();
}; // Size: 0x48

class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
    class UWidgetTree* WidgetTree;                                                    // 0x02D8 (size: 0x8)
    uint8 bAllowTemplate;                                                             // 0x02E0 (size: 0x1)
    uint8 bValidTemplate;                                                             // 0x02E0 (size: 0x1)
    uint8 bTemplateInitialized;                                                       // 0x02E0 (size: 0x1)
    uint8 bCookedTemplate;                                                            // 0x02E0 (size: 0x1)
    TArray<FDelegateRuntimeBinding> Bindings;                                         // 0x02E8 (size: 0x10)
    TArray<class UWidgetAnimation*> Animations;                                       // 0x02F8 (size: 0x10)
    TArray<FName> NamedSlots;                                                         // 0x0308 (size: 0x10)
    TSoftObjectPtr<UUserWidget> TemplateAsset;                                        // 0x0318 (size: 0x28)
    class UUserWidget* Template;                                                      // 0x0340 (size: 0x8)

}; // Size: 0x348

class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FEventReply UnlockMouse(FEventReply& Reply);
    FEventReply Unhandled();
    FEventReply SetUserFocus(FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers);
    FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition);
    void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
    void SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
    void SetInputMode_GameOnly(class APlayerController* PlayerController);
    void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
    void SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
    bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor::Type> CursorShape, FName CursorName, FVector2D HotSpot);
    void SetFocusToGameViewport();
    void SetBrushResourceToTexture(FSlateBrush& Brush, class UTexture2D* Texture);
    void SetBrushResourceToMaterial(FSlateBrush& Brush, class UMaterialInterface* Material);
    FEventReply ReleaseMouseCapture(FEventReply& Reply);
    FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks);
    FSlateBrush NoResourceBrush();
    FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int32 Width, int32 Height);
    FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int32 Width, int32 Height);
    FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
    FEventReply LockMouse(FEventReply& Reply, class UWidget* CapturingWidget);
    bool IsDragDropping();
    bool Is4kAssetPath(FString InAssetPath);
    FEventReply Handled();
    void GetSafeZonePadding(class UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding);
    TSoftObjectPtr<UTexture> GetResolutionAppropriateTexture(const TSoftObjectPtr<UTexture>& InTexture);
    FKeyEvent GetKeyEventFromAnalogInputEvent(const FAnalogInputEvent& Event);
    FInputEvent GetInputEventFromPointerEvent(const FPointerEvent& Event);
    FInputEvent GetInputEventFromNavigationEvent(const FNavigationEvent& Event);
    FInputEvent GetInputEventFromKeyEvent(const FKeyEvent& Event);
    FInputEvent GetInputEventFromCharacterEvent(const FCharacterEvent& Event);
    class UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush& Brush);
    class UDragDropOperation* GetDragDroppingContent();
    class UTexture2D* GetBrushResourceAsTexture2D(FSlateBrush& Brush);
    class UMaterialInterface* GetBrushResourceAsMaterial(FSlateBrush& Brush);
    class UObject* GetBrushResource(FSlateBrush& Brush);
    void GetAllWidgetsWithInterface(class UObject* WorldContextObject, TSubclassOf<class UInterface> Interface, TArray<class UUserWidget*>& FoundWidgets, bool TopLevelOnly);
    void GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>& FoundWidgets, TSubclassOf<class UUserWidget> widgetClass, bool TopLevelOnly);
    FEventReply EndDragDrop(FEventReply& Reply);
    void DrawTextFormatted(FPaintContext& Context, const FText& Text, FVector2D Position, class UFont* Font, int32 FontSize, FName FontTypeFace, FLinearColor Tint);
    void DrawText(FPaintContext& Context, FString inString, FVector2D Position, FLinearColor Tint);
    void DrawLines(FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias);
    void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias);
    void DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, class USlateBrushAsset* Brush, FLinearColor Tint);
    void DismissAllMenus();
    FEventReply DetectDragIfPressed(const FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, FKey DragKey);
    FEventReply DetectDrag(FEventReply& Reply, class UWidget* WidgetDetectingDrag, FKey DragKey);
    class UDragDropOperation* CreateDragDropOperation(TSubclassOf<class UDragDropOperation> OperationClass);
    class UUserWidget* Create(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetType, class APlayerController* OwningPlayer);
    FString ConvertTo4kAssetPath(FString InAssetPath);
    FString ConvertTo2kAssetPath(FString InAssetPath);
    FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers);
    FEventReply CaptureMouse(FEventReply& Reply, class UWidget* CapturingWidget);
    FEventReply CaptureJoystick(FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
    void CancelDragDrop();
}; // Size: 0x28

class UWidgetBlueprintLibrarySettings : public UObject
{
    FSoftObjectPath Missing4kAssetTexture;                                            // 0x0028 (size: 0x18)

}; // Size: 0x40

class UWidgetComponent : public UMeshComponent
{
    EWidgetSpace Space;                                                               // 0x0698 (size: 0x1)
    EWidgetTimingPolicy TimingPolicy;                                                 // 0x0699 (size: 0x1)
    TSubclassOf<class UUserWidget> widgetClass;                                       // 0x06A0 (size: 0x8)
    FIntPoint DrawSize;                                                               // 0x06A8 (size: 0x8)
    bool bManuallyRedraw;                                                             // 0x06B0 (size: 0x1)
    bool bRedrawRequested;                                                            // 0x06B1 (size: 0x1)
    float RedrawTime;                                                                 // 0x06B4 (size: 0x4)
    FIntPoint CurrentDrawSize;                                                        // 0x06C0 (size: 0x8)
    bool bDrawAtDesiredSize;                                                          // 0x06C8 (size: 0x1)
    FVector2D Pivot;                                                                  // 0x06CC (size: 0x8)
    bool bReceiveHardwareInput;                                                       // 0x06D4 (size: 0x1)
    bool bWindowFocusable;                                                            // 0x06D5 (size: 0x1)
    class ULocalPlayer* OwnerPlayer;                                                  // 0x06D8 (size: 0x8)
    FLinearColor BackgroundColor;                                                     // 0x06E0 (size: 0x10)
    FLinearColor TintColorAndOpacity;                                                 // 0x06F0 (size: 0x10)
    float OpacityFromTexture;                                                         // 0x0700 (size: 0x4)
    EWidgetBlendMode BlendMode;                                                       // 0x0704 (size: 0x1)
    bool bIsTwoSided;                                                                 // 0x0705 (size: 0x1)
    bool TickWhenOffscreen;                                                           // 0x0706 (size: 0x1)
    class UUserWidget* Widget;                                                        // 0x0708 (size: 0x8)
    class UBodySetup* BodySetup;                                                      // 0x0730 (size: 0x8)
    class UMaterialInterface* TranslucentMaterial;                                    // 0x0738 (size: 0x8)
    class UMaterialInterface* TranslucentMaterial_OneSided;                           // 0x0740 (size: 0x8)
    class UMaterialInterface* OpaqueMaterial;                                         // 0x0748 (size: 0x8)
    class UMaterialInterface* OpaqueMaterial_OneSided;                                // 0x0750 (size: 0x8)
    class UMaterialInterface* MaskedMaterial;                                         // 0x0758 (size: 0x8)
    class UMaterialInterface* MaskedMaterial_OneSided;                                // 0x0760 (size: 0x8)
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x0768 (size: 0x8)
    class UMaterialInstanceDynamic* MaterialInstance;                                 // 0x0770 (size: 0x8)
    bool bAddedToScreen;                                                              // 0x0778 (size: 0x1)
    bool bEditTimeUsable;                                                             // 0x0779 (size: 0x1)
    FName SharedLayerName;                                                            // 0x0780 (size: 0x8)
    int32 LayerZOrder;                                                                // 0x0788 (size: 0x4)
    EWidgetGeometryMode GeometryMode;                                                 // 0x078C (size: 0x1)
    float CylinderArcAngle;                                                           // 0x0790 (size: 0x4)

    void SetWidget(class UUserWidget* Widget);
    void SetTintColorAndOpacity(const FLinearColor NewTintColorAndOpacity);
    void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
    void SetDrawSize(FVector2D Size);
    void SetBackgroundColor(const FLinearColor NewBackgroundColor);
    void RequestRedraw();
    class UUserWidget* GetUserWidgetObject();
    class UTextureRenderTarget2D* GetRenderTarget();
    class ULocalPlayer* GetOwnerPlayer();
    class UMaterialInstanceDynamic* GetMaterialInstance();
    FVector2D GetDrawSize();
}; // Size: 0x7C0

class UWidgetInteractionComponent : public USceneComponent
{
    FWidgetInteractionComponentOnHoveredWidgetChanged OnHoveredWidgetChanged;         // 0x02A0 (size: 0x10)
    int32 VirtualUserIndex;                                                           // 0x02C0 (size: 0x4)
    float PointerIndex;                                                               // 0x02C4 (size: 0x4)
    TEnumAsByte<ECollisionChannel> TraceChannel;                                      // 0x02C8 (size: 0x1)
    float InteractionDistance;                                                        // 0x02CC (size: 0x4)
    EWidgetInteractionSource InteractionSource;                                       // 0x02D0 (size: 0x1)
    bool bEnableHitTesting;                                                           // 0x02D1 (size: 0x1)
    bool bShowDebug;                                                                  // 0x02D2 (size: 0x1)
    FLinearColor DebugColor;                                                          // 0x02D4 (size: 0x10)
    FHitResult CustomHitResult;                                                       // 0x0360 (size: 0x88)
    FVector2D LocalHitLocation;                                                       // 0x03E8 (size: 0x8)
    FVector2D LastLocalHitLocation;                                                   // 0x03F0 (size: 0x8)
    class UWidgetComponent* HoveredWidgetComponent;                                   // 0x03F8 (size: 0x8)
    FHitResult LastHitResult;                                                         // 0x0400 (size: 0x88)
    bool bIsHoveredWidgetInteractable;                                                // 0x0488 (size: 0x1)
    bool bIsHoveredWidgetFocusable;                                                   // 0x0489 (size: 0x1)
    bool bIsHoveredWidgetHitTestVisible;                                              // 0x048A (size: 0x1)

    void SetCustomHitResult(const FHitResult& HitResult);
    bool SendKeyChar(FString Characters, bool bRepeat);
    void ScrollWheel(float ScrollDelta);
    void ReleasePointerKey(FKey Key);
    bool ReleaseKey(FKey Key);
    void PressPointerKey(FKey Key);
    bool PressKey(FKey Key, bool bRepeat);
    bool PressAndReleaseKey(FKey Key);
    bool IsOverInteractableWidget();
    bool IsOverHitTestVisibleWidget();
    bool IsOverFocusableWidget();
    FHitResult GetLastHitResult();
    class UWidgetComponent* GetHoveredWidgetComponent();
    FVector2D Get2DHitLocation();
}; // Size: 0x490

class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{

    class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);
    class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);
    class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);
    class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);
    class UGridSlot* SlotAsGridSlot(class UWidget* Widget);
    class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);
    class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);
    void RemoveAllWidgets(class UObject* WorldContextObject);
    bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition);
    FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);
    FVector2D GetViewportSize(class UObject* WorldContextObject);
    float GetViewportScale(class UObject* WorldContextObject);
    FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
    bool GetMousePositionScaledByDPI(class APlayerController* Player, float& LocationX, float& LocationY);
    FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);
    FVector2D GetMousePositionOnPlatform();
}; // Size: 0x28

class UWidgetNavigation : public UObject
{
    FWidgetNavigationData Up;                                                         // 0x0028 (size: 0x28)
    FWidgetNavigationData Down;                                                       // 0x0050 (size: 0x28)
    FWidgetNavigationData Left;                                                       // 0x0078 (size: 0x28)
    FWidgetNavigationData Right;                                                      // 0x00A0 (size: 0x28)
    FWidgetNavigationData Next;                                                       // 0x00C8 (size: 0x28)
    FWidgetNavigationData Previous;                                                   // 0x00F0 (size: 0x28)

}; // Size: 0x118

class UWidgetSwitcher : public UPanelWidget
{
    int32 ActiveWidgetIndex;                                                          // 0x0118 (size: 0x4)

    void SetActiveWidgetIndex(int32 Index);
    void SetActiveWidget(class UWidget* Widget);
    class UWidget* GetWidgetAtIndex(int32 Index);
    int32 GetNumWidgets();
    int32 GetActiveWidgetIndex();
    class UWidget* GetActiveWidget();
}; // Size: 0x130

class UWidgetSwitcherSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0048 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0049 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x58

class UWidgetTree : public UObject
{
    class UWidget* RootWidget;                                                        // 0x0028 (size: 0x8)
    TArray<class UWidget*> AllWidgets;                                                // 0x0030 (size: 0x10)

}; // Size: 0x40

class UWindowTitleBarArea : public UContentWidget
{
    bool bDoubleClickTogglesFullscreen;                                               // 0x0118 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x138

class UWindowTitleBarAreaSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0048 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0049 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x60

class UWrapBox : public UPanelWidget
{
    FVector2D InnerSlotPadding;                                                       // 0x0118 (size: 0x8)
    float WrapWidth;                                                                  // 0x0120 (size: 0x4)
    bool bExplicitWrapWidth;                                                          // 0x0124 (size: 0x1)

    void SetInnerSlotPadding(FVector2D InPadding);
    class UWrapBoxSlot* AddChildWrapBox(class UWidget* Content);
}; // Size: 0x138

class UWrapBoxSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    bool bFillEmptySpace;                                                             // 0x0048 (size: 0x1)
    float FillSpanWhenLessThan;                                                       // 0x004C (size: 0x4)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0050 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0051 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
    void SetFillEmptySpace(bool InbFillEmptySpace);
}; // Size: 0x60

#endif
