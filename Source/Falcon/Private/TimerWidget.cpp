#include "TimerWidget.h"

void UTimerWidget::SetRemainingSeconds(float T) {
}

UTimerWidget::UTimerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->RemainingSeconds = 0.00f;
    this->RawMinutesPart = 0;
    this->RawSecondsPart = 0;
    this->RawFractionalPart = 0;
}

