#include "PhasmidRichTextBox.h"

void UPhasmidRichTextBox::SetTextAndRebuild(const FText& InText) {
}

void UPhasmidRichTextBox::SetText(FText InText) {
}

void UPhasmidRichTextBox::SetShadowOffset(FVector2D InShadowOffset) {
}

void UPhasmidRichTextBox::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void UPhasmidRichTextBox::SetOpacity(float InOpacity) {
}

void UPhasmidRichTextBox::SetMarqueeTime(float durationSeconds) {
}

void UPhasmidRichTextBox::SetJustification(TEnumAsByte<ETextJustify::Type> InJustification) {
}

void UPhasmidRichTextBox::SetFontSize(int32 FontSize) {
}

void UPhasmidRichTextBox::SetFont(FSlateFontInfo InFontInfo) {
}

void UPhasmidRichTextBox::SetColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UPhasmidRichTextBox::RebuildTextBox() {
}

void UPhasmidRichTextBox::MarqueeSkipToEndOfSection() {
}

void UPhasmidRichTextBox::MarqueeSkipToEnd() {
}

bool UPhasmidRichTextBox::MarqueeAllTextShown() {
    return false;
}

void UPhasmidRichTextBox::MarqueeAdvanceSection() {
}

//void UPhasmidRichTextBox::HandleOnNewInputSource(EInputSource NewSource) {
//}

FText UPhasmidRichTextBox::GetText() const {
    return FText::GetEmpty();
}

TEnumAsByte<ETextJustify::Type> UPhasmidRichTextBox::GetJustification() const {
    return ETextJustify::Left;
}

UPhasmidRichTextBox::UPhasmidRichTextBox() {
    this->forceRTL = false;
    this->force_centered = false;
    this->sizeToFit = false;
    this->marqueeTime = 0.00f;
    this->bWrapWithInvalidationPanel = false;
    this->Justification = ETextJustify::Left;
    this->ControlImageTable = NULL;
    this->imageScalar = 0.80f;
    this->colorTable = NULL;
    this->bEnableVerticalScroll = true;
    this->verticalScrollRate = 100.00f;
}

